void ordenar(int numeros[], int cantidad)
{
  for (int i = 0; i < cantidad - 1; i++)
  {
    for (int j = i + 1; j < cantidad; j++)
    {
      if (numeros[i] < numeros[j])
      {
        int temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
      }
    }
  }
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int numeros[5];

  for (int i = 0; i < 5; i++)
  {
    Serial.print("Ingresa el valor para la posicion ");
    Serial.println(i);

    while (Serial.available() == 0)
    {
    }

    numeros[i] = Serial.parseInt();

    delay(10);
  }

  ordenar(numeros, 5);

  for (int i = 0; i < 5; i++)
  {
    Serial.println(numeros[i]);
  }
}
