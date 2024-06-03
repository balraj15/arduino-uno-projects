#include<FastLED.h>
#define LED_PIN 3
#define NUM_LEDS 120
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  FastLED.addLEDS<WS2812B, LED_PIN, GRB> (leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMiliamps(5,500);
  FastLED.clear();
  FastLED.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  input=Serial.read();
  Serial.print(input);
  if (input=='R'){
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i]=CRGB::Red;
    FastLED.show();
    delay(500);
    }
  }

  if (input=='G'){
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i]=CRGB::Green;
    FastLED.show();
    delay(500);
    }
  }

  if (input=='B'){
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i]=CRGB::Blue;
    FastLED.show();
    delay(500);
    }
  }

}
