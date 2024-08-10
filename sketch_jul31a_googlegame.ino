#include <Servo.h>

int servoPos = 0;
int servoPos1 = 50;
int servoPin = 10;
Servo myServo;

int photoPin = A3;
int V;
int time = 70;



void setup() {
  // put your setup code here, to run once:
pinMode(servoPin,OUTPUT);
myServo.attach(servoPin);
pinMode(photoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
V = analogRead(photoPin);

if(V<500){
  myServo.write(servoPos1);
}else{
  myServo.write(servoPos);
}
Serial.println(V);
delay(time);
}
 