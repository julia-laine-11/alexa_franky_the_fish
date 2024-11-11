
void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A1)==1023){
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5,LOW);
    delay(100);
  }
  
}
