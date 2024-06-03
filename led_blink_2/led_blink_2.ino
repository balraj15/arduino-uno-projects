int led_red=13;
int led_green=12;
int led_white=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);  
  pinMode(led_green, OUTPUT);
  pinMode(led_white, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red,HIGH);
  delay(1000);
  digitalWrite(led_red,LOW);
  delay(1000);

  digitalWrite(led_green,HIGH);
  delay(1000);
  digitalWrite(led_green,LOW);
  delay(1000);

  digitalWrite(led_white,HIGH);
  delay(1000);
  digitalWrite(led_white,LOW);
  delay(1000);
}
