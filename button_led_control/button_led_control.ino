//Define LED Pins
  #define LOSE_LED    8
  #define WIN_LED     9
  #define GREEN_LED   10
  #define YELLOW_LED  11
  #define RED_LED     12
  #define WHITE_LED   13     

//Define BUTTON Pins
  #define GREEN_BUTTON  4
  #define YELLOW_BUTTON 5
  #define RED_BUTTON    6
  #define WHITE_BUTTON  7 

//setup pins for each digital device
void setup() {
  pinMode(LOSE_LED, OUTPUT);
  pinMode(WIN_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(WHITE_LED, OUTPUT);
  
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(YELLOW_BUTTON, INPUT);
  pinMode(RED_BUTTON, INPUT);
  pinMode(WHITE_BUTTON, INPUT);
}

void loop() {
  int green = digitalRead(GREEN_BUTTON);
  int yellow = digitalRead(YELLOW_BUTTON);
  int red = digitalRead(RED_BUTTON);
  int white = digitalRead(WHITE_BUTTON);
  int win = HIGH;
  int lose = HIGH;

  digitalWrite(GREEN_LED, green);
  digitalWrite(YELLOW_LED, yellow);
  digitalWrite(RED_LED, red);
  digitalWrite(WHITE_LED, white);
  digitalWrite(WIN_LED, win);
  digitalWrite(LOSE_LED, lose);
}
