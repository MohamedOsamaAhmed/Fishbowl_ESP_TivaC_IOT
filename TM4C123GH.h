/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */
#include "Platform_Types.h"

#define WATCHDOG0_BASE                  0x40000000UL
#define WATCHDOG1_BASE                  0x40001000UL
#define GPIOA_BASE                      0x40004000UL
#define GPIOB_BASE                      0x40005000UL
#define GPIOC_BASE                      0x40006000UL
#define GPIOD_BASE                      0x40007000UL
#define SSI0_BASE                       0x40008000UL
#define SSI1_BASE                       0x40009000UL
#define SSI2_BASE                       0x4000A000UL
#define SSI3_BASE                       0x4000B000UL
#define UART0_BASE                      0x4000C000UL
#define UART1_BASE                      0x4000D000UL
#define UART2_BASE                      0x4000E000UL
#define UART3_BASE                      0x4000F000UL
#define UART4_BASE                      0x40010000UL
#define UART5_BASE                      0x40011000UL
#define UART6_BASE                      0x40012000UL
#define UART7_BASE                      0x40013000UL
#define I2C0_BASE                       0x40020000UL
#define I2C1_BASE                       0x40021000UL
#define I2C2_BASE                       0x40022000UL
#define I2C3_BASE                       0x40023000UL
#define GPIOE_BASE                      0x40024000UL
#define GPIOF_BASE                      0x40025000UL
#define PWM0_BASE                       0x40028000UL
#define PWM1_BASE                       0x40029000UL
#define QEI0_BASE                       0x4002C000UL
#define QEI1_BASE                       0x4002D000UL
#define TIMER0_BASE                     0x40030000UL
#define TIMER1_BASE                     0x40031000UL
#define TIMER2_BASE                     0x40032000UL
#define TIMER3_BASE                     0x40033000UL
#define TIMER4_BASE                     0x40034000UL
#define TIMER5_BASE                     0x40035000UL
#define WTIMER0_BASE                    0x40036000UL
#define WTIMER1_BASE                    0x40037000UL
#define ADC0_BASE                       0x40038000UL
#define ADC1_BASE                       0x40039000UL
#define COMP_BASE                       0x4003C000UL
#define CAN0_BASE                       0x40040000UL
#define CAN1_BASE                       0x40041000UL
#define WTIMER2_BASE                    0x4004C000UL
#define WTIMER3_BASE                    0x4004D000UL
#define WTIMER4_BASE                    0x4004E000UL
#define WTIMER5_BASE                    0x4004F000UL
#define USB0_BASE                       0x40050000UL
#define GPIOA_AHB_BASE                  0x40058000UL
#define GPIOB_AHB_BASE                  0x40059000UL
#define GPIOC_AHB_BASE                  0x4005A000UL
#define GPIOD_AHB_BASE                  0x4005B000UL
#define GPIOE_AHB_BASE                  0x4005C000UL
#define GPIOF_AHB_BASE                  0x4005D000UL
#define EEPROM_BASE                     0x400AF000UL
#define SYSEXC_BASE                     0x400F9000UL
#define HIB_BASE                        0x400FC000UL
#define FLASH_CTRL_BASE                 0x400FD000UL
#define SYSCTL_BASE                     0x400FE000UL
#define UDMA_BASE                       0x400FF000UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define WATCHDOG0                       ((WATCHDOG0_Type          *) WATCHDOG0_BASE)
#define WATCHDOG1                       ((WATCHDOG0_Type          *) WATCHDOG1_BASE)
#define GPIOA                           ((GPIOA_Type              *) GPIOA_BASE)
#define GPIOB                           ((GPIOA_Type              *) GPIOB_BASE)
#define GPIOC                           ((GPIOA_Type              *) GPIOC_BASE)
#define GPIOD                           ((GPIOA_Type              *) GPIOD_BASE)
#define SSI0                            ((SSI0_Type               *) SSI0_BASE)
#define SSI1                            ((SSI0_Type               *) SSI1_BASE)
#define SSI2                            ((SSI0_Type               *) SSI2_BASE)
#define SSI3                            ((SSI0_Type               *) SSI3_BASE)
#define UART0                           ((UART0_Type              *) UART0_BASE)
#define UART1                           ((UART0_Type              *) UART1_BASE)
#define UART2                           ((UART0_Type              *) UART2_BASE)
#define UART3                           ((UART0_Type              *) UART3_BASE)
#define UART4                           ((UART0_Type              *) UART4_BASE)
#define UART5                           ((UART0_Type              *) UART5_BASE)
#define UART6                           ((UART0_Type              *) UART6_BASE)
#define UART7                           ((UART0_Type              *) UART7_BASE)
#define I2C0                            ((I2C0_Type               *) I2C0_BASE)
#define I2C1                            ((I2C0_Type               *) I2C1_BASE)
#define I2C2                            ((I2C0_Type               *) I2C2_BASE)
#define I2C3                            ((I2C0_Type               *) I2C3_BASE)
#define GPIOE                           ((GPIOA_Type              *) GPIOE_BASE)
#define GPIOF                           ((GPIOA_Type              *) GPIOF_BASE)
#define PWM0                            ((PWM0_Type               *) PWM0_BASE)
#define PWM1                            ((PWM0_Type               *) PWM1_BASE)
#define QEI0                            ((QEI0_Type               *) QEI0_BASE)
#define QEI1                            ((QEI0_Type               *) QEI1_BASE)
#define TIMER0                          ((TIMER0_Type             *) TIMER0_BASE)
#define TIMER1                          ((TIMER0_Type             *) TIMER1_BASE)
#define TIMER2                          ((TIMER0_Type             *) TIMER2_BASE)
#define TIMER3                          ((TIMER0_Type             *) TIMER3_BASE)
#define TIMER4                          ((TIMER0_Type             *) TIMER4_BASE)
#define TIMER5                          ((TIMER0_Type             *) TIMER5_BASE)
#define WTIMER0                         ((WTIMER0_Type            *) WTIMER0_BASE)
#define WTIMER1                         ((TIMER0_Type             *) WTIMER1_BASE)
#define ADC0                            ((ADC0_Type               *) ADC0_BASE)
#define ADC1                            ((ADC0_Type               *) ADC1_BASE)
#define COMP                            ((COMP_Type               *) COMP_BASE)
#define CAN0                            ((CAN0_Type               *) CAN0_BASE)
#define CAN1                            ((CAN0_Type               *) CAN1_BASE)
#define WTIMER2                         ((TIMER0_Type             *) WTIMER2_BASE)
#define WTIMER3                         ((TIMER0_Type             *) WTIMER3_BASE)
#define WTIMER4                         ((TIMER0_Type             *) WTIMER4_BASE)
#define WTIMER5                         ((TIMER0_Type             *) WTIMER5_BASE)
#define USB0                            ((USB0_Type               *) USB0_BASE)
#define GPIOA_AHB                       ((GPIOA_Type              *) GPIOA_AHB_BASE)
#define GPIOB_AHB                       ((GPIOA_Type              *) GPIOB_AHB_BASE)
#define GPIOC_AHB                       ((GPIOA_Type              *) GPIOC_AHB_BASE)
#define GPIOD_AHB                       ((GPIOA_Type              *) GPIOD_AHB_BASE)
#define GPIOE_AHB                       ((GPIOA_Type              *) GPIOE_AHB_BASE)
#define GPIOF_AHB                       ((GPIOA_Type              *) GPIOF_AHB_BASE)
#define EEPROM                          ((EEPROM_Type             *) EEPROM_BASE)
#define SYSEXC                          ((SYSEXC_Type             *) SYSEXC_BASE)
#define HIB                             ((HIB_Type                *) HIB_BASE)
#define FLASH_CTRL                      ((FLASH_CTRL_Type         *) FLASH_CTRL_BASE)
#define SYSCTL                          ((SYSCTL_Type             *) SYSCTL_BASE)
#define UDMA                            ((UDMA_Type               *) UDMA_BASE)


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* -------------------  Cortex-M4 Processor Exceptions Numbers  ------------------- */
  Reset_IRQn                    = -15,              /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn           = -14,              /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                = -13,              /*!<   3  Hard Fault, all classes of Fault                                 */
  MemoryManagement_IRQn         = -12,              /*!<   4  Memory Management, MPU mismatch, including Access Violation
                                                         and No Match                                                          */
  BusFault_IRQn                 = -11,              /*!<   5  Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                         related Fault                                                         */
  UsageFault_IRQn               = -10,              /*!<   6  Usage Fault, i.e. Undef Instruction, Illegal State Transition    */
  SVCall_IRQn                   =  -5,              /*!<  11  System Service Call via SVC instruction                          */
  DebugMonitor_IRQn             =  -4,              /*!<  12  Debug Monitor                                                    */
  PendSV_IRQn                   =  -2,              /*!<  14  Pendable request for system service                              */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* -------------------  TM4C123GH6PM Specific Interrupt Numbers  ------------------ */
  GPIOA_IRQn                    =   0,              /*!<   0  GPIOA                                                            */
  GPIOB_IRQn                    =   1,              /*!<   1  GPIOB                                                            */
  GPIOC_IRQn                    =   2,              /*!<   2  GPIOC                                                            */
  GPIOD_IRQn                    =   3,              /*!<   3  GPIOD                                                            */
  GPIOE_IRQn                    =   4,              /*!<   4  GPIOE                                                            */
  UART0_IRQn                    =   5,              /*!<   5  UART0                                                            */
  UART1_IRQn                    =   6,              /*!<   6  UART1                                                            */
  SSI0_IRQn                     =   7,              /*!<   7  SSI0                                                             */
  I2C0_IRQn                     =   8,              /*!<   8  I2C0                                                             */
  PWM0_FAULT_IRQn               =   9,              /*!<   9  PWM0_FAULT                                                       */
  PWM0_0_IRQn                   =  10,              /*!<  10  PWM0_0                                                           */
  PWM0_1_IRQn                   =  11,              /*!<  11  PWM0_1                                                           */
  PWM0_2_IRQn                   =  12,              /*!<  12  PWM0_2                                                           */
  QEI0_IRQn                     =  13,              /*!<  13  QEI0                                                             */
  ADC0SS0_IRQn                  =  14,              /*!<  14  ADC0SS0                                                          */
  ADC0SS1_IRQn                  =  15,              /*!<  15  ADC0SS1                                                          */
  ADC0SS2_IRQn                  =  16,              /*!<  16  ADC0SS2                                                          */
  ADC0SS3_IRQn                  =  17,              /*!<  17  ADC0SS3                                                          */
  WATCHDOG0_IRQn                =  18,              /*!<  18  WATCHDOG0                                                        */
  TIMER0A_IRQn                  =  19,              /*!<  19  TIMER0A                                                          */
  TIMER0B_IRQn                  =  20,              /*!<  20  TIMER0B                                                          */
  TIMER1A_IRQn                  =  21,              /*!<  21  TIMER1A                                                          */
  TIMER1B_IRQn                  =  22,              /*!<  22  TIMER1B                                                          */
  TIMER2A_IRQn                  =  23,              /*!<  23  TIMER2A                                                          */
  TIMER2B_IRQn                  =  24,              /*!<  24  TIMER2B                                                          */
  COMP0_IRQn                    =  25,              /*!<  25  COMP0                                                            */
  COMP1_IRQn                    =  26,              /*!<  26  COMP1                                                            */
  SYSCTL_IRQn                   =  28,              /*!<  28  SYSCTL                                                           */
  FLASH_CTRL_IRQn               =  29,              /*!<  29  FLASH_CTRL                                                       */
  GPIOF_IRQn                    =  30,              /*!<  30  GPIOF                                                            */
  UART2_IRQn                    =  33,              /*!<  33  UART2                                                            */
  SSI1_IRQn                     =  34,              /*!<  34  SSI1                                                             */
  TIMER3A_IRQn                  =  35,              /*!<  35  TIMER3A                                                          */
  TIMER3B_IRQn                  =  36,              /*!<  36  TIMER3B                                                          */
  I2C1_IRQn                     =  37,              /*!<  37  I2C1                                                             */
  QEI1_IRQn                     =  38,              /*!<  38  QEI1                                                             */
  CAN0_IRQn                     =  39,              /*!<  39  CAN0                                                             */
  CAN1_IRQn                     =  40,              /*!<  40  CAN1                                                             */
  HIB_IRQn                      =  43,              /*!<  43  HIB                                                              */
  USB0_IRQn                     =  44,              /*!<  44  USB0                                                             */
  PWM0_3_IRQn                   =  45,              /*!<  45  PWM0_3                                                           */
  UDMA_IRQn                     =  46,              /*!<  46  UDMA                                                             */
  UDMAERR_IRQn                  =  47,              /*!<  47  UDMAERR                                                          */
  ADC1SS0_IRQn                  =  48,              /*!<  48  ADC1SS0                                                          */
  ADC1SS1_IRQn                  =  49,              /*!<  49  ADC1SS1                                                          */
  ADC1SS2_IRQn                  =  50,              /*!<  50  ADC1SS2                                                          */
  ADC1SS3_IRQn                  =  51,              /*!<  51  ADC1SS3                                                          */
  SSI2_IRQn                     =  57,              /*!<  57  SSI2                                                             */
  SSI3_IRQn                     =  58,              /*!<  58  SSI3                                                             */
  UART3_IRQn                    =  59,              /*!<  59  UART3                                                            */
  UART4_IRQn                    =  60,              /*!<  60  UART4                                                            */
  UART5_IRQn                    =  61,              /*!<  61  UART5                                                            */
  UART6_IRQn                    =  62,              /*!<  62  UART6                                                            */
  UART7_IRQn                    =  63,              /*!<  63  UART7                                                            */
  I2C2_IRQn                     =  68,              /*!<  68  I2C2                                                             */
  I2C3_IRQn                     =  69,              /*!<  69  I2C3                                                             */
  TIMER4A_IRQn                  =  70,              /*!<  70  TIMER4A                                                          */
  TIMER4B_IRQn                  =  71,              /*!<  71  TIMER4B                                                          */
  TIMER5A_IRQn                  =  92,              /*!<  92  TIMER5A                                                          */
  TIMER5B_IRQn                  =  93,              /*!<  93  TIMER5B                                                          */
  WTIMER0A_IRQn                 =  94,              /*!<  94  WTIMER0A                                                         */
  WTIMER0B_IRQn                 =  95,              /*!<  95  WTIMER0B                                                         */
  WTIMER1A_IRQn                 =  96,              /*!<  96  WTIMER1A                                                         */
  WTIMER1B_IRQn                 =  97,              /*!<  97  WTIMER1B                                                         */
  WTIMER2A_IRQn                 =  98,              /*!<  98  WTIMER2A                                                         */
  WTIMER2B_IRQn                 =  99,              /*!<  99  WTIMER2B                                                         */
  WTIMER3A_IRQn                 = 100,              /*!< 100  WTIMER3A                                                         */
  WTIMER3B_IRQn                 = 101,              /*!< 101  WTIMER3B                                                         */
  WTIMER4A_IRQn                 = 102,              /*!< 102  WTIMER4A                                                         */
  WTIMER4B_IRQn                 = 103,              /*!< 103  WTIMER4B                                                         */
  WTIMER5A_IRQn                 = 104,              /*!< 104  WTIMER5A                                                         */
  WTIMER5B_IRQn                 = 105,              /*!< 105  WTIMER5B                                                         */
  SYSEXC_IRQn                   = 106,              /*!< 106  SYSEXC                                                           */
  PWM1_0_IRQn                   = 134,              /*!< 134  PWM1_0                                                           */
  PWM1_1_IRQn                   = 135,              /*!< 135  PWM1_1                                                           */
  PWM1_2_IRQn                   = 136,              /*!< 136  PWM1_2                                                           */
  PWM1_3_IRQn                   = 137,              /*!< 137  PWM1_3                                                           */
  PWM1_FAULT_IRQn               = 138               /*!< 138  PWM1_FAULT                                                       */
} IRQn_Type;


