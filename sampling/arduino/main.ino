void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello World"); // output: open up the serial monitor under "Tools"->"Serial Monitor"
  delay(1*1000);     // delay in ms
  Serial.println("\n");
  Serial.println("Spring comes fast this year");
  Serial.println("The Newly blossomed flowers");
  Serial.println("grows on those from last.");
  Serial.println("\n");
}