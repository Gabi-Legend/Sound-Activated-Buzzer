int buzzer = 7;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A5);
  Serial.println(value);

  if(value > 250){
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(50);
}