typedef struct {                                    /*!< GPIOA Structure                                                       */
   uint32  RESERVED0[255];
   uint32  DATA;                              /*!< GPIO Data                                                             */
   uint32  DIR;                               /*!< GPIO Direction                                                        */
   uint32  IS;                                /*!< GPIO Interrupt Sense                                                  */
   uint32  IBE;                               /*!< GPIO Interrupt Both Edges                                             */
   uint32  IEV;                               /*!< GPIO Interrupt Event                                                  */
   uint32  IM;                                /*!< GPIO Interrupt Mask                                                   */
   uint32  RIS;                               /*!< GPIO Raw Interrupt Status                                             */
   uint32  MIS;                               /*!< GPIO Masked Interrupt Status                                          */
   uint32  ICR;                               /*!< GPIO Interrupt Clear                                                  */
   uint32  AFSEL;                             /*!< GPIO Alternate Function Select                                        */
   uint32  RESERVED1[55];
   uint32  DR2R;                              /*!< GPIO 2-mA Drive Select                                                */
   uint32  DR4R;                              /*!< GPIO 4-mA Drive Select                                                */
   uint32  DR8R;                              /*!< GPIO 8-mA Drive Select                                                */
   uint32  ODR;                               /*!< GPIO Open Drain Select                                                */
   uint32  PUR;                               /*!< GPIO Pull-Up Select                                                   */
   uint32  PDR;                               /*!< GPIO Pull-Down Select                                                 */
   uint32  SLR;                               /*!< GPIO Slew Rate Control Select                                         */
   uint32  DEN;                               /*!< GPIO Digital Enable                                                   */
   uint32  LOCK;                              /*!< GPIO Lock                                                             */
   uint32  CR;                                /*!< GPIO Commit                                                           */
   uint32  AMSEL;                             /*!< GPIO Analog Mode Select                                               */
   uint32  PCTL;                              /*!< GPIO Port Control                                                     */
   uint32  ADCCTL;                            /*!< GPIO ADC Control                                                      */
   uint32  DMACTL;                            /*!< GPIO DMA Control                                                      */
} GPIOA_Type;

