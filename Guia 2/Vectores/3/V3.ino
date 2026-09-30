
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float notas[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
  int cantidad = sizeof(notas) / sizeof(notas[0]);
  float mayor = 0;

  for(int i = 0; i < cantidad; i++)
  {
    if(notas[i] > mayor)
    {
      mayor = notas[i];
    }
  }

  Serial.print(mayor);
  Serial.println();
}
