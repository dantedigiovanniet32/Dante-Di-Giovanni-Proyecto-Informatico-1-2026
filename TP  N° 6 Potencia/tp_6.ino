

#define EN 3
#define E_1 4
#define E_2 5

#define NMOS 6
#define PIR 2
#define TMP A0



void setup()
{
  pinMode(EN, OUTPUT);
  pinMode(E_1, OUTPUT);
  pinMode(E_2, OUTPUT);
  
  pinMode(NMOS, OUTPUT);
  pinMode(PIR, INPUT);
  
  
  digitalWrite(E_1, HIGH);
  digitalWrite(E_2, LOW);
}



void loop()
{
  
  
  //porque el map no devuelve con coma
  
  float paso = analogRead(TMP) * (5.0 / 1023.0);
  float temperatura = (paso - 0.5) * 100.0;
 
  
  
  int movimiento = digitalRead(PIR);
  
  int velocidad = 0;

  
  
    if (movimiento == HIGH && temperatura < 50) 
    {
    digitalWrite(NMOS, HIGH);
    }


  
  
  if (temperatura >= 50.0) 
  {
    velocidad = 255;
  } 
  
  
  else if (movimiento == HIGH) 
  {
    
    if (temperatura <= 15.0) 
    {
      velocidad = 50;
    }
    else if (temperatura >= 30.0)
    {
      velocidad = 150;
    }
    else 
    {
      velocidad = 50;
    }
    
  }
  

  analogWrite(EN, velocidad);
  
  
  delay(100);



  
}


