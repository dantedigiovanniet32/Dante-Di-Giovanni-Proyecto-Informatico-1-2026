#include <LiquidCrystal.h>

#define lcdRs 12
#define lcdEn 11
#define lcdD4 10
#define lcdD5 9
#define lcdD6 8
#define lcdD7 7

LiquidCrystal lcd(lcdRs, lcdEn, lcdD4, lcdD5, lcdD6, lcdD7);

void bienvenida()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido");
  delay(1000);
}

void inicio()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("el juego...");
  delay(1000);
}

void puntaje()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hiciste: ");
  
  int puntos = random(0, 101);
  
  lcd.setCursor(9, 0);
  lcd.print(puntos);
  
  lcd.setCursor(0, 1);
  lcd.print("puntos");
  delay(1000);
}

void fin()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin");
  lcd.setCursor(0, 1);
  lcd.print("del juego.");
  delay(1000);
}

void setup()
{
  randomSeed(analogRead(A0));
  
  Serial.begin(9600);

  lcd.begin(16, 2);
}

void loop()
{
  
  bienvenida();
  delay(1000);
  lcd.clear();
  
  inicio();
  delay(1000);
  lcd.clear();
  
  puntaje();
  delay(1000);
  lcd.clear();
  
  fin();
  delay(1000);
  lcd.clear();
}