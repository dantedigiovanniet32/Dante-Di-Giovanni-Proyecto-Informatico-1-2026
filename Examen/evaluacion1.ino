#include <Adafruit_NeoPixel.h>

#include <LiquidCrystal.h>


#define monitor


#define BTN 2
#define FTR A0
#define LED 11


#define NEOPIN 11
#define CANT_PIXEL 6


Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);




LiquidCrystal lcd(5, 6, 7, 8, 9, 10);




void setup()
{
  
  Serial.begin( 9600 );
  lcd.begin(16, 2);

  
  pinMode(BTN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  
  
  RING.begin();
  RING.clear();
  RING.show();
  

  
}






void loop()
{
  
  
  
  int paso = digitalRead(BTN);
  int estaPrendido = !paso;
  
  
  if (estaPrendido)
  {
  
    
    
    
    
    
    
    
  int lecturaLuz = analogRead(FTR);
    
  
  int luz = map( lecturaLuz, 1, 310, 0, 100);
  
  int color = 0;
  
  
    
    
  if (luz > 0 && luz < 30) 
  {
    
    
    
    RING.setPixelColor(0, (0, 255, 0));
    RING.setPixelColor(1, (0, 255, 0));
    
    color = 1;
    
    
  }
  else if (luz > 30 && luz < 70) 
  { 
    
    
    
    
    RING.setPixelColor(2, (255, 255, 0));
    RING.setPixelColor(3, (255, 255, 0));
    
    color = 2;
  
  
  
  }
  else if (luz > 70) 
  { 
    
    
    
    
    RING.setPixelColor(4, (255, 0, 0));
    RING.setPixelColor(5, (255, 0, 0));
  
  	color = 3;
  
  }
    

    
   
    

    
    

  
  
  
  #ifdef monitor
  
  
  
  
  Serial.print("Sensor: ");
  Serial.print(luz);
  Serial.println("%");
  
  Serial.print("N");
  Serial.write(176);
  Serial.print(" Led: ");
  Serial.println(CANT_PIXEL);
  
  Serial.print("Color: ");
  Serial.println(color);
  
  
  
  
  #endif
  
  
  
  
  
  
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Sensor: ");
  lcd.print(luz);
  lcd.print("% ");
  
  lcd.setCursor(0, 1);
  if (estaPrendido == LOW)
  {
    lcd.print("Prendido");
  }
  else
  {
  	lcd.print("Apagado");
  }
  
  };
  
  
  
}