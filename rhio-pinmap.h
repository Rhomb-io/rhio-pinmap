/**
 * Rhomb.io Duino Pinmap
 *
 * Copyright (c) Tecnofingers S.L
 * All rights reserved.
 *
 * @author Guillermo Alonso
 * @version 2.0.0
 */

#ifndef RHIO_PINMAP
#define RHIO_PINMAP


  //*** S100_DUINO_UNO_v1 *********************************//
#ifdef S100_DUINO_UNO_v1
  #define NMI     2
  #define INT0    3

  #define IO0          4
  #define IO1          5
  #define IO2          6
  #define IO3          7
  #define IO4          8
  #define IO5          A0
  #define IO6          A1
  #define IO7          A2

  #define LED0         9
  #define PWM0         9

  #define UART_A_RXD   0
  #define UART_A_TXD   1
  #define I2C_A_SDA    A4
  #define I2C_A_SCL    A5
  #define SPI_A_MOSI   11
  #define SPI_A_MISO   12
  #define SPI_A_CLK    13
  #define SPI_A_CS0    10
  #define _1WIRE       A3 // SJ4 must be closed & SJ1 must be open

  #define AD0          A6
  #define CAPT0        A7

  #define RSTOUT       A3 // SJ1 must be closed & SJ4 must be open
#endif
  //**** end of S100_DUINO_UNO_v1 ***********************//

  //*** S100_DUINO_LEONARDO_v1 **************************//
#ifdef S100_DUINO_LEONARDO_v1
  #define NMI          HWB // HWB on original Arduino Leonardo; MCU pin: PE2
  #define INT0         SS // RXLED on original Arduino Leonardo; MCU pin: PB0

  #define IO0          4
  #define IO1          5
  #define IO2          6
  #define IO3          7
  #define IO4          8
  #define IO5          A0
  #define IO6          A1
  #define IO7          A2

  #define LED0         9
  #define PWM0         9

  #define UART_A_RXD   0
  #define UART_A_TXD   1
  #define I2C_A_SDA    A4
  #define I2C_A_SCL    A5
  #define SPI_A_MOSI   11
  #define SPI_A_MISO   12
  #define SPI_A_CLK    13
  #define SPI_A_CS0    10
  #define _1WIRE       TXLED // TXLED on original Arduino Leonardo; MCU pin: PD5

  #define AD0          A6
  #define AD1          A7

  #define RSTOUT       A1
#endif
  //**** end of S100_DUINO_LEONARDO_v1 ***********************//

  //*** S200_DUINO_PRO_v1 ********************************//
#ifdef S200_DUINO_PRO_v1
  #include "clsPCA9555.h"// library for IO_EXPANDER required

  #define IOEX0        ED0
  #define IOEX1        ED1
  #define IOEX2        ED2
  #define IOEX3        ED3
  #define IOEX4        ED4
  #define IOEX5        ED5
  #define IOEX6        ED6
  #define IOEX7        ED7
  #define IOEX8        ED8
  #define IOEX9        ED9
  #define IOEX10ED10
  #define IOEX11ED11
  #define IOEX12ED12
  #define IOEX13ED13
  #define IOEX14ED14
  #define IOEX15ED15

  #define AND_OUT      2
  #define IOEX_INT     A2 // MUX_SW=LOW required
  #define NMI          A0 // MUX_SW=LOW required
  #define INT0         A1 // MUX_SW=LOW required
  #define INT1         IOEX2

  #define MUX_SW       7
  #define UART_SW      IOEX0

  #define IO0          4
  #define IO1          3
  #define IO2          5
  #define IO3          IOEX3
  #define IO4          IOEX4
  #define IO5          IOEX5
  #define IO6          IOEX6
  #define IO7          IOEX7
  #define IO8          IOEX8
  #define IO9          IOEX9
  #define IO10         IOEX10
  #define IO11         IOEX11
  #define IO12         IOEX12
  #define IO13         IOEX13
  #define IO14         IOEX14
  #define IO15         IOEX15

  #define LED0         9
  #define PWM0         9
  #define PWM1         6

  #define UART_A_RXD   0 // UART_SW=LOW required
  #define UART_A_TXD   1 // UART_SW=LOW required
  #define UART_B_RXD   0 // UART_SW=HIGH required
  #define UART_B_TXD   1 // UART_SW=HIGH required
  #define I2C_A_SDA    A4
  #define I2C_A_SCL    A5
  #define SPI_A_MOSI   11
  #define SPI_A_MISO   12
  #define SPI_A_CLK    13
  #define SPI_A_CS0    10
  #define SPI_A_CS1    IOEX1
  #define _1WIRE       A3 // MUX_SW=LOW required

  #define AD0          A6
  #define AD1          A7
  #define AD2          A0 // MUX_SW=HIGH required
  #define AD3          A1 // MUX_SW=HIGH required
  #define AD4          A2 // MUX_SW=HIGH required
  #define AD5          A3 // MUX_SW=HIGH required

  #define RSTOUT8
