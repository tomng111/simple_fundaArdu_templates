int i;
int led[] = {0, 1, 2, 3, 4, 5, 6, 7};
void setup() {
  // put your setup code here, to run once:
  for(i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
  }
}
// PROCEDURES
void left2rightOn(){
  for(i=0; i<8; i++){
    digitalWrite(led[i], HIGH);
    delay(1000);
  }
}
void left2rightOff(){
  for(i=0; i<8; i++){
    digitalWrite(led[i], LOW);
    delay(500);
  }
}
void right2leftOn(){
  for(i=7; i>=0; i--){
    digitalWrite(led[i], HIGH);
    delay(1000);
  }
}
void right2leftOff(){
  for(i=7; i>=0; i--){
    digitalWrite(led[i], LOW);
    delay(500);
  }
}
void hold3sOn(){
  for(i=0; i<8; i++)
    digitalWrite(led[i], HIGH);
  delay(3000);
  for(i=0; i<8; i++)
    digitalWrite(led[i], LOW);
}
// MAIN
void loop() {
  // put your main code here, to run repeatedly:
  left2rightOn();
  left2rightOff();
  right2leftOn();
  right2leftOff();
  hold3sOn();
}
