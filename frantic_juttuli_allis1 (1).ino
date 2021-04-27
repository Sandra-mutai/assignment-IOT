#include <Servo.h>
int Red=2;
int Green=3;
int Blue=4;

Servo myservo;
int potpin = 0;
int val;
 
void setup() 
{
 
 pinMode(Red, OUTPUT);
 pinMode(Green, OUTPUT);
 pinMode(Blue,OUTPUT);
 myservo.attach(9);
   
}
 
void loop() {
val=analogRead(potpin);
val =map (val,0,1023,0,180);
myservo.write(val);


 
digitalWrite (Red,HIGH);
delay (1000);
digitalWrite (Red,LOW);

digitalWrite (Green,HIGH);
delay (1000);
digitalWrite (Green,LOW);

digitalWrite (Blue,HIGH);
delay (1000);
digitalWrite (Blue,LOW);

for (val =0; val <60; val +=1)
{
  myservo.write(val);
  delay(15);
}

for (val =0; val <120; val +=1)
{
  myservo.write(val);
  delay(15);
}


for (val =0; val <180; val +=1)
{
  myservo.write(val);
  delay(15);
}
}


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  