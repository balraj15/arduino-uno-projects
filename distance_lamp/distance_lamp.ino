int trigger_pin=8;
int echo_pin=9;
int relay1=12;
int distance;
long duration;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(relay1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger_pin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin,LOW);

  duration=pulseIn(echo_pin,HIGH);
  distance=(duration/2) / 29.1;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm");

  if (distance<15){
    digitalWrite(relay1,LOW);
    
    }
  else {
    digitalWrite(relay1,HIGH);
    }
  
}
