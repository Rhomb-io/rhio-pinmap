/**
 * @file message.ino
 * @brief receives a message on one UART and sends it through the other UART port
 */

#include <Arduino.h>
#include "blink.h"
#include "rhio-pinmap.h"
 
void setup()
{
  pinMode(LED, OUTPUT);
 
  RH_SERIAL_S1.begin(115200); while(!RH_SERIAL_S1){}
  RH_SERIAL_S2.begin(115200); while(!RH_SERIAL_S2){}
  
}
void loop()
{
  // just a visual cue of the loop using the LED.
  // set "false" to disable
  if(true){
    blink();
  }

  // receives data on S1 and sends it through S2
  if (RH_SERIAL_S1.available()){
    RH_SERIAL_S2.write(RH_SERIAL_S1.read());
  }

  // receives data on S2 and sends it through S1 
  if (RH_SERIAL_S2.available()){
     RH_SERIAL_S1.write(RH_SERIAL_S2.read());
  }

}