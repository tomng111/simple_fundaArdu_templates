int led1 = 4, led2 = 5, led3 = 6, led4 = 7;
int but1 = 2, but2 = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  int butState1 = digitalRead(but1);
  int butState2 = digitalRead(but2);
  if(butState1 == 0){ // PULL-UP
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  if(butState2 == 1){ // PULL-DOWN
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  else{
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}
