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

#pragma warning disable 520

#include "mcc_generated_files/mcc.h"

#define NUM_OF_LEDS         144
#define NUM_OF_SECTIONS     4
#define SECT_0_START        1
#define SECT_0_END          ((NUM_OF_LEDS / NUM_OF_SECTIONS) + SECT_0_START)
#define SECT_1_START        SECT_0_END
#define SECT_1_END          ((NUM_OF_LEDS / NUM_OF_SECTIONS) + SECT_1_START)
#define SECT_2_START        SECT_1_END
#define SECT_2_END          ((NUM_OF_LEDS / NUM_OF_SECTIONS) + SECT_2_START)
#define SECT_3_START        SECT_2_END
#define SECT_3_END          ((NUM_OF_LEDS / NUM_OF_SECTIONS) + SECT_3_START)
#define BYTES_PER_LED       4
#define START_FRAME         1
#define RESET_FRAME         1
#define STOP_FRAMES         (((NUM_OF_LEDS / 2) / (BYTES_PER_LED * 8)) + 1)
#define DATA_SIZE           ( START_FRAME + NUM_OF_LEDS + RESET_FRAME + STOP_FRAMES )
#define START_FRAME_VALUE   0x00000000
#define RESET_FRAME_VALUE   0x00000000
#define STOP_FRAME_VALUE    0x00000000

// Vdd = 5V, ADC res = 10 bits
// (5V) / (2^10) = 0.0048 V
#define MV_PER_ADC_STEP     5
#define SYSTEM_GAIN_VOLTAGE 10


#define MA_PER_ADC_STEP     5
#define SYSTEM_GAIN_CURRENT 2

uint32_t ledData[ DATA_SIZE ];

volatile bool changedFlag = 0;

uint16_t adcResult;
uint16_t ledVoltage_mV;
uint16_t ledCurrent_mA;

volatile uint8_t ledBrightness = 0x00;
volatile bool section0State = 1;
volatile bool section1State = 1;
volatile bool section2State = 1;
volatile bool section3State = 1;

uint32_t setPixel(uint8_t r, uint8_t g, uint8_t b, uint8_t bright);

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
    PWR_EN_SetHigh();
    
    // User LEDs start on RED.  Wait 1s then cycle to green, then back to red.    
    __delay_ms(1000);
    LATC = 0x00;
    LATD = 0xFF;
    __delay_ms(500);
    LATD = 0x00;
    LATC = 0xFF;
    
    while (1)
    {
        // Read LED Voltage
        adcResult = ADC_GetConversion(V_SNS);
        ledVoltage_mV = adcResult * MV_PER_ADC_STEP * SYSTEM_GAIN_VOLTAGE;
        // Read LED Current
        adcResult = ADC_GetConversion(I_SNS);
        ledCurrent_mA = adcResult * MA_PER_ADC_STEP * SYSTEM_GAIN_CURRENT;        
                
        // Button Pressed Check
        if(changedFlag)
        {
            __delay_ms(10);
            changedFlag = 0;
            buildLedData();
            sendLedData();
        }
        
        // MTOUCH Service
        MTOUCH_Service_Mainloop();
    }
}

void buildLedData(void)
{
    uint16_t i=0, j=0;
    uint8_t section = 0;
    
    ledData[0] = START_FRAME_VALUE;
    
    for( i = 1; i < ( NUM_OF_LEDS + 1 ); i++)  // ledData[1] is first led
    {
        if( i >= SECT_0_START && i <= SECT_0_END )
            section = section0State;
        if( i >= SECT_1_START && i <= SECT_1_END )
            section = section1State;
        if( i >= SECT_2_START && i <= SECT_2_END )
            section = section2State;
        if( i >= SECT_3_START && i <= SECT_3_END )
            section = section3State;
        
        ledData[i] = setPixel(ledBrightness * section, ledBrightness * section, ledBrightness * section, 0x1F * section);
    }
    
    ledData[NUM_OF_LEDS + 1] = RESET_FRAME_VALUE;
    
    for( j = ( NUM_OF_LEDS + 2 ); j < DATA_SIZE; j++)
    {
        ledData[j] = STOP_FRAME_VALUE;
    }
}

uint32_t setPixel(uint8_t r, uint8_t g, uint8_t b, uint8_t bright)
{
    // range check brightness
    if(!(bright < 0x20))
    {
        bright = 0x1F;
    }
    
    return ( (uint32_t)( 0xE0 | bright) | (uint32_t)b << 8 | (uint32_t)g << 16 | (uint32_t)r << 24 );
}

void sendLedData(void)
{
    uint8_t readDummy;
    uint8_t *dataPointer;
    uint16_t i;
    
    dataPointer = (uint8_t *)ledData;
    
    for(i=0; i<(DATA_SIZE*BYTES_PER_LED); i++)
    {
        readDummy = SPI_Exchange8bit(dataPointer[i]);
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
            PWR_EN_SetLow();
            changedFlag = 1;
            break;
        case button_BRIGHT_UP:
            LED_2_RED_Toggle();
            LED_2_GREEN_Toggle();
            ledBrightness+=8;
            changedFlag = 1;
            break;
        case button_BRIGHT_DN:
            LED_3_RED_Toggle();
            LED_3_GREEN_Toggle();
            ledBrightness-=8;
            changedFlag = 1;
            break;
        case button_OFF:
            LED_4_RED_Toggle();
            LED_4_GREEN_Toggle();
            PWR_EN_SetHigh();
            changedFlag = 1;
            break;
        case button_SECT_0:
            LED_5_RED_Toggle();
            LED_5_GREEN_Toggle();
            section0State = !section0State;
            changedFlag = 1;
            break;
        case button_SECT_1:
            LED_6_RED_Toggle();
            LED_6_GREEN_Toggle();
            section1State = !section1State;
            changedFlag = 1;
            break;
        case button_SECT_2:
            LED_7_RED_Toggle();
            LED_7_GREEN_Toggle();
            section2State = !section2State;
            changedFlag = 1;
            break;
        case button_SECT_3:
            LED_8_RED_Toggle();
            LED_8_GREEN_Toggle();
            section3State = !section3State;
            changedFlag = 1;
            break;
        default:
            break;
    }
}
/**
 End of File
*/