void llenar(int numeros[], int cantidad)
{
  for (int i = 0; i < cantidad; i++)
  {
    numeros[i] = random(0, 11) * 10;
  }
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
  int numeros[5];

  llenar(numeros, 5);

  for (int i = 0; i < 5; i++)
  {
    Serial.println(numeros[i]);
  }

  delay(10000);
}
