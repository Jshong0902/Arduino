void setup() {
  Serial.begin(9600);
}

void loop() {
  char ch;
  if(Serial.available())
  {
    Serial.write(Serial.read());
  }

}
