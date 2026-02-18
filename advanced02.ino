int i;
int led[] = {0, 1, 2, 3, 4, 5, 6, 7};
void setup() {
  // put your setup code here, to run once:
  for(i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
  }
}
// PROCEDURES
void oddOn(){
  for(i=0; i<8; i=i+2){
    digitalWrite(led[i], HIGH);
    delay(500);
  }
}
void evenOn(){
  for(i=1; i<8; i=i+2){
    digitalWrite(led[i], HIGH);
    delay(500);
  }
}
void allOff(){
  for(i=0; i<8; i++)
    digitalWrite(led[i], LOW);
}
// MAIN
void loop() {
  // put your main code here, to run repeatedly:
  allOff();
  delay(500);
  oddOn();
  evenOn();
  allOff();
  delay(500);
  evenOn();
  oddOn();
}