typedef struct {                                    /*!< UART0 Structure                                                       */
   uint32  DR;                                /*!< UART Data                                                             */
  
  union {
     uint32  ECR_UART_ALT;                    /*!< UART Receive Status/Error Clear                                       */
     uint32  RSR;                             /*!< UART Receive Status/Error Clear                                       */
  };
   uint32  RESERVED0[4];
   uint32  FR;                                /*!< UART Flag                                                             */
   uint32  RESERVED1;
   uint32  ILPR;                              /*!< UART IrDA Low-Power Register                                          */
   uint32  IBRD;                              /*!< UART Integer Baud-Rate Divisor                                        */
   uint32  FBRD;                              /*!< UART Fractional Baud-Rate Divisor                                     */
   uint32  LCRH;                              /*!< UART Line Control                                                     */
   uint32  CTL;                               /*!< UART Control                                                          */
   uint32  IFLS;                              /*!< UART Interrupt FIFO Level Select                                      */
   uint32  IM;                                /*!< UART Interrupt Mask                                                   */
   uint32  RIS;                               /*!< UART Raw Interrupt Status                                             */
   uint32  MIS;                               /*!< UART Masked Interrupt Status                                          */
   uint32  ICR;                               /*!< UART Interrupt Clear                                                  */
   uint32  DMACTL;                            /*!< UART DMA Control                                                      */
   uint32  RESERVED2[22];
   uint32  _9BITADDR;                         /*!< UART 9-Bit Self Address                                               */
   uint32  _9BITAMASK;                        /*!< UART 9-Bit Self Address Mask                                          */
   uint32  RESERVED3[965];
   uint32  PP;                                /*!< UART Peripheral Properties                                            */
   uint32  RESERVED4;
   uint32  CC;                                /*!< UART Clock Configuration                                              */
} UART0_Type;

