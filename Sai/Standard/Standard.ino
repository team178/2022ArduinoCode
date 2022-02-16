#include <Adafruit_NeoPixel.h>
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

#define NUMPIXELS 144

void setup() {
  // put your setup code here, to run once:
strip.begin();


strip.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  displayBlue();
  delay(3000);

 displayGold();
 delay(3000);
}


void displayBlue(){
  for(int x = 0; x <= 144; x++){
  strip.setPixelColor(x,76,174,227);
  }
  strip.show();

}


void displayGold(){
  for(int x = 0; x <= 144; x++){
  strip.setPixelColor(x,255,215,0);
  }
  strip.show();

}
