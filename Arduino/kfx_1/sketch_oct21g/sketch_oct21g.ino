#include <Servo.h>

Servo myservo;  // create servo object to control a servo 
               // a maximum of eight servo objects can be created 

int pos = 0;    // variable to store the servo position 
int button = 2;  // The button will be on Pin 2 


void setup() 
{ 
 myservo.attach(4);  // attaches the servo on pin 9 to the servo object
pinMode(pos, OUTPUT);
pinMode(button, INPUT); 
digitalWrite (button, LOW);
} 

void loop() 
{ 
 
   if (digitalRead(button) == LOW)

 myservo.write(90);
 if (digitalRead(button) == HIGH) 
 
myservo.write(85);
 }
