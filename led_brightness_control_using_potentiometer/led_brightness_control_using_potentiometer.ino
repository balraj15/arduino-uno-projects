int led=11;
int push_button=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(push_button.INPUT);
}
int buttonState;

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(push_button);
    if(buttonState==HIGH) {
      digitalWrite(led,HIGH);
      }
    else {
      digitalWrite(led,LOW);
      }
}
