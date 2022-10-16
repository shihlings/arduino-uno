//symbolic names for I/O pins
unsigned const int A = 11;
unsigned const int B = 10;
unsigned const int C = 7;
unsigned const int D = 8;
unsigned const int E = 9;
unsigned const int F = 12;
unsigned const int G = 13;
unsigned const int H = 6;

//symbolic constants for predefined number displays
unsigned const int ZERO[] =   {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW };
unsigned const int ONE[] =    {LOW,  HIGH, HIGH, LOW,  LOW,  LOW,  LOW };
unsigned const int TWO[] =    {HIGH, HIGH, LOW,  HIGH, HIGH, LOW,  HIGH};
unsigned const int THREE[] =  {HIGH, HIGH, HIGH, HIGH, LOW,  LOW,  HIGH};
unsigned const int FOUR[] =   {LOW,  HIGH, HIGH, LOW,  LOW,  HIGH, HIGH};
unsigned const int FIVE[] =   {HIGH, LOW,  HIGH, HIGH, LOW,  HIGH, HIGH};
unsigned const int SIX[] =    {HIGH, LOW,  HIGH, HIGH, HIGH, HIGH, HIGH};
unsigned const int SEVEN[] =  {HIGH, HIGH, HIGH, LOW,  LOW,  LOW,  LOW };
unsigned const int EIGHT[] =  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
unsigned const int NINE[] =   {HIGH, HIGH, HIGH, LOW,  LOW,  HIGH, HIGH};
unsigned const int OFF[] =    {LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW };

//declare pins for 7 segment display, check actual connections
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

//display number according to array definition
void displayNum (unsigned const int numarr[7]) {
  digitalWrite(A, numarr[0]);
  digitalWrite(B, numarr[1]);
  digitalWrite(C, numarr[2]);
  digitalWrite(D, numarr[3]);
  digitalWrite(E, numarr[4]);
  digitalWrite(F, numarr[5]);
  digitalWrite(G, numarr[6]);  
}

void loop() {
  //displays 0-9, one number per second
  displayNum(ZERO);
  delay(1000);
  displayNum(ONE);
  delay(1000);
  displayNum(TWO);
  delay(1000);
  displayNum(THREE);
  delay(1000);
  displayNum(FOUR);
  delay(1000);
  displayNum(FIVE);
  delay(1000);
  displayNum(SIX);
  delay(1000);
  displayNum(SEVEN);
  delay(1000);
  displayNum(EIGHT);
  delay(1000);
  displayNum(NINE);
  delay(1000);
  
  //turns off the display and turns on the decimal display
  displayNum(OFF);
  digitalWrite(H, HIGH);

  //turns off the decimal display after 10 seconds
  delay(10000);
  digitalWrite(H, LOW);
}