/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1719
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()    do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()   do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()   do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()         PORTAbits.RA0
#define RA0_SetDigitalInput()   do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()  do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()     do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()   do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode() do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()    do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()   do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()   do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()         PORTAbits.RA1
#define RA1_SetDigitalInput()   do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()  do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()     do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()   do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode() do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()     do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()   do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()    do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()   do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()   do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()         PORTAbits.RA3
#define RA3_SetDigitalInput()   do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()  do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()     do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()   do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode() do { ANSELAbits.ANSA3 = 1; } while(0)
#define RA3_SetDigitalMode()do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()    do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()   do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()   do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()         PORTAbits.RA5
#define RA5_SetDigitalInput()   do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()  do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()     do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()   do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode() do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS               TRISBbits.TRISB0
#define SCK_LAT                LATBbits.LATB0
#define SCK_PORT               PORTBbits.RB0
#define SCK_WPU                WPUBbits.WPUB0
#define SCK_OD                ODCONBbits.ODB0
#define SCK_ANS                ANSELBbits.ANSB0
#define SCK_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SCK_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SCK_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SCK_GetValue()           PORTBbits.RB0
#define SCK_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SCK_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define SCK_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define SCK_SetPushPull()    do { ODCONBbits.ODB0 = 0; } while(0)
#define SCK_SetOpenDrain()   do { ODCONBbits.ODB0 = 1; } while(0)
#define SCK_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define SCK_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS               TRISBbits.TRISB1
#define SDO_LAT                LATBbits.LATB1
#define SDO_PORT               PORTBbits.RB1
#define SDO_WPU                WPUBbits.WPUB1
#define SDO_OD                ODCONBbits.ODB1
#define SDO_ANS                ANSELBbits.ANSB1
#define SDO_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SDO_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SDO_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SDO_GetValue()           PORTBbits.RB1
#define SDO_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SDO_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define SDO_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define SDO_SetPushPull()    do { ODCONBbits.ODB1 = 0; } while(0)
#define SDO_SetOpenDrain()   do { ODCONBbits.ODB1 = 1; } while(0)
#define SDO_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define SDO_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS               TRISBbits.TRISB2
#define SDI_LAT                LATBbits.LATB2
#define SDI_PORT               PORTBbits.RB2
#define SDI_WPU                WPUBbits.WPUB2
#define SDI_OD                ODCONBbits.ODB2
#define SDI_ANS                ANSELBbits.ANSB2
#define SDI_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SDI_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SDI_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SDI_GetValue()           PORTBbits.RB2
#define SDI_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SDI_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define SDI_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define SDI_SetPushPull()    do { ODCONBbits.ODB2 = 0; } while(0)
#define SDI_SetOpenDrain()   do { ODCONBbits.ODB2 = 1; } while(0)
#define SDI_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define SDI_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set V_SNS aliases
#define V_SNS_TRIS               TRISBbits.TRISB3
#define V_SNS_LAT                LATBbits.LATB3
#define V_SNS_PORT               PORTBbits.RB3
#define V_SNS_WPU                WPUBbits.WPUB3
#define V_SNS_OD                ODCONBbits.ODB3
#define V_SNS_ANS                ANSELBbits.ANSB3
#define V_SNS_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define V_SNS_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define V_SNS_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define V_SNS_GetValue()           PORTBbits.RB3
#define V_SNS_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define V_SNS_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define V_SNS_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define V_SNS_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define V_SNS_SetPushPull()    do { ODCONBbits.ODB3 = 0; } while(0)
#define V_SNS_SetOpenDrain()   do { ODCONBbits.ODB3 = 1; } while(0)
#define V_SNS_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define V_SNS_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set PWR_EN aliases
#define PWR_EN_TRIS               TRISBbits.TRISB4
#define PWR_EN_LAT                LATBbits.LATB4
#define PWR_EN_PORT               PORTBbits.RB4
#define PWR_EN_WPU                WPUBbits.WPUB4
#define PWR_EN_OD                ODCONBbits.ODB4
#define PWR_EN_ANS                ANSELBbits.ANSB4
#define PWR_EN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define PWR_EN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define PWR_EN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define PWR_EN_GetValue()           PORTBbits.RB4
#define PWR_EN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define PWR_EN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define PWR_EN_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define PWR_EN_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define PWR_EN_SetPushPull()    do { ODCONBbits.ODB4 = 0; } while(0)
#define PWR_EN_SetOpenDrain()   do { ODCONBbits.ODB4 = 1; } while(0)
#define PWR_EN_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define PWR_EN_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set I_SNS aliases
#define I_SNS_TRIS               TRISBbits.TRISB5
#define I_SNS_LAT                LATBbits.LATB5
#define I_SNS_PORT               PORTBbits.RB5
#define I_SNS_WPU                WPUBbits.WPUB5
#define I_SNS_OD                ODCONBbits.ODB5
#define I_SNS_ANS                ANSELBbits.ANSB5
#define I_SNS_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define I_SNS_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define I_SNS_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define I_SNS_GetValue()           PORTBbits.RB5
#define I_SNS_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define I_SNS_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define I_SNS_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define I_SNS_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define I_SNS_SetPushPull()    do { ODCONBbits.ODB5 = 0; } while(0)
#define I_SNS_SetOpenDrain()   do { ODCONBbits.ODB5 = 1; } while(0)
#define I_SNS_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define I_SNS_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LED_4_RED aliases
#define LED_4_RED_TRIS               TRISCbits.TRISC0
#define LED_4_RED_LAT                LATCbits.LATC0
#define LED_4_RED_PORT               PORTCbits.RC0
#define LED_4_RED_WPU                WPUCbits.WPUC0
#define LED_4_RED_OD                ODCONCbits.ODC0
#define LED_4_RED_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_4_RED_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_4_RED_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_4_RED_GetValue()           PORTCbits.RC0
#define LED_4_RED_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_4_RED_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_4_RED_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_4_RED_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_4_RED_SetPushPull()    do { ODCONCbits.ODC0 = 0; } while(0)
#define LED_4_RED_SetOpenDrain()   do { ODCONCbits.ODC0 = 1; } while(0)

