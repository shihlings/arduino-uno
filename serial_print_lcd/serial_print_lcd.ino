#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char receive[33] = {'\n'}; //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);

  lcd.begin(16,2); 
}

void loop() {
  int abort = 0;
  Serial.readBytes(receive,33);
  lcd.clear();
  lcd.setCursor(0,0);

  for (int index = 0; index < 33 && abort == 0; ++index) {
    if (receive[index] == '\n') {
      abort = index;
    }
  }

  for (int index = 0; index < abort; ++index){
    if (index == 16) {
      Serial.print("\n");
      lcd.setCursor(0, 1);
    }
    lcd.print(receive[index]);
    Serial.print(receive[index]);
  }
  Serial.print("\n");
}
