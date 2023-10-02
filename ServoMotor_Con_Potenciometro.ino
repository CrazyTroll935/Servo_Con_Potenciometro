#include <Servo.h>
Servo servo1;

int servopin = 8;
int angulo = 0;
int potPin = A0;
int potValue;

void setup(){
  servo1.attach(servopin);
  pinMode(potPin, INPUT);
  servo1.write(angulo);
}

void loop(){
  potValue = analogRead(potPin);
  angulo = map(potValue,0,1023,0,180);
  servo1.write(angulo);
  delay(10);
}