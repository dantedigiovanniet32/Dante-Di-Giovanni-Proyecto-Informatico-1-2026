void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int numeros[] = {2, 6, 10, 11};
  int cantidad = sizeof(numeros) / sizeof(numeros[0]);

  for(int i = 0; i < cantidad; i++)
  {
    for(int j = 1; j < 6; j++)
    {
      int multiplo = numeros[i] * j;
      Serial.println(multiplo);
    }
  }
}
