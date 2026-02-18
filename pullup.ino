void setup() {
  // put your setup code here, to run once:
  DDRD = B11110000;
  PORTD = B11110100;
}

void loop() {
  // put your main code here, to run repeatedly:
  byte butState = PIND & B00000100;
  if(butState == 0) // PULL-UP
    PORTD = B11110000;
  else
    PORTD = B00000000;
}
