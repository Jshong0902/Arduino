byte LED[]={2, 3, 4, 5, 6, 7, 8, 9};
byte Cur_LED=0x00;

void setup() {
  for (int i=0 ; i< 8 ; i++ ){
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
  show_LED();
}
h
void loop() {
  if (Serial.available()){
    Cur_LED = Serial.parseInt();
    show_LED();
  }
  }
1
void show_LED(void){
  for (int i=0 ; i<8 ; i++)
    digitalWrite(LED[i], Cur_LED & (0x01<<i));
}