#endif
  //**** end of S200_DUINO_PRO_v1 ***********************//

  //*** S200_DUINO_ZERO_v1 **********************************//
#ifdef S200_DUINO_ZERO_v1
  #define NMI          4
  #define INT0         3
  #define INT1         23
  // #define CAPT0       ?? // PA28, not includded on Arduino IDE for Arduino Zero

  #define IO0          2
  #define IO1          5
  #define IO2          6
  #define IO3          7
  #define IO4          8
  // #define IO5       ?? // PA27, not includded on Arduino IDE for Arduino Zero
  #define IO6          24
  #define IO7          22

  #define LED0         9
  #define PWM0         9
  // #define PWM1      ?? // PB03, not includded on Arduino IDE for Arduino Zero

  #define UART_A_RXD   0
  #define UART_A_TXD   1
  // #define UART_A_RTS   ?? // PA31, not includded on Arduino IDE for Arduino Zero
  // #define UART_A_CTS   ?? // PA30, not includded on Arduino IDE for Arduino Zero
  #define UART_B_RXD   31
  #define UART_B_TXD   30

  #define I2C_A_SDA    20
  #define I2C_A_SCL    21

  #define SPI_A_MOSI   35
  #define SPI_A_MISO   34
  #define SPI_A_CLK    37
  #define SPI_A_CS0    10
  #define SPI_A_CS1    A5 // MUX_SW=LOW required
  #define SPI_A_MEM_CS A4 // MUX_SW=LOW required
  #define SPI_A_uSD_CS A2 // MUX_SW=LOW required
  // #define USB_P     ?? // PA25, not includded on Arduino IDE for Arduino Zero
  // #define USB_N     ?? // PA24, not includded on Arduino IDE for Arduino Zero
  #define _1WIRE       A3 // MUX_SW=LOW required

  #define AD0          A1
  #define AD1          A4 // MUX_SW=HIGH required
  #define AD2          A2 // MUX_SW=HIGH required
  #define AD3          A5 // MUX_SW=HIGH required
  #define DAC0         A0

  #define MUX_SW       38 // ANALOG (MULTIPLEXOR) SWITCH
  #define RSTOUT       A3 // MUX_SW=HIGH required
#endif
  //**** end of S200_DUINO_ZERO_v1 ***************************//


  //*** S200_DUINO_MEGA_v0 *********************************//
