
void setup() {
  for(int i=7; i<12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i=7; i<12; i++){
    digitalWrite(i, HIGH);
    delay(500);
  }

  for(int i=7; i<12; i++){
    digitalWrite(i, LOW);
  }
  delay(500);
}
