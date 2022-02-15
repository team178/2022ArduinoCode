
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
}


void show1(){
  for(int x =0; x<=11; x++){
    strip.setPixelColor(x, 0,0,255);
  }
  strip.show();
}

void show7(){
  
}

void show8(){
  
}