// get/set LED_3_RED aliases
#define LED_3_RED_TRIS               TRISCbits.TRISC1
#define LED_3_RED_LAT                LATCbits.LATC1
#define LED_3_RED_PORT               PORTCbits.RC1
#define LED_3_RED_WPU                WPUCbits.WPUC1
#define LED_3_RED_OD                ODCONCbits.ODC1
#define LED_3_RED_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_3_RED_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_3_RED_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_3_RED_GetValue()           PORTCbits.RC1
#define LED_3_RED_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_3_RED_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_3_RED_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_3_RED_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_3_RED_SetPushPull()    do { ODCONCbits.ODC1 = 0; } while(0)
#define LED_3_RED_SetOpenDrain()   do { ODCONCbits.ODC1 = 1; } while(0)

// get/set LED_2_RED aliases
#define LED_2_RED_TRIS               TRISCbits.TRISC2
#define LED_2_RED_LAT                LATCbits.LATC2
#define LED_2_RED_PORT               PORTCbits.RC2
#define LED_2_RED_WPU                WPUCbits.WPUC2
#define LED_2_RED_OD                ODCONCbits.ODC2
#define LED_2_RED_ANS                ANSELCbits.ANSC2
#define LED_2_RED_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_2_RED_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_2_RED_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_2_RED_GetValue()           PORTCbits.RC2
#define LED_2_RED_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_2_RED_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_2_RED_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_2_RED_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_2_RED_SetPushPull()    do { ODCONCbits.ODC2 = 0; } while(0)
#define LED_2_RED_SetOpenDrain()   do { ODCONCbits.ODC2 = 1; } while(0)
#define LED_2_RED_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_2_RED_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_1_RED aliases
#define LED_1_RED_TRIS               TRISCbits.TRISC3
#define LED_1_RED_LAT                LATCbits.LATC3
#define LED_1_RED_PORT               PORTCbits.RC3
#define LED_1_RED_WPU                WPUCbits.WPUC3
#define LED_1_RED_OD                ODCONCbits.ODC3
#define LED_1_RED_ANS                ANSELCbits.ANSC3
#define LED_1_RED_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_1_RED_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_1_RED_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_1_RED_GetValue()           PORTCbits.RC3
#define LED_1_RED_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_1_RED_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_1_RED_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_1_RED_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_1_RED_SetPushPull()    do { ODCONCbits.ODC3 = 0; } while(0)
#define LED_1_RED_SetOpenDrain()   do { ODCONCbits.ODC3 = 1; } while(0)
#define LED_1_RED_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_1_RED_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED_5_RED aliases
#define LED_5_RED_TRIS               TRISCbits.TRISC4
#define LED_5_RED_LAT                LATCbits.LATC4
#define LED_5_RED_PORT               PORTCbits.RC4
#define LED_5_RED_WPU                WPUCbits.WPUC4
#define LED_5_RED_OD                ODCONCbits.ODC4
#define LED_5_RED_ANS                ANSELCbits.ANSC4
#define LED_5_RED_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_5_RED_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_5_RED_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_5_RED_GetValue()           PORTCbits.RC4
#define LED_5_RED_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_5_RED_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_5_RED_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_5_RED_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_5_RED_SetPushPull()    do { ODCONCbits.ODC4 = 0; } while(0)
#define LED_5_RED_SetOpenDrain()   do { ODCONCbits.ODC4 = 1; } while(0)
#define LED_5_RED_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_5_RED_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_6_RED aliases
#define LED_6_RED_TRIS               TRISCbits.TRISC5
#define LED_6_RED_LAT                LATCbits.LATC5
#define LED_6_RED_PORT               PORTCbits.RC5
#define LED_6_RED_WPU                WPUCbits.WPUC5
#define LED_6_RED_OD                ODCONCbits.ODC5
#define LED_6_RED_ANS                ANSELCbits.ANSC5
#define LED_6_RED_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_6_RED_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_6_RED_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_6_RED_GetValue()           PORTCbits.RC5
#define LED_6_RED_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_6_RED_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_6_RED_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_6_RED_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_6_RED_SetPushPull()    do { ODCONCbits.ODC5 = 0; } while(0)
#define LED_6_RED_SetOpenDrain()   do { ODCONCbits.ODC5 = 1; } while(0)
#define LED_6_RED_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_6_RED_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED_7_RED aliases
#define LED_7_RED_TRIS               TRISCbits.TRISC6
#define LED_7_RED_LAT                LATCbits.LATC6
#define LED_7_RED_PORT               PORTCbits.RC6
#define LED_7_RED_WPU                WPUCbits.WPUC6
#define LED_7_RED_OD                ODCONCbits.ODC6
#define LED_7_RED_ANS                ANSELCbits.ANSC6
#define LED_7_RED_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_7_RED_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_7_RED_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_7_RED_GetValue()           PORTCbits.RC6
#define LED_7_RED_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_7_RED_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_7_RED_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_7_RED_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_7_RED_SetPushPull()    do { ODCONCbits.ODC6 = 0; } while(0)
#define LED_7_RED_SetOpenDrain()   do { ODCONCbits.ODC6 = 1; } while(0)
#define LED_7_RED_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_7_RED_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED_8_RED aliases
#define LED_8_RED_TRIS               TRISCbits.TRISC7
#define LED_8_RED_LAT                LATCbits.LATC7
#define LED_8_RED_PORT               PORTCbits.RC7
#define LED_8_RED_WPU                WPUCbits.WPUC7
#define LED_8_RED_OD                ODCONCbits.ODC7
#define LED_8_RED_ANS                ANSELCbits.ANSC7
#define LED_8_RED_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_8_RED_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_8_RED_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_8_RED_GetValue()           PORTCbits.RC7
#define LED_8_RED_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_8_RED_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_8_RED_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_8_RED_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_8_RED_SetPushPull()    do { ODCONCbits.ODC7 = 0; } while(0)
#define LED_8_RED_SetOpenDrain()   do { ODCONCbits.ODC7 = 1; } while(0)
#define LED_8_RED_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_8_RED_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set LED_4_GREEN aliases
#define LED_4_GREEN_TRIS               TRISDbits.TRISD0
#define LED_4_GREEN_LAT                LATDbits.LATD0
#define LED_4_GREEN_PORT               PORTDbits.RD0
#define LED_4_GREEN_WPU                WPUDbits.WPUD0
#define LED_4_GREEN_OD                ODCONDbits.ODD0
#define LED_4_GREEN_ANS                ANSELDbits.ANSD0
#define LED_4_GREEN_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED_4_GREEN_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED_4_GREEN_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED_4_GREEN_GetValue()           PORTDbits.RD0
#define LED_4_GREEN_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED_4_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LED_4_GREEN_SetPullup()      do { WPUDbits.WPUD0 = 1; } while(0)
#define LED_4_GREEN_ResetPullup()    do { WPUDbits.WPUD0 = 0; } while(0)
#define LED_4_GREEN_SetPushPull()    do { ODCONDbits.ODD0 = 0; } while(0)
#define LED_4_GREEN_SetOpenDrain()   do { ODCONDbits.ODD0 = 1; } while(0)
#define LED_4_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD0 = 1; } while(0)
#define LED_4_GREEN_SetDigitalMode() do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set LED_3_GREEN aliases
#define LED_3_GREEN_TRIS               TRISDbits.TRISD1
#define LED_3_GREEN_LAT                LATDbits.LATD1
#define LED_3_GREEN_PORT               PORTDbits.RD1
#define LED_3_GREEN_WPU                WPUDbits.WPUD1
#define LED_3_GREEN_OD                ODCONDbits.ODD1
#define LED_3_GREEN_ANS                ANSELDbits.ANSD1
#define LED_3_GREEN_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_3_GREEN_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_3_GREEN_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_3_GREEN_GetValue()           PORTDbits.RD1
#define LED_3_GREEN_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_3_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_3_GREEN_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define LED_3_GREEN_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define LED_3_GREEN_SetPushPull()    do { ODCONDbits.ODD1 = 0; } while(0)
#define LED_3_GREEN_SetOpenDrain()   do { ODCONDbits.ODD1 = 1; } while(0)
#define LED_3_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define LED_3_GREEN_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set LED_2_GREEN aliases
#define LED_2_GREEN_TRIS               TRISDbits.TRISD2
#define LED_2_GREEN_LAT                LATDbits.LATD2
#define LED_2_GREEN_PORT               PORTDbits.RD2
#define LED_2_GREEN_WPU                WPUDbits.WPUD2
#define LED_2_GREEN_OD                ODCONDbits.ODD2
#define LED_2_GREEN_ANS                ANSELDbits.ANSD2
#define LED_2_GREEN_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED_2_GREEN_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED_2_GREEN_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED_2_GREEN_GetValue()           PORTDbits.RD2
#define LED_2_GREEN_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED_2_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LED_2_GREEN_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define LED_2_GREEN_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define LED_2_GREEN_SetPushPull()    do { ODCONDbits.ODD2 = 0; } while(0)
#define LED_2_GREEN_SetOpenDrain()   do { ODCONDbits.ODD2 = 1; } while(0)
#define LED_2_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define LED_2_GREEN_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set LED_1_GREEN aliases
#define LED_1_GREEN_TRIS               TRISDbits.TRISD3
#define LED_1_GREEN_LAT                LATDbits.LATD3
#define LED_1_GREEN_PORT               PORTDbits.RD3
#define LED_1_GREEN_WPU                WPUDbits.WPUD3
#define LED_1_GREEN_OD                ODCONDbits.ODD3
#define LED_1_GREEN_ANS                ANSELDbits.ANSD3
#define LED_1_GREEN_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED_1_GREEN_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED_1_GREEN_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED_1_GREEN_GetValue()           PORTDbits.RD3
#define LED_1_GREEN_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED_1_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LED_1_GREEN_SetPullup()      do { WPUDbits.WPUD3 = 1; } while(0)
#define LED_1_GREEN_ResetPullup()    do { WPUDbits.WPUD3 = 0; } while(0)
#define LED_1_GREEN_SetPushPull()    do { ODCONDbits.ODD3 = 0; } while(0)
#define LED_1_GREEN_SetOpenDrain()   do { ODCONDbits.ODD3 = 1; } while(0)
#define LED_1_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD3 = 1; } while(0)
#define LED_1_GREEN_SetDigitalMode() do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set LED_5_GREEN aliases
#define LED_5_GREEN_TRIS               TRISDbits.TRISD4
#define LED_5_GREEN_LAT                LATDbits.LATD4
#define LED_5_GREEN_PORT               PORTDbits.RD4
#define LED_5_GREEN_WPU                WPUDbits.WPUD4
#define LED_5_GREEN_OD                ODCONDbits.ODD4
#define LED_5_GREEN_ANS                ANSELDbits.ANSD4
#define LED_5_GREEN_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LED_5_GREEN_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LED_5_GREEN_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LED_5_GREEN_GetValue()           PORTDbits.RD4
#define LED_5_GREEN_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LED_5_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define LED_5_GREEN_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define LED_5_GREEN_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define LED_5_GREEN_SetPushPull()    do { ODCONDbits.ODD4 = 0; } while(0)
#define LED_5_GREEN_SetOpenDrain()   do { ODCONDbits.ODD4 = 1; } while(0)
#define LED_5_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define LED_5_GREEN_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set LED_6_GREEN aliases
#define LED_6_GREEN_TRIS               TRISDbits.TRISD5
#define LED_6_GREEN_LAT                LATDbits.LATD5
#define LED_6_GREEN_PORT               PORTDbits.RD5
#define LED_6_GREEN_WPU                WPUDbits.WPUD5
#define LED_6_GREEN_OD                ODCONDbits.ODD5
#define LED_6_GREEN_ANS                ANSELDbits.ANSD5
#define LED_6_GREEN_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LED_6_GREEN_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LED_6_GREEN_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LED_6_GREEN_GetValue()           PORTDbits.RD5
#define LED_6_GREEN_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LED_6_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LED_6_GREEN_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define LED_6_GREEN_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define LED_6_GREEN_SetPushPull()    do { ODCONDbits.ODD5 = 0; } while(0)
#define LED_6_GREEN_SetOpenDrain()   do { ODCONDbits.ODD5 = 1; } while(0)
#define LED_6_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define LED_6_GREEN_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set LED_7_GREEN aliases
#define LED_7_GREEN_TRIS               TRISDbits.TRISD6
#define LED_7_GREEN_LAT                LATDbits.LATD6
#define LED_7_GREEN_PORT               PORTDbits.RD6
#define LED_7_GREEN_WPU                WPUDbits.WPUD6
#define LED_7_GREEN_OD                ODCONDbits.ODD6
#define LED_7_GREEN_ANS                ANSELDbits.ANSD6
#define LED_7_GREEN_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED_7_GREEN_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED_7_GREEN_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED_7_GREEN_GetValue()           PORTDbits.RD6
#define LED_7_GREEN_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED_7_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LED_7_GREEN_SetPullup()      do { WPUDbits.WPUD6 = 1; } while(0)
#define LED_7_GREEN_ResetPullup()    do { WPUDbits.WPUD6 = 0; } while(0)
#define LED_7_GREEN_SetPushPull()    do { ODCONDbits.ODD6 = 0; } while(0)
#define LED_7_GREEN_SetOpenDrain()   do { ODCONDbits.ODD6 = 1; } while(0)
#define LED_7_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define LED_7_GREEN_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set LED_8_GREEN aliases
#define LED_8_GREEN_TRIS               TRISDbits.TRISD7
#define LED_8_GREEN_LAT                LATDbits.LATD7
#define LED_8_GREEN_PORT               PORTDbits.RD7
#define LED_8_GREEN_WPU                WPUDbits.WPUD7
#define LED_8_GREEN_OD                ODCONDbits.ODD7
#define LED_8_GREEN_ANS                ANSELDbits.ANSD7
#define LED_8_GREEN_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED_8_GREEN_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED_8_GREEN_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED_8_GREEN_GetValue()           PORTDbits.RD7
#define LED_8_GREEN_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED_8_GREEN_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LED_8_GREEN_SetPullup()      do { WPUDbits.WPUD7 = 1; } while(0)
#define LED_8_GREEN_ResetPullup()    do { WPUDbits.WPUD7 = 0; } while(0)
#define LED_8_GREEN_SetPushPull()    do { ODCONDbits.ODD7 = 0; } while(0)
#define LED_8_GREEN_SetOpenDrain()   do { ODCONDbits.ODD7 = 1; } while(0)
#define LED_8_GREEN_SetAnalogMode()  do { ANSELDbits.ANSD7 = 1; } while(0)
#define LED_8_GREEN_SetDigitalMode() do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set RE0 procedures
#define RE0_SetHigh()    do { LATEbits.LATE0 = 1; } while(0)
#define RE0_SetLow()   do { LATEbits.LATE0 = 0; } while(0)
#define RE0_Toggle()   do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define RE0_GetValue()         PORTEbits.RE0
#define RE0_SetDigitalInput()   do { TRISEbits.TRISE0 = 1; } while(0)
#define RE0_SetDigitalOutput()  do { TRISEbits.TRISE0 = 0; } while(0)
#define RE0_SetPullup()     do { WPUEbits.WPUE0 = 1; } while(0)
#define RE0_ResetPullup()   do { WPUEbits.WPUE0 = 0; } while(0)
#define RE0_SetAnalogMode() do { ANSELEbits.ANSE0 = 1; } while(0)
#define RE0_SetDigitalMode()do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set RE1 procedures
#define RE1_SetHigh()    do { LATEbits.LATE1 = 1; } while(0)
#define RE1_SetLow()   do { LATEbits.LATE1 = 0; } while(0)
#define RE1_Toggle()   do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define RE1_GetValue()         PORTEbits.RE1
#define RE1_SetDigitalInput()   do { TRISEbits.TRISE1 = 1; } while(0)
#define RE1_SetDigitalOutput()  do { TRISEbits.TRISE1 = 0; } while(0)
#define RE1_SetPullup()     do { WPUEbits.WPUE1 = 1; } while(0)
#define RE1_ResetPullup()   do { WPUEbits.WPUE1 = 0; } while(0)
#define RE1_SetAnalogMode() do { ANSELEbits.ANSE1 = 1; } while(0)
#define RE1_SetDigitalMode()do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set RE2 procedures
#define RE2_SetHigh()    do { LATEbits.LATE2 = 1; } while(0)
#define RE2_SetLow()   do { LATEbits.LATE2 = 0; } while(0)
#define RE2_Toggle()   do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define RE2_GetValue()         PORTEbits.RE2
#define RE2_SetDigitalInput()   do { TRISEbits.TRISE2 = 1; } while(0)
#define RE2_SetDigitalOutput()  do { TRISEbits.TRISE2 = 0; } while(0)
#define RE2_SetPullup()     do { WPUEbits.WPUE2 = 1; } while(0)
#define RE2_ResetPullup()   do { WPUEbits.WPUE2 = 0; } while(0)
#define RE2_SetAnalogMode() do { ANSELEbits.ANSE2 = 1; } while(0)
#define RE2_SetDigitalMode()do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/