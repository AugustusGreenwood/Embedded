void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  // val = digitalRead(2);
  if (digitalRead(2) == LOW) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
