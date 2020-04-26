/**
 * @file blink.ino
 * @author Jordi Enguídanos (jenguidanos@rhomb.io)
 * @brief Configure a software serial UART on digital pins IO6 and IO7
 */

#include "Arduino.h"
#include "SoftwareSerial.h"
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
