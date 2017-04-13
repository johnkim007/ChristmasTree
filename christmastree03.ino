void setup() {
  for (int i=7; i<12; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int brightness = analogRead(A0);
  int numberOn = 5 - int(brightness / 200);


  Serial.println(numberOn);
  delay(100);
}
