/**
 * @file blink.ino
 * @brief Example of rhio-pinmap for Duino Pro
 *
 * To prevent a colission with Duino Uno, the Duino Pro requires an
 * extra header before include the library.
 */
#include "Arduino.h"

#define RHIO_DUINO_PRO 1
#include "rhio-pinmap.h"

void setup() {
  // setup led pin
  pinMode(LED, OUT);
  // power off led
  digitalWrite(LED, LOW);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
