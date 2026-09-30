void encender(int pines[], int cantidad)
{
  for (int i = 0; i < cantidad; i++)
  {
    digitalWrite(pines[i], HIGH);
  }
}

void setup()
{
  int pines[] = {2, 3, 4};
  int cantidad = sizeof(pines) / sizeof(pines[0]);

  for (int i = 0; i < cantidad; i++)
  {
    pinMode(pines[i], OUTPUT);
  }
}

void loop()
{
  int pines[] = {2, 3, 4};
  int cantidad = sizeof(pines) / sizeof(pines[0]);

  encender(pines, cantidad);
}
