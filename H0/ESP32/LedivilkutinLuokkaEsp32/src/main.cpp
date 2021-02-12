#include <Arduino.h>
#include "vilkutin.hh"

Vilkutin v;

void setup() {
   v.alustus();
}

void loop() {
  v.valkyta(100);
}