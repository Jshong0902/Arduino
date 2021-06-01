#include <Servo.h>

#define L_BUTTON 3
#define R_BUTTON 2

Servo myservo;
int pos = 0;

void setup(){
pinMode(L_BUTTON,INPUT);
pinMode(R_BUTTON,INPUT);
myservo.attach(9);
}
void loop(){

  if(digitalRead(L_BUTTON) == HIGH){
    myservo.write(90);
  }
  if(digitalRead(R_BUTTON) == HIGH){
    myservo.write(0);
  }
}
