void multiplos()
{
  int numero = 0;
  int divisor = 0;
  Serial.println("escriba un numero");
  
  while (Serial.available() == 0)
  {
  }
  
  numero = Serial.parseInt();
  
  delay(10);
  
  if(numero > 0)
  {
    Serial.println("escriba un segundo numero");
  
    while (Serial.available() == 0)
    {
    }
    
    divisor = Serial.parseInt();
    
    delay(10);
  }
  
  if(divisor == 0)
  {
    Serial.println("el divisor no puede ser cero");
  }
  else if(numero % divisor == 0)
  {
    Serial.println("el numero:");
    Serial.println(numero);
    Serial.println("es multiplo de");
    Serial.println(divisor);
  }
  else
  {
    Serial.println("no son numeros multiplos");
  }
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  multiplos();
}
