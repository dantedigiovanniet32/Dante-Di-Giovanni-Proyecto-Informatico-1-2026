#define trig 11
#define eco 10

float distancia()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long tiempo = pulseIn(eco, HIGH, 30000);
  if (tiempo == 0)
  {
    return 0.00;
  }
  return tiempo * 0.0343 / 2;
}

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Serial.print(distancia());
  Serial.println(" cm");
  delay(500);
}
