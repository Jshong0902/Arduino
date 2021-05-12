void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    int sowon = Serial.parseInt();
    Serial.println(sowon);
    if (sowon == 1)
      digitalWrite(12, HIGH);
    if (sowon == 0)
      digitalWrite(12, LOW);
  }
} 
