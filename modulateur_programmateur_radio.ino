void setup() {
 // Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(4)==HIGH){
  digitalWrite(3, HIGH);
  delayMicroseconds(2500);
  digitalWrite(3, LOW);
  delayMicroseconds(2500);
  }else{
  //tone(3, 50);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  }
  // put your main code here, to run repeatedly:

}
