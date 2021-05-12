void setup() {
  Serial.begin(9600);

  Serial.print("Start : ");
  Serial.println("Write data");

  Serial.println(78);
  Serial.println(1.2346);
  Serial.println('N');
  Serial.println("Hello World");

  Serial.println(78, BIN);
  Serial.println(78, OCT);
  Serial.println(78, DEC);
  Serial.println(78, HEX);

  Serial.println(1.12346, 0);
  Serial.println(1.12346, 2);
  Serial.println(1.12346, 4);
}

void loop() {
  // put your main code here, to run repeatedly:

}
