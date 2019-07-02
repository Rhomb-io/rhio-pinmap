# Rhomb.io Duino Pinmap

Rhomb.io Duino Pinmap is a header file to use with Master modules (microcontrollers) of Rhomb.io. It includes all the pins of the master modules, mainly those compatible with the Arduino framework. This header is a great help to make the same code compatible with different types of MCUs, at least regarding the number of pins to use.

Let's take an example. All masters have a led routed to an MCU pin. Due to hardware design issues this led is not always routed to the same pin number.  For example in the _Duino One_ the pin of the led is `9` so in our code, when we use arduino framework, we can write `digitalWrite(9, HIGH);`, which will turn on the led. This code however is not valid for a _Duino Mega_ because the led is routed on pin 13. If we want our code to be compatible with both a _Duino One_ and a _Mega_ instead of directly writing the pin number we include the header rhio-pinmap.h that includes the LED macro and write `digitalWrite(LED, HIGH);`.

This header is also useful to know all the pins of an MCU and its equivalent in the Arduino framework. You will be able to know which pins the most common ports correspond to (SPI, I2C, UART, 1WIRE...).

## Usage

```C
#include "Arduino.h"

// List of supported MCUs. Uncomment ONLY one.
// #define DUINO_UNO
// #define DUINO_LEONARDO
// #define DUINO_PRO
// #define DUINO_ZERO
// #define DUINO_MEGA
// #define ESP32
// #define ESP32_v2
// #define ESP32
// #define ESP8266
// #define STM32L476
#include "rhio-pinmap.h"

void setup () {
  // setup led pin. LED is defined in rhio-pinmap.h.
  pinMode(LED, OUT);
  // power off led
  digitalWrite(LED, LOW);
}

void loop () {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}

```

## Development

Pull requests are welcome. Please use the [issue manager](https://github.com/Rhomb-io/rhio-pinmap/issues) to ask any question.

## License

See `license.md`. Rhio-pinmap has been written by [Guillermo Alonso](https://github.com/orgs/Rhomb-io/people/guialonsoalb), and this repo is maintained by [Jordi Enguídanos](https://github.com/orgs/Rhomb-io/people/jenguidanos).

## Changelog

### 2019-07-02 - v2.0.0 Beta

* Remove socket type and version from macro names (S100, S200, v1, v2)
* Added ESP32 V0 and V1
* Added ESP8266 V1
* Added STM32L476 v1
* Added examples

### 2018-10-30 - v1.0.3

* Fix analog lines pins on Duino Zero

### 2018-10-30 - 1.0.2

* Typo corrections

### 2018-10-30 - 1.0.0

* Initial Version