#ifdef S200_DUINO_MEGA_v0
  #define NMI          2
  #define INT0         3
  #define INT1         12
  #define INT2         11
  // #define INT3    ?? // PJ6 not includded on Arduino IDE for Mega
  // #define INT4    ?? // PE6 not includded on Arduino IDE for Mega
  // #define INT5    ?? // PE7 not includded on Arduino IDE for Mega
  // #define INT6    ?? // PJ2 not includded on Arduino IDE for Mega

  #define IO0          36
  #define IO1          33
  #define IO2          44
  #define IO3          37
  #define IO4          34
  #define IO5          43
  #define IO6          46
  #define IO7          48

  #define IO8          47
  #define IO9          42
  #define IO10         45
  #define IO11         4
  #define IO12         32
  #define IO13         26
  #define IO14         31
  #define IO15         27

  #define IO16         39
  #define IO17         25
  #define IO18         24
  #define IO19         30
  #define IO20         28
  #define IO21         23
  #define IO22         29
  #define IO23         22

  #define IO24         35 // second function (main function is SPI_A_CS1)
  #define IO25         40 // second function (main function is SPI_A_CS2)
  #define IO26         41
  #define IO27         38
  #define IO28         28
  #define IO29         9 // second function (main function is PWM3)
  #define IO30         8 // second function (main function is PWM2)
  #define IO31         7 // second function (main function is PWM1)

  // #define IO32        ?? // PD6 not includded on Arduino IDE for Mega
  // #define IO34        ?? // PJ5 not includded on Arduino IDE for Mega
  // #define IO35        ?? // PJ7 not includded on Arduino IDE for Mega

  #define LED0         13
  #define PWM0         13
  #define PWM1         7
  #define PWM2         8
  #define PWM3         9
  #define PWM4         10

  #define UART_A_RXD   0
  #define UART_A_TXD   1
  #define UART_B_RXD   19
  #define UART_B_TXD   18
  #define UART_C_RXD   17
  #define UART_C_TXD   16
  #define UART_D_RXD   15
  #define UART_D_TXD   14

  #define I2C_A_SDA    20
  #define I2C_A_SCL    21
  #define SPI_A_MOSI   51
  #define SPI_A_MISO   50
  #define SPI_A_CLK    52
  #define SPI_A_CS0    53
  #define SPI_A_CS1    35
  #define SPI_A_CS2    40
  #define SPI_A_MEM_CS A15
  // #define SPI_A_uSD_CS ?? // SPI mode only; PD5 not includded on Arduino IDE for Mega
  #define QSPI_CS0     A14 // SPI mode only;

  // #define _1WIRE   ??// PH7 not includded on Arduino IDE for Mega

  #define AD0          A0
  #define AD1          A1
  #define AD2          A2
  #define AD3          A3
  #define AD4          A4
  #define AD5          A5
  #define AD6          A6

  #define AD9          A12
  #define AD10         A11
  #define AD11         A9
  #define AD12         A8
  #define AD13         A13
  #define AD14         A10
  #define AD15         A4

  #define COMP_A_N     5
  // #define COMP_A_P    ?? // PE2 not includded on Arduino IDE for Mega

  #define TS_YU        A12
  #define TS_XL        A11
  #define TS_YD        A9
  #define TS_XR        A8

  // #define CAPT0       ?? // PD4 not includded on Arduino IDE for Mega
  #define CAPT1        49

  // #define RSTOUT      ?? // PJ3 not includded on Arduino IDE for Mega
#endif
  //**** end of S100_DUINO_MEGA_v0 ***********************//

  //*** S200_DUINO_MEGA_v1 *********************************//
