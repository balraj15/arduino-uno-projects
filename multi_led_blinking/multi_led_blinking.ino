int led=12;
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.print("Press 'Y' to turn on the LED\nPress'N' to turn off the LED");
}

void loop() {
  // put your main code here, to run repeatedly:
  input = Serial.read();
  if(input=='Y'){
    digitalWrite(led,HIGH);
  }

  if(input=='N')
    digitalWrite(led,LOW);
}
