int relay1=12;
int relay2=11;
int relay3=10;
int relay4=9;
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  Serial.print("Press Y to turn on relay1 \n Press N for turn off relay1 \n Press O to turn on relay2 \n Press F for turn off relay2 \n Press 0 to turn on relay3 \n Press 1 for turn off relay3 \n Press o to turn on relay4 \n Press f for turn off relay4");
}

void loop() {
  // put your main code here, to run repeatedly:
  input=Serial.read();
  
  if (input=='Y') {
    digitalWrite(relay1,LOW);
  }
  if (input=='N') {
    digitalWrite(relay1,HIGH);
  }
  
  if (input=='O') {
    digitalWrite(relay2,LOW);
  }
  if (input=='F') {
    digitalWrite(relay2,HIGH);
  }

  if (input=='1') {
    digitalWrite(relay3,LOW);
  }
  if (input=='0') {
    digitalWrite(relay3,HIGH);
  }

  if (input=='o') {
    digitalWrite(relay4,LOW);
  }
  if (input=='f') {
    digitalWrite(relay4,HIGH);
  }

  if (input=='A') {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    digitalWrite(relay3,LOW);
    digitalWrite(relay4,LOW);

  }
  if (input=='a') {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
  }
}
