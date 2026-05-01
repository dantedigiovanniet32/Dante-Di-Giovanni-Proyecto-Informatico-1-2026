int regladetres ;

void setup() {
  pinMode(7, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(3, OUTPUT);  
  pinMode(2, OUTPUT); 
}

void loop() {
  regladetres = map(analogRead(A0), 0, 1023, 100, 1000);

  digitalWrite(7, HIGH); digitalWrite(6, HIGH); 
  digitalWrite(2, HIGH); digitalWrite(3, HIGH);  
  delay(regladetres);

  
  digitalWrite(7, LOW); digitalWrite(6, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW);
  delay(regladetres);
}
