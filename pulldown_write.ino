int but1 = 2, but2 = 3, but3 = 4;
int led1 = 8, led2 = 9, led3 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
  pinMode(but3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  int butState1 = digitalRead(but1);
  int butState2 = digitalRead(but2);
  int butState3 = digitalRead(but3);
  if(butState1 == 1){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(5000);
  }
  else if(butState2 == 1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(5000);
  }
  else if(butState3 == 1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(5000);
  }
}
