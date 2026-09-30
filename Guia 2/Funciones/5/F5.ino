void lanzar()
{
  Serial.println("escriba los lados del dado");

  while (Serial.available() == 0)
  {
  }

  int lados = Serial.parseInt();

  int resultado = random(1, lados + 1);
  
  Serial.println("resultado:");
  Serial.println(resultado);
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
  lanzar();
}