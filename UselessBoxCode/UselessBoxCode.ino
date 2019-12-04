
#include <Servo.h>

Servo myServo;

const int switchPin1 = 10;
const int switchPin2 = 11;
const int servoPin = 9;

int switchState1 = 0;
int switchState2 = 0;
void setup() {
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  myServo.attach(servoPin);
  myServo.write(0);
  Serial.begin(9600);

}

void loop() {
  switchState1 = digitalRead(switchPin1);
  switchState2 = digitalRead(switchPin2);
  if(switchState1 == HIGH){
    myServo.write(90);
    Serial.println("Heya Georgie");
  }
  if(switchState2 == HIGH){
    myServo.write(0);
    Serial.println("Wanna Balloon?");
  }

}
