int i = 0;

void setup()
{
  for (i = 2; i <= 6; i++){
    pinMode(i, OUTPUT);
  }
  
}

void loop() {
  for (i = 2; i <= 6; i++){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  for (i = 5; i > 2; i--){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
}
