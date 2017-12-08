/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.55
        Device            :  PIC16F1719
        Driver Version    :  2.00
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

#define NUM_OF_LEDS         144
#define NUM_OF_SECTIONS     4
#define BYTES_PER_LED       4
#define HEADER_BYTES        4
#define TRAILER_BYTES       4
#define DATA_SIZE           ( HEADER_BYTES + (NUM_OF_LEDS * BYTES_PER_LED) + TRAILER_BYTES )

uint8_t ledData[ DATA_SIZE ];

uint8_t ledBrightness = 0x00;
uint8_t section0State = 0x00;
uint8_t section1State = 0x00;
uint8_t section2State = 0x00;
uint8_t section3State = 0x00;

void setSection0State(bool state);
void setSection1State(bool state);
void setSection2State(bool state);
void setSection3State(bool state);
void setLedBrightness(uint8_t brightness);
void buildLedData(void);
void sendLedData(void);

void handleButtonTouch(enum mtouch_button_names button);
void handleButtonRelease(enum mtouch_button_names button);

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    // Register MTOUCH callbacks
    MTOUCH_Button_SetPressedCallback(handleButtonTouch);
    MTOUCH_Button_SetNotPressedCallback(handleButtonRelease);
    
    // Start PWR_EN pin HIGH (turns off power to LED strip)
    //PWR_EN_SetHigh();
    PWR_EN_SetLow();
    
    // User LEDs start on RED.  Wait 1s then cycle to green, then back to red.    
    __delay_ms(1000);
    LATC = 0x00;
    LATD = 0xFF;
    __delay_ms(500);
    LATD = 0x00;
    LATC = 0xFF;
    
    setSection0State(1);
    setSection1State(1);
    setSection2State(1);
    setSection3State(1);
    setLedBrightness(0x1F);
    buildLedData();
    sendLedData();
    NOP();
    
    while (1)
    {
        // Add your application code
        MTOUCH_Service_Mainloop();
    }
}

void setSection0State(bool state)
{
    section0State = state;
}

void setSection1State(bool state)
{
    section1State = state;
}

void setSection2State(bool state)
{
    section2State = state;
}

void setSection3State(bool state)
{
    section3State = state;
}

void setLedBrightness(uint8_t brightness)
{
    // range check brightness
    if(!(brightness < 0x20))
        brightness = 0x1F;
    
    ledBrightness = brightness;
}

void buildLedData(void)
{
    uint16_t i=0;
    uint8_t sectionState = 0x00;
    
    // Clear data buffer
    for(i=0; i<DATA_SIZE; i++)
        ledData[i] = 0x00;
    
    // Fill data buffer based on current values
    for(i=0; i<HEADER_BYTES; i++)
        ledData[i] = 0x00;
    for(i=HEADER_BYTES; i<(DATA_SIZE-TRAILER_BYTES); i+=BYTES_PER_LED)
    {
        if( (i/4) > 0 && (i/4) < (NUM_OF_LEDS / NUM_OF_SECTIONS) )
        {// Section 0
            sectionState = section0State;
        }
        if( (i/4) > (NUM_OF_LEDS / NUM_OF_SECTIONS) && (i/4) < ((NUM_OF_LEDS / NUM_OF_SECTIONS) * 2))
        {// Section 1
            sectionState = section1State;
        }
        if( (i/4) > ((NUM_OF_LEDS / NUM_OF_SECTIONS) * 2) && (i/4) < ((NUM_OF_LEDS / NUM_OF_SECTIONS) * 3))
        {// Section 2
            sectionState = section2State;
        }
        if( (i/4) > ((NUM_OF_LEDS / NUM_OF_SECTIONS) * 3) && (i/4) < NUM_OF_LEDS)
        {// Section 3
            sectionState = section3State;
        }
        ledData[i] = (uint8_t)((0xFF & ledBrightness) | 0xE0);
        ledData[i+1] = (uint8_t)(0xFF * sectionState);
        ledData[i+2] = (uint8_t)(0xFF * sectionState);
        ledData[i+3] = (uint8_t)(0xFF * sectionState);
    }
    for(i=(DATA_SIZE-TRAILER_BYTES); i<DATA_SIZE; i++)
        ledData[i] = 0xFF;        
}

void sendLedData(void)
{
    uint8_t readDummy;
    uint16_t i;
    
    for(i=0; i<DATA_SIZE; i++)
    {
        readDummy = SPI_Exchange8bit(ledData[i]);
        readDummy = SPI_Exchange8bit(DUMMY_DATA);
    }    
}

void handleButtonTouch(enum mtouch_button_names button)
{
    switch(button)
    {
        case button_ON:
            LED_1_RED_Toggle();
            LED_1_GREEN_Toggle();
            break;
        case button_BRIGHT_UP:
            LED_2_RED_Toggle();
            LED_2_GREEN_Toggle();
            break;
        case button_BRIGHT_DN:
            LED_3_RED_Toggle();
            LED_3_GREEN_Toggle();
            break;
        case button_OFF:
            LED_4_RED_Toggle();
            LED_4_GREEN_Toggle();
            break;
        case button_SECT_0:
            LED_5_RED_Toggle();
            LED_5_GREEN_Toggle();
            break;
        case button_SECT_1:
            LED_6_RED_Toggle();
            LED_6_GREEN_Toggle();
            break;
        case button_SECT_2:
            LED_7_RED_Toggle();
            LED_7_GREEN_Toggle();
            break;
        case button_SECT_3:
            LED_8_RED_Toggle();
            LED_8_GREEN_Toggle();
            break;
        default:
            break;
    }
}
void handleButtonRelease(enum mtouch_button_names button)
{
    switch(button)
    {
        case button_ON:
            LED_1_RED_Toggle();
            LED_1_GREEN_Toggle();
            break;
        case button_BRIGHT_UP:
            LED_2_RED_Toggle();
            LED_2_GREEN_Toggle();
            break;
        case button_BRIGHT_DN:
            LED_3_RED_Toggle();
            LED_3_GREEN_Toggle();
            break;
        case button_OFF:
            LED_4_RED_Toggle();
            LED_4_GREEN_Toggle();
            break;
        case button_SECT_0:
            LED_5_RED_Toggle();
            LED_5_GREEN_Toggle();
            break;
        case button_SECT_1:
            LED_6_RED_Toggle();
            LED_6_GREEN_Toggle();
            break;
        case button_SECT_2:
            LED_7_RED_Toggle();
            LED_7_GREEN_Toggle();
            break;
        case button_SECT_3:
            LED_8_RED_Toggle();
            LED_8_GREEN_Toggle();
            break;
        default:
            break;
    }
}
/**
 End of File
*/