/**
 * @file blink.ino
 * @author Jordi Enguídanos (jenguidanos@rhomb.io)
 * @brief Blink the built in led of any rhomb.io Duino Master
 */
#include "Arduino.h"

// List of supported MCUs. Uncomment ONLY one.
// #define DUINO_UNO_v1
// #define DUINO_LEONARDO_v1
// #define DUINO_PRO_v1
// #define DUINO_ZERO_v1
// #define DUINO_MEGA_v0
// #define DUINO_MEGA_v1
// #define ESP32_v1
// #define ESP32_v2
// #define ESP32_v1
// #define ESP8266_v1
// #define STM32L476_v1
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
