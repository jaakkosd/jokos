#include <Arduino.h>

int luku = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(luku/0);
}