/**
  * @brief Register map for SYSCTL peripheral (SYSCTL)
  */

typedef struct {                                    /*!< SYSCTL Structure                                                      */
   uint32  DID0;                              /*!< Device Identification 0                                               */
   uint32  DID1;                              /*!< Device Identification 1                                               */
   uint32  DC0;                               /*!< Device Capabilities 0                                                 */
   uint32  RESERVED0;
   uint32  DC1;                               /*!< Device Capabilities 1                                                 */
   uint32  DC2;                               /*!< Device Capabilities 2                                                 */
   uint32  DC3;                               /*!< Device Capabilities 3                                                 */
   uint32  DC4;                               /*!< Device Capabilities 4                                                 */
   uint32  DC5;                               /*!< Device Capabilities 5                                                 */
   uint32  DC6;                               /*!< Device Capabilities 6                                                 */
   uint32  DC7;                               /*!< Device Capabilities 7                                                 */
   uint32  DC8;                               /*!< Device Capabilities 8 ADC Channels                                    */
   uint32  PBORCTL;                           /*!< Brown-Out Reset Control                                               */
   uint32  RESERVED1[3];
   uint32  SRCR0;                             /*!< Software Reset Control 0                                              */
   uint32  SRCR1;                             /*!< Software Reset Control 1                                              */
   uint32  SRCR2;                             /*!< Software Reset Control 2                                              */
   uint32  RESERVED2;
   uint32  RIS;                               /*!< Raw Interrupt Status                                                  */
   uint32  IMC;                               /*!< Interrupt Mask Control                                                */
   uint32  MISC;                              /*!< Masked Interrupt Status and Clear                                     */
   uint32  RESC;                              /*!< Reset Cause                                                           */
   uint32  RCC;                               /*!< Run-Mode Clock Configuration                                          */
   uint32  RESERVED3[2];
   uint32  GPIOHBCTL;                         /*!< GPIO High-Performance Bus Control                                     */
   uint32  RCC2;                              /*!< Run-Mode Clock Configuration 2                                        */
   uint32  RESERVED4[2];
   uint32  MOSCCTL;                           /*!< Main Oscillator Control                                               */
   uint32  RESERVED5[32];
   uint32  RCGC0;                             /*!< Run Mode Clock Gating Control Register 0                              */
   uint32  RCGC1;                             /*!< Run Mode Clock Gating Control Register 1                              */
   uint32  RCGC2;                             /*!< Run Mode Clock Gating Control Register 2                              */
   uint32  RESERVED6;
   uint32  SCGC0;                             /*!< Sleep Mode Clock Gating Control Register 0                            */
   uint32  SCGC1;                             /*!< Sleep Mode Clock Gating Control Register 1                            */
   uint32  SCGC2;                             /*!< Sleep Mode Clock Gating Control Register 2                            */
   uint32  RESERVED7;
   uint32  DCGC0;                             /*!< Deep Sleep Mode Clock Gating Control Register 0                       */
   uint32  DCGC1;                             /*!< Deep-Sleep Mode Clock Gating Control Register 1                       */
   uint32  DCGC2;                             /*!< Deep Sleep Mode Clock Gating Control Register 2                       */
   uint32  RESERVED8[6];
   uint32  DSLPCLKCFG;                        /*!< Deep Sleep Clock Configuration                                        */
   uint32  RESERVED9;
   uint32  SYSPROP;                           /*!< System Properties                                                     */
   uint32  PIOSCCAL;                          /*!< Precision Internal Oscillator Calibration                             */
   uint32  PIOSCSTAT;                         /*!< Precision Internal Oscillator Statistics                              */
   uint32  RESERVED10[2];
   uint32  PLLFREQ0;                          /*!< PLL Frequency 0                                                       */
   uint32  PLLFREQ1;                          /*!< PLL Frequency 1                                                       */
   uint32  PLLSTAT;                           /*!< PLL Status                                                            */
   uint32  RESERVED11[9];
   uint32  DC9;                               /*!< Device Capabilities 9 ADC Digital Comparators                         */
   uint32  RESERVED12[3];
   uint32  NVMSTAT;                           /*!< Non-Volatile Memory Information                                       */
   uint32  RESERVED13[87];
   uint32  PPWD;                              /*!< Watchdog Timer Peripheral Present                                     */
   uint32  PPTIMER;                           /*!< Timer Peripheral Present                                              */
   uint32  PPGPIO;                            /*!< General-Purpose Input/Output Peripheral Present                       */
   uint32  PPDMA;                             /*!< Micro Direct Memory Access Peripheral Present                         */
   uint32  RESERVED14;
   uint32  PPHIB;                             /*!< Hibernation Peripheral Present                                        */
   uint32  PPUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Present        */
   uint32  PPSSI;                             /*!< Synchronous Serial Interface Peripheral Present                       */
   uint32  PPI2C;                             /*!< Inter-Integrated Circuit Peripheral Present                           */
   uint32  RESERVED15;
   uint32  PPUSB;                             /*!< Universal Serial Bus Peripheral Present                               */
   uint32  RESERVED16[2];
   uint32  PPCAN;                             /*!< Controller Area Network Peripheral Present                            */
   uint32  PPADC;                             /*!< Analog-to-Digital Converter Peripheral Present                        */
   uint32  PPACMP;                            /*!< Analog Comparator Peripheral Present                                  */
   uint32  PPPWM;                             /*!< Pulse Width Modulator Peripheral Present                              */
   uint32  PPQEI;                             /*!< Quadrature Encoder Interface Peripheral Present                       */
   uint32  RESERVED17[4];
   uint32  PPEEPROM;                          /*!< EEPROM Peripheral Present                                             */
   uint32  PPWTIMER;                          /*!< Wide Timer Peripheral Present                                         */
   uint32  RESERVED18[104];
   uint32  SRWD;                              /*!< Watchdog Timer Software Reset                                         */
   uint32  SRTIMER;                           /*!< Timer Software Reset                                                  */
   uint32  SRGPIO;                            /*!< General-Purpose Input/Output Software Reset                           */
   uint32  SRDMA;                             /*!< Micro Direct Memory Access Software Reset                             */
   uint32  RESERVED19;
   uint32  SRHIB;                             /*!< Hibernation Software Reset                                            */
   uint32  SRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Software Reset            */
   uint32  SRSSI;                             /*!< Synchronous Serial Interface Software Reset                           */
   uint32  SRI2C;                             /*!< Inter-Integrated Circuit Software Reset                               */
   uint32  RESERVED20;
   uint32  SRUSB;                             /*!< Universal Serial Bus Software Reset                                   */
   uint32  RESERVED21[2];
   uint32  SRCAN;                             /*!< Controller Area Network Software Reset                                */
   uint32  SRADC;                             /*!< Analog-to-Digital Converter Software Reset                            */
   uint32  SRACMP;                            /*!< Analog Comparator Software Reset                                      */
   uint32  SRPWM;                             /*!< Pulse Width Modulator Software Reset                                  */
   uint32  SRQEI;                             /*!< Quadrature Encoder Interface Software Reset                           */
   uint32  RESERVED22[4];
   uint32  SREEPROM;                          /*!< EEPROM Software Reset                                                 */
   uint32  SRWTIMER;                          /*!< Wide Timer Software Reset                                             */
   uint32  RESERVED23[40];
   uint32  RCGCWD;                            /*!< Watchdog Timer Run Mode Clock Gating Control                          */
   uint32  RCGCTIMER;                         /*!< Timer Run Mode Clock Gating Control                                   */
   uint32  RCGCGPIO;                          /*!< General-Purpose Input/Output Run Mode Clock Gating Control            */
   uint32  RCGCDMA;                           /*!< Micro Direct Memory Access Run Mode Clock Gating Control              */
   uint32  RESERVED24;
   uint32  RCGCHIB;                           /*!< Hibernation Run Mode Clock Gating Control                             */
   uint32  RCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating                                                 Control                                                               */
   uint32  RCGCSSI;                           /*!< Synchronous Serial Interface Run Mode Clock Gating Control            */
   uint32  RCGCI2C;                           /*!< Inter-Integrated Circuit Run Mode Clock Gating Control                */
   uint32  RESERVED25;
   uint32  RCGCUSB;                           /*!< Universal Serial Bus Run Mode Clock Gating Control                    */
   uint32  RESERVED26[2];
   uint32  RCGCCAN;                           /*!< Controller Area Network Run Mode Clock Gating Control                 */
   uint32  RCGCADC;                           /*!< Analog-to-Digital Converter Run Mode Clock Gating Control             */
   uint32  RCGCACMP;                          /*!< Analog Comparator Run Mode Clock Gating Control                       */
   uint32  RCGCPWM;                           /*!< Pulse Width Modulator Run Mode Clock Gating Control                   */
   uint32  RCGCQEI;                           /*!< Quadrature Encoder Interface Run Mode Clock Gating Control            */
   uint32  RESERVED27[4];
   uint32  RCGCEEPROM;                        /*!< EEPROM Run Mode Clock Gating Control                                  */
   uint32  RCGCWTIMER;                        /*!< Wide Timer Run Mode Clock Gating Control                              */
   uint32  RESERVED28[40];
   uint32  SCGCWD;                            /*!< Watchdog Timer Sleep Mode Clock Gating Control                        */
   uint32  SCGCTIMER;                         /*!< Timer Sleep Mode Clock Gating Control                                 */
   uint32  SCGCGPIO;                          /*!< General-Purpose Input/Output Sleep Mode Clock Gating Control          */
   uint32  SCGCDMA;                           /*!< Micro Direct Memory Access Sleep Mode Clock Gating Control            */
   uint32  RESERVED29;
   uint32  SCGCHIB;                           /*!< Hibernation Sleep Mode Clock Gating Control                           */
   uint32  SCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Sleep Mode Clock                                                   Gating Control                                                        */
   uint32  SCGCSSI;                           /*!< Synchronous Serial Interface Sleep Mode Clock Gating Control          */
   uint32  SCGCI2C;                           /*!< Inter-Integrated Circuit Sleep Mode Clock Gating Control              */
   uint32  RESERVED30;
   uint32  SCGCUSB;                           /*!< Universal Serial Bus Sleep Mode Clock Gating Control                  */
   uint32  RESERVED31[2];
   uint32  SCGCCAN;                           /*!< Controller Area Network Sleep Mode Clock Gating Control               */
   uint32  SCGCADC;                           /*!< Analog-to-Digital Converter Sleep Mode Clock Gating Control           */
   uint32  SCGCACMP;                          /*!< Analog Comparator Sleep Mode Clock Gating Control                     */
   uint32  SCGCPWM;                           /*!< Pulse Width Modulator Sleep Mode Clock Gating Control                 */
   uint32  SCGCQEI;                           /*!< Quadrature Encoder Interface Sleep Mode Clock Gating Control          */
   uint32  RESERVED32[4];
   uint32  SCGCEEPROM;                        /*!< EEPROM Sleep Mode Clock Gating Control                                */
   uint32  SCGCWTIMER;                        /*!< Wide Timer Sleep Mode Clock Gating Control                            */
   uint32  RESERVED33[40];
   uint32  DCGCWD;                            /*!< Watchdog Timer Deep-Sleep Mode Clock Gating Control                   */
   uint32  DCGCTIMER;                         /*!< Timer Deep-Sleep Mode Clock Gating Control                            */
   uint32  DCGCGPIO;                          /*!< General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control     */
   uint32  DCGCDMA;                           /*!< Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control       */
   uint32  RESERVED34;
   uint32  DCGCHIB;                           /*!< Hibernation Deep-Sleep Mode Clock Gating Control                      */
   uint32  DCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode                                                 Clock Gating Control                                                  */
   uint32  DCGCSSI;                           /*!< Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control     */
   uint32  DCGCI2C;                           /*!< Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control         */
   uint32  RESERVED35;
   uint32  DCGCUSB;                           /*!< Universal Serial Bus Deep-Sleep Mode Clock Gating Control             */
   uint32  RESERVED36[2];
   uint32  DCGCCAN;                           /*!< Controller Area Network Deep-Sleep Mode Clock Gating Control          */
   uint32  DCGCADC;                           /*!< Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control      */
   uint32  DCGCACMP;                          /*!< Analog Comparator Deep-Sleep Mode Clock Gating Control                */
   uint32  DCGCPWM;                           /*!< Pulse Width Modulator Deep-Sleep Mode Clock Gating Control            */
   uint32  DCGCQEI;                           /*!< Quadrature Encoder Interface Deep-Sleep Mode Clock Gating Control     */
   uint32  RESERVED37[4];
   uint32  DCGCEEPROM;                        /*!< EEPROM Deep-Sleep Mode Clock Gating Control                           */
   uint32  DCGCWTIMER;                        /*!< Wide Timer Deep-Sleep Mode Clock Gating Control                       */
   uint32  RESERVED38[104];
   uint32  PRWD;                              /*!< Watchdog Timer Peripheral Ready                                       */
   uint32  PRTIMER;                           /*!< Timer Peripheral Ready                                                */
   uint32  PRGPIO;                            /*!< General-Purpose Input/Output Peripheral Ready                         */
   uint32  PRDMA;                             /*!< Micro Direct Memory Access Peripheral Ready                           */
   uint32  RESERVED39;
   uint32  PRHIB;                             /*!< Hibernation Peripheral Ready                                          */
   uint32  PRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Ready          */
   uint32  PRSSI;                             /*!< Synchronous Serial Interface Peripheral Ready                         */
   uint32  PRI2C;                             /*!< Inter-Integrated Circuit Peripheral Ready                             */
   uint32  RESERVED40;
   uint32  PRUSB;                             /*!< Universal Serial Bus Peripheral Ready                                 */
   uint32  RESERVED41[2];
   uint32  PRCAN;                             /*!< Controller Area Network Peripheral Ready                              */
   uint32  PRADC;                             /*!< Analog-to-Digital Converter Peripheral Ready                          */
   uint32  PRACMP;                            /*!< Analog Comparator Peripheral Ready                                    */
   uint32  PRPWM;                             /*!< Pulse Width Modulator Peripheral Ready                                */
   uint32  PRQEI;                             /*!< Quadrature Encoder Interface Peripheral Ready                         */
   uint32  RESERVED42[4];
   uint32  PREEPROM;                          /*!< EEPROM Peripheral Ready                                               */
   uint32  PRWTIMER;                          /*!< Wide Timer Peripheral Ready                                           */
} SYSCTL_Type;

