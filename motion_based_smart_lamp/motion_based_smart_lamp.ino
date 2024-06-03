int PIR=8;
int relay1=12;
int state=LOW;
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1,OUTPUT);
  pinMode(PIR,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(PIR);
  if (val==HIGH) {
    digitalWrite(relay1,LOW);//turn on the lamp
    delay(500);
    if (state==LOW) {
      Serial.println("Motion detected");
      state=HIGH;
      }
    }
  else{
    digitalWrite(relay1,HIGH);
    delay(500);

    if (state==HIGH){
      Serial.println("Motion stopped");
      state=LOW;
      }
    }
}
