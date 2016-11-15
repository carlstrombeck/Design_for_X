int startPin = 2; // choose the input pin (for a pushbutton)
int start = 0;     // variable for reading the pin status     
int hswitch1 = 6;
int hs1 = 0;
 
#include <Servo.h> // variable to store the servo position
Servo servo1; //horizontala motorn
Servo servo2; //vertikala motorn

void setup() {
  servo1.attach(3); //connectar den horizontala till 3an
  servo2.attach(4); //connectar den vertikal till 4an

  pinMode(startPin, INPUT);    // declare pushbutton as input
  pinMode(hswitch1, INPUT);   //declare hotizontal switch 1
 }

void loop() {
  // put your main code here, to run repeatedly:
  start = digitalRead(startPin);  // read input value
  hs1 = digitalRead(hswitch1);
  
 
  while (start==HIGH) {
    servo1.write(92);
    //servo2.write(90);
  }
  }
