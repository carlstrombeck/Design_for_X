
int goPin = 5;
int goPin2= 12;
int goPin3= 13;
int startPin = 2; // choose the input pin (for a pushbutton)
int start = 0;     // variable for reading the pin status     
int hswitch1 = 6;
int vswitch1 = 7;
int hswitch2 = 8;
int vswitch2 = 9;
int vswitch3 = 10;
int hswitch3 = 11;
 
#include <Servo.h> // variable to store the servo position
Servo servo1; //horizontala motorn
Servo servo2; //vertikala motorn


void setup() {
  servo1.attach(3); //connectar den horizontala till 3an
  servo2.attach(4); //connectar den vertikal till 4an
  pinMode(goPin, OUTPUT);  // declare servo as output
  pinMode(goPin2, OUTPUT);  // declare servo as output
  pinMode(goPin3, OUTPUT);
  pinMode(startPin, INPUT);    // declare pushbutton as input
  pinMode(hswitch1, INPUT);   //declare hotizontal switch 1
  pinMode(hswitch2, INPUT);
  pinMode(hswitch3, INPUT);
  pinMode(vswitch1, INPUT); 
  pinMode(vswitch2, INPUT);
  pinMode(vswitch3, INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
    servo1.write(91); // horizontala motorn börjar snurra
    servo2.write(90); // vertikala står still
    digitalWrite(goPin, HIGH);
    digitalWrite(goPin2, LOW);
    digitalWrite(goPin3, LOW);

    if(digitalRead(startPin)==HIGH){
      digitalWrite(goPin, LOW);
      digitalWrite(goPin3, HIGH);
      delay(3000);
      digitalWrite(goPin3, LOW);
      digitalWrite(goPin2, HIGH);
       while(digitalRead(hswitch2) == LOW){
    servo1.write(100); // horizontala motorn börjar snurra
    servo2.write(90); // vertikala står still
      }
    while(digitalRead(hswitch1) == LOW){
    servo1.write(82); // horizontala motorn börjar snurra
    servo2.write(90); // vertikala står still
      }
    while(digitalRead(vswitch1) == LOW){
      servo1.write(91);   //horizontala motorn stannar
      servo2.write(110);   //vertikala motorn börjar köra ner
    }
    while(digitalRead(hswitch2) == LOW){
      servo1.write(100);  //horizontala motorn kör åt andra hållet nu
      servo2.write(90); //vertikala motorn stannar
    }
    while(digitalRead(vswitch2) == LOW){
      servo1.write(91);
      servo2.write(110);
    }
    while(digitalRead(hswitch1) == LOW){
      servo1.write(82);
      servo2.write(90);
    }
    while(digitalRead(hswitch3)==LOW){
    servo1.write(100);
    servo2.write(90);
    }
    while(digitalRead(vswitch3)==LOW){
      servo1.write(91);
      servo2.write(50);
    }
  }
}  

