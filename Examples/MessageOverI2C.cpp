#include "Arduino.h"
#include "SoftwareSerial.h"
#include "rhio-pinmap.h"

SoftwareSerial MySerial(SDA, SCL);

void setup() {
  pinMode(LED, OUT);
  digitalWrite(LED, HIGH);

  MySerial.begin(9600);
  MySerial.println("Rhomb.io is awesome!");
}

void loop() {}