byte Cur_LED;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  digitalWrite(12,LOW);
}

void loop() {
  if (Serial.available()) {
    int i=Serial.parseInt();
    Serial.println(i);
    if (i==1){
      Cur_LED = Cur_LED ^ 1;
      digitalWrite(12, Cur_LED);
    }
  }

}
