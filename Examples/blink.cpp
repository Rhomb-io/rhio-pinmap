#include "Arduino.h"
#include "rhio-pinmap.h"

void setup() {
  pinMode(LED, OUT);
  digitalWrite(LED, HIGH);

}
void loop() {
  delay(300);
  digitalWrite(LED, LOW);
  delay(300);
  digitalWrite(LED, HIGH);
}