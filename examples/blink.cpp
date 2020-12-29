/**
 * @file blink.ino
 * @brief Blink the built in led of any rhomb.io Master usin the macro "LED"
 * from rhio-pinmap library.
 *
 * Explanation: Each microcontroller can use a different pin number to control
 * the digital pin of the led, but using the macro "LED" we don't have to worry
 * about it. This code will work in all microcontrollers included in the pinmap
 * library without any modification.
 */

#include "Arduino.h"
#include "rhio-pinmap.h"

#define BLINK_DURATION 1000

void setup() {
  pinMode(LED, OUT);
  digitalWrite(LED, LOW);
}

void loop() {
  static unsigned long timeout = millis();
  while (millis() - timeout >= BLINK_DURATION) {
    timeout = millis();
    digitalWrite(LED, !digitalRead(LED));
  }
}
