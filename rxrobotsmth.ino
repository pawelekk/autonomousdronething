//# Izi good luck alex.

#include <Serial.h>
#include <Servo.h>

Serial port1 = 9600;
public char serial_read;

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

void setup() {
  Serial.begin(port1);
}

void loop() {
  if(Serial.available()) {
     serial_read = Serial.read();
  }
}
