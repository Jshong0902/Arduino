byte pin[] = {9, 10, 11, 12};
byte pin_num = sizeof(pin) / sizeof(byte);

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<4; i++)
  {
    pinMode(i, OUPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0; i<16; i++)
  {
    digitalWrite(12,i%2);
    digitalWrite(11,(i>>1)%2);
    digitalWrite(10,(i>>2)%2);
    digitalWrite(9,(i>>3)%2);
    delay(100)
  }
}
