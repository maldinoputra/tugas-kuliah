int led1 =13;
int button = 2; 
bool ledHidup = false; 

void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(button, INPUT_PULLUP);
}

void loop() {
  int kondisi = digitalRead(button);

  if(kondisi==LOW){
    delay(50);
    ledHidup = ! ledHidup;
    digitalWrite(led1, ledHidup);
  }
}
  
