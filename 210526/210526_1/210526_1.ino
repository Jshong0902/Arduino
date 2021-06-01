void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    float a = Serial.parseFloat();
    Serial.println(a);.
  }
}
