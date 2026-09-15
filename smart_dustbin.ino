#include <Servo.h>

Servo myServo;

const int irPin = 2;
const int servoPin = 3;

void setup() {
  pinMode(irPin, INPUT);

  myServo.attach(servoPin);
  myServo.write(0);
}

void loop() {
  if (digitalRead(irPin) == LOW) {
    myServo.write(90);
    delay(3000);
  } 
  else {
    myServo.write(0);
  }

  delay(100);
}