#ifdef S200_DUINO_MEGA_v1
  #define NMI          2
  #define INT0         3
  #define INT1         12
  #define INT2         11
 // #define INT3       ?? // PJ6 not includded on Arduino IDE for Mega
 // #define INT4       ?? // PE6 not includded on Arduino IDE for Mega
 // #define INT5       ?? // PE7 not includded on Arduino IDE for Mega
 // #define INT6       ?? // PJ2 not includded on Arduino IDE for Mega

  #define IO0          36
  #define IO1          33
  #define IO2          44
  #define IO3          37
  #define IO4          34
  #define IO5          43
  #define IO6          46
  #define IO7          48

  #define IO8          47
  #define IO9          42
  #define IO10         45
  #define IO11         4
  #define IO12         32
  #define IO13         26
  #define IO14         31
  #define IO15         27

  #define IO16         39
  #define IO17         25
  #define IO18         24
  #define IO19         30
  #define IO20         28
  #define IO21         23
  // #define IO22         ?? // PJ3 not includded on Arduino IDE for Mega
  #define IO23         22

  #define IO24         35 // second function (main function is SPI_A_CS1)
  #define IO25         40 // second function (main function is SPI_A_CS2)
  // #define IO26         ?? // PD5 not includded on Arduino IDE for Mega
  // #define IO27         ?? // PH7 not includded on Arduino IDE for Mega
  #define IO28         28
  #define IO29         9 // second function (main function is PWM3)
  #define IO30         8 // second function (main function is PWM2)
  #define IO31         7 // second function (main function is PWM1)

  // #define IO32        ?? // PD6 not includded on Arduino IDE for Mega
  // #define IO34        ?? // PJ5 not includded on Arduino IDE for Mega
  // #define IO35        ?? // PJ7 not includded on Arduino IDE for Mega

  #define LED0         13
  #define PWM0         13
  #define PWM1         7
  #define PWM2         8
  #define PWM3         9
  #define PWM4         10

  #define UART_A_RXD   0
  #define UART_A_TXD   1
  #define UART_B_RXD   19
  #define UART_B_TXD   18
  #define UART_C_RXD   17
  #define UART_C_TXD   16
  #define UART_D_RXD   15
  #define UART_D_TXD   14

  #define I2C_A_SDA    20
  #define I2C_A_SCL    21
  #define SPI_A_MOSI   51
  #define SPI_A_MISO   50
  #define SPI_A_CLK    52
  #define SPI_A_CS0    53
  #define SPI_A_CS1    35
  #define SPI_A_CS2    40
  #define SPI_A_MEM_CS A15
  #define SPI_A_uSD_CS 29 // SPI mode only;
  #define QSPI_CS0     A14 // SPI mode only;

  #define _1WIRE       38

  #define AD0          A0
  #define AD1          A1
  #define AD2          A2
  #define AD3          A3
  #define AD4          A4
  #define AD5          A5
  #define AD6          A6

  #define AD9          A12
  #define AD10         A11
  #define AD11         A9
  #define AD12         A8
  #define AD13         A13
  #define AD14         A10
  #define AD15         A4

  #define COMP_A_N      5
  // #define COMP_A_P      ?? // PE2 not includded on Arduino IDE for Mega

  #define TS_YU        A12
  #define TS_XL        A11
  #define TS_YD        A9
  #define TS_XR        A8

  #define CAPT0        49
  // #define CAPT1        ?? // PD4 not includded on Arduino IDE for Mega

  #define RSTOUT       41
#endif
  //**** end of S100_DUINO_MEGA_v1 ***********************//

  //*** S100_ESP32_v01 *********************************//
#ifdef S100_ESP32_v01
  #define NMI          0
  #define INT0         34

  #define IO0          2
  #define IO1          4
  #define IO2          25
  #define IO3          26
  #define IO4          27
  #define IO5          32
  #define IO6          13 // R16 must be populated/closed
  #define IO7          0  // R14 must be populated/closed

  #define LED0         33
  #define PWM0         33

  #define UART_A_RXD   RXD0
  #define UART_A_TXD   TXD0
  #define UART_A_RTS   22 // R12 must be populated/closed
  #define UART_A_CTS   19 // R13 must be populated/closed
  #define UART_B_RXD   16
  #define UART_B_TXD   17
  #define I2C_A_SDA    21
  #define I2C_A_SCL    22
  #define SPI_A_MOSI   23
  #define SPI_A_MISO   19
  #define SPI_A_CLK    18
  #define SPI_A_CS0    5
  #define QSPI_CS0     15
  #define QSPI_MEM_CS  15 // R25 must be populated/closed
  #define _1WIRE       12 // R22 must be populated/closed

  #define SDIO_DATAO   SD0
  #define SDIO_DATA1   SD1
  #define SDIO_DATA2   SD2
  #define SDIO_DATA3   SD3
  #define SDIO_CLKCLK
  #define SDIO_CMDCMD

  #define AD0          35

  #define DIFF_A_PSENSOR_VP
  #define DIFF_A_NSENSOR_VN

  #define RSTOUT       14
