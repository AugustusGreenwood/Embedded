//volatile uint8_t *ddrb = 0x24; // Address of data direction register for port e
//volatile uint8_t *portb = 0x25; // Address of porte
 
void setup() {
  // put your setup code here, to run once:
  //*ddrb = 1 << 7; // dereference address and set pin 2 (D2|PE4) to write
  pinMode(2, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  *portb = 1 << 7;
  // digitalWrite(2, HIGH);
  delay(1000);
  //*portb = 0;
  digitalWrite(2, LOW);
  delay(1000);
}
