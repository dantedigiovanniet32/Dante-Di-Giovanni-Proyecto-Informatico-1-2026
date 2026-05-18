#define LED_R 11
#define LED_B 10
#define LED_G 9
#define POT A0
#define POT_R A1
#define POT_G A2
#define POT_B A3
#define BTN 2
#define BUZZ 3

bool EstaEncendido = false;
bool ultimoEstadoBtn = HIGH;

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
  Serial.begin( 9600 );
}

void loop() {

  bool boton = digitalRead(BTN);
  if (boton == LOW && ultimoEstadoBtn == HIGH) {
    EstaEncendido = !EstaEncendido;
    delay(50);
  }
  
  ultimoEstadoBtn = boton;

  
  if (EstaEncendido) {

    int valorR = map(analogRead(POT_R), 0, 1023, 0, 255);
    int valorG = map(analogRead(POT_G), 0, 1023, 0, 255);
    int valorB = map(analogRead(POT_B), 0, 1023, 0, 255);
    
    float tiempo = analogRead(POT);
    float segundos = (tiempo * 3.0) / 1023.0;

    Serial.print("Tiempo: "); 
    Serial.println(segundos);
    Serial.print(" R: "); 
    Serial.print(valorR);
    Serial.print(" G: "); 
    Serial.print(valorG);
    Serial.print(" B: "); 
    Serial.println(valorB);

    analogWrite(LED_R, valorR);
    analogWrite(LED_G, valorG);
    analogWrite(LED_B, valorB);

    digitalWrite(BUZZ, HIGH);
    delay(100);
    digitalWrite(BUZZ, LOW);

    delay(segundos * 1000);

    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
    delay(100);
  } 
  
  else 
  {
    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
    digitalWrite(BUZZ, LOW);
  }
}
