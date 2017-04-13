
void setup() {
  for (int i=7; i<12; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int brightness = analogRead(A0);
  int numberOn = 5 - int(brightness / 200);

  if(numberOn == 0){  // numberOn이 0인경우는 무조건 꺼짐 
    for(int i=7; i<12; i++){
      digitalWrite(i, LOW);
    }
  } else {  
    for(int i=7; i<7+numberOn; i++){ 
      digitalWrite(i, HIGH);
    }
    for(int i=7+numberOn; i<12; i++){
      digitalWrite(i, LOW);
    }
  }

  Serial.println(numberOn);
  delay(100);
}
