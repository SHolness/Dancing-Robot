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
  // put your main code here, to run repeatedly:
 if (digitalRead(buttonPin) == LOW)
 driveDistance(12, 150);
 turnRight();
}
