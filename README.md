# Rhomb.io Duino Pinmap

Rhomb.io Duino Pinmap is a header file to use with Master modules (microcontrollers) of Rhomb.io. It includes all the pins of the master modules, mainly those compatible with the Arduino framework. This header is a great help to make the same code compatible with different types of MCUs, at least regarding the number of pins to use.

Let's take an example. All masters have a led routed to an MCU pin. Due to hardware design issues this led is not always routed to the same pin number.  For example in the _Duino One_ the pin of the led is `9` so in our code, when we use arduino framework, we can write `digitalWrite(9, HIGH);`, which will turn on the led. This code however is not valid for a _Duino Mega_ because the led is routed on pin 13. If we want our code to be compatible with both a _Duino One_ and a _Mega_ instead of directly writing the pin number we include the header rhio-pinmap.h that includes the LED macro and write `digitalWrite(LED, HIGH);`.

This header is also useful to know all the pins of an MCU and its equivalent in the Arduino framework. You will be able to know which pins the most common ports correspond to (SPI, I2C, UART, 1WIRE...).

## Usage
```C
#include "Arduino.h"
#include "SoftwareSerial.h"
#include "rhio-pinmap.h"

SoftwareSerial MySerial(SDA, SCL);

void setup () {
  pinMode(LED, OUT);
  digitalWrite(LED, HIGH);

  MySerial.begin(9600);
  MySerial.println("Rhomb.io is awesome!");
}

void loop () {}
```

## Development
Pull requests are welcome. Please use the [issue manager](https://github.com/Rhomb-io/rhio-pinmap/issues) to ask any question.

## Changelog
**2018-10-30**
* Typo corrections

**2018-10-30**
* Initial Version 1.0.0

## License
MIT License.
