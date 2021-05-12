#define LED 7
#define INTERRUPOR 8

void setup() {

  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  if (digitalRead(8) == HIGH) {

    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }
else {
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
}
  
}
  
}
