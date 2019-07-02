/**
 * @file blink.ino
 * @author Jordi Enguídanos (jenguidanos@rhomb.io)
 * @brief Configure a software serial UART on digital pins IO6 and IO7
 */

#include "Arduino.h"
#include "SoftwareSerial.h"

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

// Create a new SoftwareSerial object with IO6 and IO7
SoftwareSerial MySerial(IO6, IO7);

void setup () {
  // Configure LED and turn on
  pinMode(LED, OUT);
  digitalWrite(LED, HIGH);

  // Setup serial
  MySerial.begin(9600);

  // Print a message
  MySerial.println("rhomb.io is awesome!");
}

void loop () {

}
