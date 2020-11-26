/**
 * @file blink.h
 * @brief defines a led blink sequence
 */


#ifndef RHIO_PINMAP 
#include "rhio-pinmap.h"

#ifndef Arduino_h
#include <Arduino.h>
#endif

void blink(){
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
}
#endif