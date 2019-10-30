void setup() {
  
  pinMode(4, INPUT);
  pinMode(3, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int duree = pulseInLong(4, HIGH);
  if(duree >  17500/2){
    digitalWrite(3, LOW);
    delay(100);
    digitalWrite(3, HIGH);
    delay(60000);
  }else{
    digitalWrite(3, HIGH);
  }
  
  // put your main code here, to run repeatedly:

}
