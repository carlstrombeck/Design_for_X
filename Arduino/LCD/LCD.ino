int startPin = 6; // choose the input pin (for a pushbutton)
int opPin = 7;

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    pinMode(startPin, INPUT);    // declare pushbutton as input
    pinMode(opPin, INPUT);
    
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
    // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
 lcd.print("Hej");
if(digitalRead(startPin)==HIGH){
  // Print a message to the LCD.
  lcd.setCursor(0, 1);
        lcd.print("3 SEKUNDER");
    delay(1000);
    lcd.clear();
      lcd.setCursor(0, 1);
        lcd.print("2 SEKUNDER");
    delay(1000);
    lcd.clear();
      lcd.setCursor(0, 1);
      lcd.print("1 SEKUND!!");
    delay(1000);
    lcd.clear();
    
    while(digitalRead(opPin)==LOW){
    
        lcd.setCursor(0, 0);
  lcd.print("HEJ DA!!!");
  lcd.setCursor(0, 1);
  lcd.print("hihi :) :)");
    }
   }
}