typedef struct {                                    /*!< ADC0 Structure                                                        */
   uint32  ACTSS;                             /*!< ADC Active Sample Sequencer                                           */
   uint32  RIS;                               /*!< ADC Raw Interrupt Status                                              */
   uint32  IM;                                /*!< ADC Interrupt Mask                                                    */
   uint32  ISC;                               /*!< ADC Interrupt Status and Clear                                        */
   uint32  OSTAT;                             /*!< ADC Overflow Status                                                   */
   uint32  EMUX;                              /*!< ADC Event Multiplexer Select                                          */
   uint32  USTAT;                             /*!< ADC Underflow Status                                                  */
   uint32  TSSEL;                             /*!< ADC Trigger Source Select                                             */
   uint32  SSPRI;                             /*!< ADC Sample Sequencer Priority                                         */
   uint32  SPC;                               /*!< ADC Sample Phase Control                                              */
   uint32  PSSI;                              /*!< ADC Processor Sample Sequence Initiate                                */
   uint32  RESERVED0;
   uint32  SAC;                               /*!< ADC Sample Averaging Control                                          */
   uint32  DCISC;                             /*!< ADC Digital Comparator Interrupt Status and Clear                     */
   uint32  CTL;                               /*!< ADC Control                                                           */
   uint32  RESERVED1;
   uint32  SSMUX0;                            /*!< ADC Sample Sequence Input Multiplexer Select 0                        */
   uint32  SSCTL0;                            /*!< ADC Sample Sequence Control 0                                         */
   uint32  SSFIFO0;                           /*!< ADC Sample Sequence Result FIFO 0                                     */
   uint32  SSFSTAT0;                          /*!< ADC Sample Sequence FIFO 0 Status                                     */
   uint32  SSOP0;                             /*!< ADC Sample Sequence 0 Operation                                       */
   uint32  SSDC0;                             /*!< ADC Sample Sequence 0 Digital Comparator Select                       */
   uint32  RESERVED2[2];
   uint32  SSMUX1;                            /*!< ADC Sample Sequence Input Multiplexer Select 1                        */
   uint32  SSCTL1;                            /*!< ADC Sample Sequence Control 1                                         */
   uint32  SSFIFO1;                           /*!< ADC Sample Sequence Result FIFO 1                                     */
   uint32  SSFSTAT1;                          /*!< ADC Sample Sequence FIFO 1 Status                                     */
   uint32  SSOP1;                             /*!< ADC Sample Sequence 1 Operation                                       */
   uint32  SSDC1;                             /*!< ADC Sample Sequence 1 Digital Comparator Select                       */
   uint32  RESERVED3[2];
   uint32  SSMUX2;                            /*!< ADC Sample Sequence Input Multiplexer Select 2                        */
   uint32  SSCTL2;                            /*!< ADC Sample Sequence Control 2                                         */
   uint32  SSFIFO2;                           /*!< ADC Sample Sequence Result FIFO 2                                     */
   uint32  SSFSTAT2;                          /*!< ADC Sample Sequence FIFO 2 Status                                     */
   uint32  SSOP2;                             /*!< ADC Sample Sequence 2 Operation                                       */
   uint32  SSDC2;                             /*!< ADC Sample Sequence 2 Digital Comparator Select                       */
   uint32  RESERVED4[2];
   uint32  SSMUX3;                            /*!< ADC Sample Sequence Input Multiplexer Select 3                        */
   uint32  SSCTL3;                            /*!< ADC Sample Sequence Control 3                                         */
   uint32  SSFIFO3;                           /*!< ADC Sample Sequence Result FIFO 3                                     */
   uint32  SSFSTAT3;                          /*!< ADC Sample Sequence FIFO 3 Status                                     */
   uint32  SSOP3;                             /*!< ADC Sample Sequence 3 Operation                                       */
   uint32  SSDC3;                             /*!< ADC Sample Sequence 3 Digital Comparator Select                       */
   uint32  RESERVED5[786];
   uint32  DCRIC;                             /*!< ADC Digital Comparator Reset Initial Conditions                       */
   uint32  RESERVED6[63];
   uint32  DCCTL0;                            /*!< ADC Digital Comparator Control 0                                      */
   uint32  DCCTL1;                            /*!< ADC Digital Comparator Control 1                                      */
   uint32  DCCTL2;                            /*!< ADC Digital Comparator Control 2                                      */
   uint32  DCCTL3;                            /*!< ADC Digital Comparator Control 3                                      */
   uint32  DCCTL4;                            /*!< ADC Digital Comparator Control 4                                      */
   uint32  DCCTL5;                            /*!< ADC Digital Comparator Control 5                                      */
   uint32  DCCTL6;                            /*!< ADC Digital Comparator Control 6                                      */
   uint32  DCCTL7;                            /*!< ADC Digital Comparator Control 7                                      */
   uint32  RESERVED7[8];
   uint32  DCCMP0;                            /*!< ADC Digital Comparator Range 0                                        */
   uint32  DCCMP1;                            /*!< ADC Digital Comparator Range 1                                        */
   uint32  DCCMP2;                            /*!< ADC Digital Comparator Range 2                                        */
   uint32  DCCMP3;                            /*!< ADC Digital Comparator Range 3                                        */
   uint32  DCCMP4;                            /*!< ADC Digital Comparator Range 4                                        */
   uint32  DCCMP5;                            /*!< ADC Digital Comparator Range 5                                        */
   uint32  DCCMP6;                            /*!< ADC Digital Comparator Range 6                                        */
   uint32  DCCMP7;                            /*!< ADC Digital Comparator Range 7                                        */
   uint32  RESERVED8[88];
   uint32  PP;                                /*!< ADC Peripheral Properties                                             */
   uint32  PC;                                /*!< ADC Peripheral Configuration                                          */
   uint32  CC;                                /*!< ADC Clock Configuration                                               */
} ADC0_Type;



/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((volatile unsigned long *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((volatile unsigned long *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((volatile unsigned long *)0xE000E018))
