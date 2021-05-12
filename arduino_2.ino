void setup() {
  pinMode(A5,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int temperatura = -40 + 0.488155 * (analogRead(A5) -  20); //medir la T° n grados C°
  Serial.print("LA TEMPERATURA ES ");
  Serial.print(temperatura);
   Serial.println(" GRADOS.");
delay(1000);

}
