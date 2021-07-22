void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop(){
  delay(5000);
  int valorLido = analogRead(A0);
  float temperatura = map(valorLido, 0, 350, 0, 150);
  Serial.println("Valor Lido: " + (String)valorLido);
  Serial.println("Temperatura: " + (String)temperatura);
}