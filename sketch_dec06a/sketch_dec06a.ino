#include <RedBot.h>
RedBotMotors motors;
RedBotEncoder encoder = RedBotEncoder(A2, 10);
int buttonPin = 12;
int countsPerRev = 192;
float wheelDiam = 2.56;
float wheelCirc = PI*wheelDiam;
void setup() {
  // put your setup code here, to run once:

}

void loop() 
{
  // put your main code here, to run repeatedly:
  triangle();
  delay(30000);
  square();
  delay(30000);
  circle();
  delay(30000);
}

void circle()
{
motors.rightMotor(200);
motors.leftMotor(0);
delay(20);
motors.rightMotor(200);
motors.leftMotor(-200);
delay(100);
}

void square()
{
  motors.rightMotor(175);
  motors.leftMotor(175);
  delay(1000);
  motors.rightMotor(200);
  motors.leftMotor(-200);
  delay(2000);
}

void triangle()
{
  motors.rightMotor(-175);
  motors.leftMotor(-175);
  delay(1000);
  motors.rightMotor(200);
  motors.leftMotor(-200);
  delay(2000);
}

