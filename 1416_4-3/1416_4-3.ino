byte LED[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
byte Cur_LED = 0x00;
int i[9]={2, 2, 2, 2, 2, 2, 2, 2, 2};

void setup() {
  for (int i = 0 ; i < 9 ; i++ ) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    Cur_LED = Serial.parseInt();
    switch (Cur_LED) {
      case '1':
        if (i[0] % 2 == 0) {
          digitalWrite(LED[0], HIGH);
          i[0] = i[0] + 1;
        }
        else {
          digitalWrite(LED[0], LOW);
          i[0] = i[0] + 1;
        }
        break;
      case '2':
        if (i[1] % 2 == 0) {
          digitalWrite(LED[1], HIGH);
          i[1] = i[1] + 1;
        }
        else {
          digitalWrite(LED[1], LOW);
          i[1] = i[1] + 1;
        }
        break;
      case '3':
        if (i[2] % 2 == 0) {
          digitalWrite(LED[2], HIGH);
          i[2] = i[2] + 1;
        }
        else {
          digitalWrite(LED[2], LOW);
          i[2] = i[2] + 1;
        }
        break;
      case '4':
        if (i[3] % 2 == 0) {
          digitalWrite(LED[3], HIGH);
          i[3] = i[3] + 1;
        }
        else {
          digitalWrite(LED[3], LOW);
          i[3] = i[3] + 1;
        }
        break;
      case '5':
        if (i[4] % 2 == 0) {
          digitalWrite(LED[4], HIGH);
          i[4] = i[4] + 1;
        }
        else {
          digitalWrite(LED[4], LOW);
          i[4] = i[4] + 1;
        }
        break;
      case '6':
        if (i[5] % 2 == 0) {
          digitalWrite(LED[5], HIGH);
          i[5] = i[5] + 1;
        }
        else {
          digitalWrite(LED[5], LOW);
          i[5] = i[5] + 1;
        }
        break;
      case '7':
        if (i[6] % 2 == 0) {
          digitalWrite(LED[6], HIGH);
          i[6] = i[6] + 1;
        }
        else {
          digitalWrite(LED[6], LOW);
          i[6] = i[6] + 1;
        }
        break;
      case '8':
        if (i[7] %2== 0) {
          digitalWrite(LED[7], HIGH);
          i[7] = i[7] + 1;
        }
        else {
          digitalWrite(LED[2], LOW);
          i[7] = i[7] + 1;
        }
        break;
      case '9':
        if (i[8] %2== 0) {
          digitalWrite(LED[8], HIGH);
          i[8] = i[8] + 1;
        }
        else {
          digitalWrite(LED[8], LOW);
          i[8] = i[8] + 1;
        }
        break;
    }
  }
}
