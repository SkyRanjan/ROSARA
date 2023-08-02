#include <AFMotor.h>
#define Speed 170

AF_DCMotor M1(1);
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  M1.setSpeed(Speed);
  M2.setSpeed(Speed);
  M3.setSpeed(Speed);
  M4.setSpeed(Speed);

}

void loop() {
  // put your main code here, to run repeatedly:
  bluetoothControl();
}

void bluetoothControl()
{
  if(Serial.available())
  {
    char value= Serial.read();
    Serial.println(value);
    if(value=='U')
    {
      forward();
    }
    else if(value=='D')
    {
      backward();
    }
    else if(value=='L')
    {
      left();
    }
    else if(value=='R')
    {
      right();
    }
    else if(value=='S')
    {
      stop();
    }
  }
}

void backward()
{
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}
void forward()
{
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}
void right()
{
  M1.run(FORWARD);
  M2.run(BACKWARD);
  M3.run(FORWARD);
  M4.run(BACKWARD);
}
void left()
{
  M1.run(BACKWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(BACKWARD);
}
void stop()
{
  M1.run(RELEASE);
  M2.run(RELEASE);
  M3.run(RELEASE);
  M4.run(RELEASE);
}