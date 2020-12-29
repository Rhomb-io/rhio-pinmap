/**
 * @file message.ino
 * @brief receives a message on one UART and sends it through the other UART
 * port
 */

#include <Arduino.h>
#include "blink.h"
#include "rhio-pinmap.h"

void blink() {
  static unsigned long timeout = millis();
  while (millis() - timeout >= 100) {
    timeout = millis();
    digitalWrite(LED, !digitalRead(LED));
  }
}

void setup() {
  pinMode(LED, OUTPUT);

  RH_UART_A.begin(115200);
  RH_UART_DEBUG.begin(115200);
  while (!RH_UART_DEBUG) {
  }  // for SAMD21 or Atmega32u4
}

void loop() {
  // just a visual cue of the loop using the LED.
  // set "false" to disable
  if (true) {
    blink();
  }

  // receives data on UART_A and sends it through UART_DEBUG
  if (RH_UART_A.available()) {
    RH_UART_DEBUG.write(RH_UART_A.read());
  }

  // receives data on UART_DEBUG and sends it through UART_A
  if (RH_UART_DEBUG.available()) {
    RH_UART_A.write(RH_UART_DEBUG.read());
  }
}