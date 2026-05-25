#include <LiquidCrystal.h>

#define TMP A0
#define LED_G 11
#define LED_B 10
#define LED_R 6
#define BUZZ A1
#define FTO A4
#define ECO 12
#define DESC 13
#define PIR 9

LiquidCrystal lcd(2, 3, 4, 5, 8, 7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);

  pinMode(DESC, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(PIR, INPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(BUZZ, OUTPUT);

}

void loop() {

  float temperatura = map(analogRead(TMP), 0, 1023, -50, 125);

  int lecLuz = analogRead(FTO);
  int luzPorcentaje = map(lecLuz, 0, 1023, 0, 100);
  bool esDeNoche = (luzPorcentaje < 20);

  bool movimiento = digitalRead(PIR);

  digitalWrite(DESC, LOW);
  delayMicroseconds(2);
  digitalWrite(DESC, HIGH);
  delayMicroseconds(10);
  digitalWrite(DESC, LOW);
  float duracion = pulseIn(ECO, HIGH);
  float distancia = duracion * 0.034 / 2.0;

  
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperatura, 1);
  
  lcd.print(" Dis:");
  lcd.print((int)distancia);
  lcd.print("cm");
  
  lcd.setCursor(0, 1);
  lcd.print("Luz:");
  lcd.print(luzPorcentaje);
  lcd.print("% ");
  
  
  
  
  if (esDeNoche) 
  {
    lcd.print("NOCHE");
  } 
  else 
  {
    lcd.print("DIA");
  }
  

  if (temperatura > 39.0) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(300);
    digitalWrite(BUZZ, LOW);
    Serial.println("Temperatura ALTA!!!");

  } else if (esDeNoche && movimiento) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    Serial.println("ALERTA de movimiento!!");

  } 
  else if (!esDeNoche && distancia < 100.0) 
  {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(150);
    digitalWrite(BUZZ, LOW);
    delay(100);
    digitalWrite(BUZZ, HIGH);
    delay(150);
    digitalWrite(BUZZ, LOW);
    Serial.println("ALERTA de proximidad!!!");

  } 
  else 
  {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
    digitalWrite(BUZZ, LOW);
  }
  

  Serial.print("Temperatura (C): ");
  Serial.println(temperatura, 1);
 
  
  Serial.print("Distancia (cm): ");
  Serial.println(distancia, 1);
  
  Serial.print("Luz: ");
  Serial.print(luzPorcentaje);
  Serial.println(" %");
  
  Serial.print("Hay movimiento: ");
  if (movimiento) 
  {
  Serial.println("SI");
} 
  else 
  {
  Serial.println("NO");
}
  Serial.println(" ");
  

  delay(500);
}