#include <Servo.h>
Servo servo;

const int buttonPin = 13;
const int ledPin = 8;
const int servoPin = 7;

int value = 0;

int buttonState = 0;

void setup() {
  servo.attach(servoPin);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    value += 30;
    
  } else {
    digitalWrite(ledPin, LOW);
  }

  if (value > 180) 
    value = 0;
    
  servo.write(value); 
  
  delay(200);
  
}
