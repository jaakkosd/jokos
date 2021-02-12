#include "vilkutin.hh"
#include <Arduino.h>

void Vilkutin::alustus() {
   pinMode(LED_BUILTIN, OUTPUT);
}

void Vilkutin::valkyta(int ms) {
  digitalWrite(LED_BUILTIN, LOW);
  delay(ms);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(ms);
}