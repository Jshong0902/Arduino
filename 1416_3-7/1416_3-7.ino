byte Pin[]={2,3,4,5,6,7,8,9};
byte Pin_num = sizeof(Pin) / sizeof(byte);

void setup() {
  for(int i=0; i<pin_num; i++)
    pinmode(Pin[i], OUTPUT);
}

void loop() {
  for(int i =0; i < 8; i++)
  {
    digitalWrite(Pin[i],HIGH);
    delay(500);
    digitalWrite(Pin[i],LOW);
  }

  for(int j=8; j>0; j--) {
    digitalWrite(Pin[i],HIGH);
    delay(500);
    digitalWrite(Pin[i],LOW);
  }
}