#endif
  //**** end of S100_ESP32_v01 ***********************//

  //*** S100_ESP32_v02 *********************************//
#ifdef S100_ESP32_v02
  #define NMI          0
  #define INT0         34

  #define IO0          2
  #define IO1          4
  #define IO2          25
  #define IO3          26
  #define IO4          27
  #define IO5          13
  #define IO6          33 // R16 must be populated/closed
  #define IO7          15 // R14 must be populated/closed

  #define LED0         12
  #define PWM0         12

  #define UART_A_RXD   RXD0
  #define UART_A_TXD   TXD0
  #define UART_A_RTS   22 // R12 must be populated/closed
  #define UART_A_CTS   19 // R13 must be populated/closed
  #define UART_B_RXD   16
  #define UART_B_TXD   17
  #define I2C_A_SDA    21
  #define I2C_A_SCL    22
  #define SPI_A_MOSI   23
  #define SPI_A_MISO   19
  #define SPI_A_CLK    18
  #define SPI_A_CS0    5
  #define QSPI_CS0     32
  #define QSPI_MEM_CS  15 // R25 must be populated/closed
  #define _1WIRE       33 // R22 must be populated/closed

  #define SDIO_DATAO   SD0
  #define SDIO_DATA1   SD1
  #define SDIO_DATA2   SD2
  #define SDIO_DATA3   SD3
  #define SDIO_CLKCLK
  #define SDIO_CMDCMD

  #define AD0          35

  #define DIFF_A_PSENSOR_VP
  #define DIFF_A_NSENSOR_VN

  #define RSTOUT       14
#endif
  //**** end of S100_ESP32_v02 ***********************//

  //*** S100_ESP32_v1 *********************************//
#ifdef S100_ESP32_v1
  #define NMI          0
  #define INT0         34

  #define IO0          14
  #define IO1          4
  #define IO2          25
  #define IO3          26
  #define IO4          27
  #define IO5          15 // SJ5 must be populated/closed
  #define IO6          33 // SJ8 must be populated/closed
  #define IO7          32 // SJ9 must be populated/closed

  #define LED0         12
  #define PWM0         12

  #define UART_A_RXD   RXD0
  #define UART_A_TXD   TXD0
  #define UART_A_RTS   22 // R5 must be populated/closed
  #define UART_A_CTS   19 // R4 must be populated/closed
  #define UART_B_RXD   16
  #define UART_B_TXD   17
  #define I2C_A_SDA    21
  #define I2C_A_SCL    22
  #define SPI_A_MOSI   23
  #define SPI_A_MISO   19
  #define SPI_A_CLK    18
  #define SPI_A_CS0    5
  #define SPI_A_uSD_CS 32 // SJ10 must be populated/closed
  #define QSPI_CS0     15 // SJ4 must be populated/closed
  #define QSPI_MEM_CS  15 // SJ6 must be populated/closed
  #define _1WIRE       33 // SJ7 must be populated/closed

  #define AD0          35

  #define DIFF_A_PSENSOR_VP
  #define DIFF_A_NSENSOR_VN

  #define RSTOUT       2
#endif
  //**** end of S100_ESP32_v1 ***********************//

  //*** S100_ESP8266_v1 *********************************//
