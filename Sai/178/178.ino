
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
  show1();
  show7();
  show8();
}


void show1(){
  for(int x =0; x<=11; x++){
    strip.setPixelColor(x, 0,0,255);
  }
  strip.show();
}

void show7(){
  strip.setPixelColor(35, 0,0,255);
  strip.setPixelColor(36, 0,0,255);
  strip.setPixelColor(59, 0,0,255);
  strip.setPixelColor(60, 0,0,255);
  for(int x=72; x<= 83; x++){
  strip.setPixelColor(x, 0,0,255);
  }
  strip.show();
}

void show8(){
  for( int x = 96; x<=107; x++){
    strip.setPixelColor(x,0,0,255);
  }
  strip.setPixelColor(108,0,0,255);
  strip.setPixelColor(119,0,0,255);
  strip.setPixelColor(120,0,0,255);
  strip.setPixelColor(125,0,0,255);
  strip.setPixelColor(114,0,0,255);
  strip.setPixelColor(131,0,0,255);
  for(int x = 132; x<144; x++){
    strip.setPixelColor(x,0,0,255);
  }
  strip.show();
}
