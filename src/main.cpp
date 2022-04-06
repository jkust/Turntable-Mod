#include <Arduino.h>
#include <AccelStepper.h>

#define HALFSTEP 8

#define motorPin1  8     // IN1 on ULN2003 ==> Blue   on 28BYJ-48
#define motorPin2  9     // IN2 on ULN2004 ==> Pink   on 28BYJ-48
#define motorPin3  10     // IN3 on ULN2003 ==> Yellow on 28BYJ-48
#define motorPin4  11    // IN4 on ULN2003 ==> Orange on 28BYJ-48
#define ledPin     12
#define switchPin  6 

double lastMillis = 0;
int INTERVAL = 500;
bool goingUp = 1;
float speed = 30;
int maxspeed = 1000;

AccelStepper stepper1(HALFSTEP, motorPin1, motorPin3, motorPin2, motorPin4);

void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin,INPUT_PULLUP);
  stepper1.setMaxSpeed(maxspeed);
  stepper1.setSpeed(speed);
}

void loop()
{
    if(!digitalRead(switchPin)){
      if(goingUp){
        speed += 0.01;
      }
      else{
        speed -= 0.01;
      }
    }
    if(speed>maxspeed){
      goingUp = false;
    }
    if (speed<30){
      goingUp = true;
    }
    stepper1.setSpeed(speed);
    stepper1.runSpeed();
    if((millis() -lastMillis) > INTERVAL){
      digitalWrite(ledPin,!digitalRead(ledPin));
      lastMillis = millis();
    }

}
