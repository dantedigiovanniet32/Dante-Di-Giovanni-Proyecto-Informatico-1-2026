#define rojo 11
#define verde 10
#define azul 9

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
  int rojos[] = {122, 234, 21};
  int verdes[] = {33, 53, 155};
  int azules[] = {200, 255, 12};
  int cantidad = sizeof(rojos) / sizeof(rojos[0]);

  for (int i = 0; i < cantidad; i++)
  {
    analogWrite(rojo, rojos[i]);
    analogWrite(verde, verdes[i]);
    analogWrite(azul, azules[i]);
    delay(500);
  }
}
