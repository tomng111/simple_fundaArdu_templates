void setup() {
  // put your setup code here, to run once:
  DDRD = B11110000;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD = B11110000;
  delay(1000);
  PORTD = B00000000;
  delay(1000);
}
