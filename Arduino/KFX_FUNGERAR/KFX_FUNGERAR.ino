
int goPin = 5;
int startPin = 2; // choose the input pin (for a pushbutton)
int start = 0;     // variable for reading the pin status     
int hswitch1 = 6;
int vswitch1 = 7;
int hswitch2 = 8;
int vswitch2 = 9;
int vswitch3 = 10;
int hs1 = 0;
int hs2 = 0;
int vs1 = 0;
int vs2 = 0;
int vs3 = 0;
 
#include <Servo.h> // variable to store the servo position
Servo servo1; //horizontala motorn
Servo servo2; //vertikala motorn


void setup() {
  servo1.attach(3); //connectar den horizontala till 3an
  servo2.attach(4); //connectar den vertikal till 4an
//pinMode(goPin, OUTPUT);  // declare servo as output
  pinMode(startPin, INPUT);    // declare pushbutton as input
  pinMode(hswitch1, INPUT);   //declare hotizontal switch 1
  pinMode(hswitch2, INPUT);
  pinMode(vswitch1, INPUT); 
  pinMode(vswitch2, INPUT);
  pinMode(vswitch3, INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
    servo1.write(92); // horizontala motorn börjar snurra
    servo2.write(90); // vertikala står still
    digitalWrite(goPin, HIGH);

    if(digitalRead(startPin)==HIGH){
      digitalWrite(goPin, LOW);
    while(digitalRead(hswitch1) == LOW){
    servo1.write(79); // horizontala motorn börjar snurra
    servo2.write(90); // vertikala står still
      }
    while(digitalRead(vswitch1) == LOW){
      servo1.write(92);   //horizontala motorn stannar
      servo2.write(110);   //vertikala motorn börjar köra ner
    }
    while(digitalRead(hswitch2) == LOW){
      servo1.write(103);  //horizontala motorn kör åt andra hållet nu
      servo2.write(90); //vertikala motorn stannar
    }
    while(digitalRead(vswitch2) == LOW){
      servo1.write(92);
      servo2.write(110);
    }
    while(digitalRead(hswitch1) == LOW){
      servo1.write(79);
      servo2.write(90);
    }
    while(digitalRead(hswitch2)==LOW){
    servo1.write(103);
    servo2.write(90);
    }
    while(digitalRead(vswitch3)==LOW){
      servo1.write(92);
      servo2.write(60);
    }
  }
}  

