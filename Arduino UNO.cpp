#include <Servo.h>
int x = 0;
Servo servo1;

void setup()
{
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);
  servo1.attach(4);
}

void loop()
{
  x = digitalRead(2); 
  
  if(x == HIGH)
  {
    digitalWrite(7, HIGH);
    servo1.write(90);
} else {
    digitalWrite(7, LOW);
    servo1.write(0);
  }
  
  delay(0); 
}