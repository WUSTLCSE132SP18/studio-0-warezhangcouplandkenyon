
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  double time = millis();
  delay(1000);
  digitalWrite(13, HIGH);
  Serial.print (time/1000);
  Serial.println(" seconds have elapsed");
   time = millis();
  delay(1000);
  digitalWrite(13, LOW);
  Serial.print (time/1000);
  Serial.println(" seconds have elapsed");
  
}
