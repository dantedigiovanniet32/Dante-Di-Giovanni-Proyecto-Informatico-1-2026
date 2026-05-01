int LED_R = 7 ;
int ponten_R = A0;
int regladetres ;
int valor ;
void setup(){
  pinMode(LED_R, OUTPUT);
}

void loop() {
  valor = analogRead(ponten_R);
  regladetres = map(valor, 0, 1023, 100, 10000);

  analogWrite(LED_R, 255); 
  delay(regladetres);
  analogWrite(LED_R, 0);
  delay(regladetres);
}