/**
 * Rhomb.io Duino Pinmap
 *
 * Copyright (c) Tecnofingers S.L
 * All rights reserved.
 *
 * @author Guillermo Alonso
 * @version 1.0.2
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
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
//**** end of S100_ESP32_WROOM_32_v1_0 ***********************//


//*** S100_ESP_WROOM_02_v1_0 *********************************//
#ifdef S100_ESP_WROOM_02_v1_0
  // coming soon
#endif
//**** end of S100_ESP_WROOM_02_v1_0 ***********************//


//*** S200_STM32L476_v2_0 *********************************//
#ifdef S200_STM32L476_v2_0
  // coming soon
#endif
//**** end of S200_STM32L476_v2_0 ***********************//

#endif // RHIO_PINMAP
