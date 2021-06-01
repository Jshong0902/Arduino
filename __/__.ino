void setup() {
  int a, b;
  for (a=9 ; a>=2 ; a--){
    pinMode(a, OUTPUT);
  }

}

void loop() {
  for(int i=2 ; i<=9 ; i++){
    for (int j=2 ; j<=9 ; j++){
      if (i==j)
        digitalWrite(j, HIGH);
      else
        digitalWrite(j, LOW);
    }
    delay(1000);
  }
}
