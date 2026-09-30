
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int numeros[] = {10, 4, 2};
  int cantidad = sizeof(numeros) / sizeof(numeros[0]);

  for(int i = 0; i < cantidad - 1; i++)
  {
    for(int j = 0; j < cantidad - 1 - i; j++)
    {
      if(numeros[j] > numeros[j + 1])
      {
        int temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
      }
    }
  }

  for(int i = 0; i < cantidad; i++)
  {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}
