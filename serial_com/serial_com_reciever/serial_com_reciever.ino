char recieve[1]; //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.readBytes(recieve,1); //Read the serial data and store in var
  Serial.println(recieve); //Print data on Serial Monitor
  delay(1000);
}
