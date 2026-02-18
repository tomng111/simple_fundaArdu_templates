int i;
int led[] = {8, 9, 10};
void setup() {
  // put your setup code here, to run once:
  for(i=0; i<3; i++){
    pinMode(led[i], OUTPUT);
  }
}
// PROCEDURES
void scanOn(){
  for(i=0; i<3; i++){
    digitalWrite(led[i], HIGH);
    delay(1000);
  }
}
void scanOff(){
  for(i=0; i<3; i++){
    digitalWrite(led[i], LOW);
    delay(500);
  }
}
// MAIN
void loop() {
  // put your main code here, to run repeatedly:
  scanOn();
  scanOff();
}
