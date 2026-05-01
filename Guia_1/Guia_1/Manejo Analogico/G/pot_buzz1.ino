int ponten = A0 ;
int buzzer = 2 ;
int valor ;
int sonido ;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
 
  valor = analogRead(ponten);
  sonido = map(valor, 0, 1023, 0, 255);
  tone(buzzer, sonido);

}
