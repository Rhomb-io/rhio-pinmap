/**
 * @file blink.ino
 * @author Jordi Enguídanos (jenguidanos@rhomb.io)
 * @brief Blink the built in led of any rhomb.io Duino Master
 */
#include "Arduino.h"
#include "rhio-pinmap.h"

void setup () {
  // setup led pin
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
