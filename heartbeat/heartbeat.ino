
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  double time = millis();
  delay(1000);
  //time = time + 1;
  Serial.print (time/1000);
  Serial.println(" seconds have elapsed");
}
