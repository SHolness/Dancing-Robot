#include <RedBot.h>
RedBotMotors motors;
RedBotEncoder encoder = RedBotEncoder(A2, 10);
int buttonPin = 12;
int countsPerRev = 192;
float wheelDiam = 2.56;  
float wheelCirc = PI*wheelDiam;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  motors.rightMotor(200);
  motors.leftMotor(-200);
delay(5000);
  motors.rightMotor(200);
  motors.leftMotor(0);
}
