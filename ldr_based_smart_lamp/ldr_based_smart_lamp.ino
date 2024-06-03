int ldr=A0;
int value=0;
int relay1=12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(ldr);
  Serial.println("LDR value is");
  Serial.println(value);
  if(value<100) {
    digitalWrite(relay1,LOW);
    }
  else{
    digitalWrite(relay1,HIGH);
    }
}
