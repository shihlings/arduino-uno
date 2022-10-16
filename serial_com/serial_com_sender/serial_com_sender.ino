char x[1] = "0";

void setup() {
// Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.write(x, 1);
  x[0]++;
  if (x[0] - '0' > 9){
    x[0] = '0';
  }
  delay(1000);
}