#ifdef S100_ESP8266_v1
  #define NMI          0
  #define INT0         0 // SJ9 must be populated/closed

  #define IO0          4
  #define IO1          12 // SJ11 must be populated/closed
  #define IO2          5
  #define IO3          16

  #define LED0         15
  #define PWM0         15

  #define UART_A_RXD   RXD
  #define UART_A_TXD   TXD
  #define UART_A_RTS   15 // SJ7 must be populated/closed
  #define UART_A_CTS   13 // SJ8 must be populated/closed
  #define UART_B_TXD   2 // SJ13 must be populated/closed
  #define I2C_A_SDA    2
  #define I2C_A_SCL    14 // SJ12 must be populated/closed
  #define SPI_A_MOSI   13
  #define SPI_A_MISO   12
  #define SPI_A_CLK    14
  #define SPI_A_CS0    15
  #define _1WIRE       16 // SJ6 must be closed

  #define AD0          TOUT

  #define RSTOUT   5 // SJ5 must be closed
#endif
  //**** end of S100_ESP8266_v1 ***********************//

  //*** S200_STM32L476_v1 *********************************//
#ifdef S200_STM32L476_v1
  #define NMI          PB1
  #define INT0         PB3
  #define INT1         PB7
  #define INT2         PA15

  #define IO0          PB5
  #define IO1          PB4
  #define IO2          PB10
  #define IO3          PA8
  #define IO4          PA9
  #define IO5          PE8
  #define IO6          PB11
  #define IO7          PB15

  #define IO8          PC13
  #define IO9          PE7
  #define IO10         PD10
  #define IO11         PD11
  #define IO12         PD12
  #define IO13         PD13
  #define IO14         PC3
  #define IO15         PC2

  #define LED0         PC7
  #define PWM0         PC7
  #define PWM1         PE9
  #define PWM2         PD14
  #define PWM3         PC6
  #define PWM4         PB2

  #define UART_A_RXD   PA3
  #define UART_A_TXD   PA2
  #define UART_A_CTS   PD3
  #define UART_A_RTS   PD4
  #define UART_B_RXD   PD6
  #define UART_B_TXD   PD5
  #define UART_C_RXD   PD9
  #define UART_C_TXD   PD8

  #define I2C_A_SDA    PB9
  #define I2C_A_SCL    PB8
  #define I2C_B_SDA    PB14 // R14 must be populated/closed
  #define I2C_B_SCL    PB13 // R15 must be populated/closed
  #define SPI_A_MOSI   PA6
  #define SPI_A_MISO   PA7
  #define SPI_A_CLK    PA5
  #define SPI_A_CS0    PB6
  #define SPI_A_CS1    PB14
  #define SPI_A_CS2    PB13

  #define QSPI_IO0     PE12
  #define QSPI_IO1     PE13
  #define QSPI_IO2     PE14
  #define QSPI_IO3     PE15
  #define QSPI_CLK     PE10
  #define QSPI_CS0     PE11
  #define QSPI_MEM_CS  PD7

  #define _1WIRE       PB12
  #define CAN_A_RXPD0
  #define CAN_A_TXPD1

  #define SDIO_DATAO   PC8
  #define SDIO_DATA1   PC9
  #define SDIO_DATA2   PC10
  #define SDIO_DATA3   PC11
  #define SDIO_CLKPC12
  #define SDIO_CMDPD2
  #define SDIO_CDNPD15

  #define SAI_A_BCLK   PE5
  #define SAI_A_LRCLK  PE4
  #define SAI_A_SDIPE6
  #define SAI_A_SDOPE3
  #define SAI_A_MCLK   PE2

  #define OTG_N        PA11
  #define OTG_P        PA12
  #define OTG_IDPA10

  #define AD0          PA0
  #define AD1          PA1
  #define AD2          PA4
  #define AD3          PB0
  #define AD4          PC1
  #define AD5          PC0

  #define AD7          PC5
  #define AD8          PC4

  #define COMP_A_N     PC4
  #define COMP_A_PPC5

  #define CAPT0        PC3 // R18 must be populated/closed
  #define CAPT1        PC2 // R19 must be populated/closed

  #define SWDIO        PA13
  #define SWCLK        PA14

  #define RSTOUT       PE0
#endif
  //**** end of S200_STM32L476_v1 ***********************//


#endif // RHIO_PINMAP
