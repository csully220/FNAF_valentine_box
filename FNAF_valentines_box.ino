void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(9)){
    flash_eyes();
  }
}

void flash_eyes(){
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(333);
  for(int i=0;i<5;i++){
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    delay(200);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    delay(200);
  }
  for(int i=0;i<10;i++){
      delay(80);
      digitalWrite(6, LOW);
      digitalWrite(3, HIGH);
      delay(80);
      digitalWrite(3, LOW);
      digitalWrite(6, HIGH);
  }
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
}

