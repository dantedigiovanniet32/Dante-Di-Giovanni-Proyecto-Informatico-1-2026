#define pin1 2
#define pin2 3
#define pin3 4
#define pin4 5

void configurar(int pines[], int modo[], int cantidad)
{
  for (int i = 0; i < cantidad; i++)
  {
    pinMode(pines[i], modo[i]);
  }
}

void setup()
{
  int pines[] = {pin1, pin2, pin3, pin4};
  int modo[] = {OUTPUT, INPUT, OUTPUT, INPUT};
  int cantidad = sizeof(pines) / sizeof(pines[0]);

  configurar(pines, modo, cantidad);
}

void loop()
{
}
