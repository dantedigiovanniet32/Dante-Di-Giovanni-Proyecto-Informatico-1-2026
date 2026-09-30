void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int suma = 0;
  int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int cantidad = sizeof(numeros) / sizeof(numeros[0]);

  for(int i = 0; i < cantidad; i++)
  {
    suma = suma + numeros[i];
  }

  float media = (float)suma / cantidad;
  Serial.println(media);
}
