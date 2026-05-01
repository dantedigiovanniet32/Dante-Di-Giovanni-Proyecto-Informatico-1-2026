int ponten_R = A0;
int ponten_B = A1;
int ponten_G = A2;

int led_R = 5;
int led_B = 4;
int led_G = 3;

int valor1 ;
int valor2 ;
int valor3 ;

int luzR ;
int luzG ;
int luzB ;

void setup() {
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
}

void loop() {
  valor1 = analogRead(ponten_R);
  valor2 = analogRead(ponten_B);
  valor3 = analogRead(ponten_G);

  luzR = map(valor1, 0, 1023, 0, 255);
  luzB = map(valor2, 0, 1023, 0, 255);
  luzG = map(valor3, 0, 1023, 0, 255);

  analogWrite(led_R, luzR);
  analogWrite(led_B, luzB);
  analogWrite(led_G, luzG);
}
