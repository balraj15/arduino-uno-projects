int led=11;
int pot_pin=A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pot_pin.INPUT);
}
int brightness=0;

void loop() {
  // put your main code here, to run repeatedly:
  brightness=map(analogRead(pot_pin),0,1023,0,255);
  Serial.println(brightness);
  analogWrite(led,brightness);

}
