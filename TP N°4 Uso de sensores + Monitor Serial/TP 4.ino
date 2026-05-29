#define TMP A1
#define FTR A0
#define LED_R 11
#define LED_B 10
#define LED_G 9


void setup()
{
  Serial.begin(9600);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
}

void loop()
{
  bool prendido = false;
  
  int lec_temp = analogRead(TMP);
  int lec_luz = analogRead(FTR);
  
  int fot = map(lec_luz, 1, 310, 100, 0);
  int temp = map(lec_temp, 20, 358, -40, 125);
 
  
  if (fot > 30 && fot <70)
  {
    prendido = true;
  }
    

  Serial.print("El nivel de luz actual es: ");
  Serial.println(fot);
  Serial.print("La temperatura actual es: ");
  Serial.print(temp);
  Serial.write(176); //mapa de caracteres de windows. tabla ascci era 167 y no funcionaba
  Serial.println("c");
  Serial.println(" ");
  
  
  if (prendido)  
  {
  
 	if (temp > 90)
 	{
    digitalWrite(LED_R, HIGH);
  	}
  	else if (temp < 18)
  	{
  	  digitalWrite(LED_B, HIGH);
  	}
  	else
  	{
  	  digitalWrite(LED_G, HIGH);
  	}
  	delay(500);
  	digitalWrite(LED_R, LOW);
  	digitalWrite(LED_G, LOW);
  	digitalWrite(LED_B, LOW);
  }
  
}