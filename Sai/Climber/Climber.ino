#include <Adafruit_NeoPixel.h>
#define PIN 4
#define NUMPIXELS 256

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);




void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(50);
}

void loop() {

  chase();
  
}



void chase(){
  for(int x = 0; x <= 15; x++){
  strip.setPixelColor(x, 2, 5, 12);
  delay(5000);
  }
  for(int x = 16; x <= 30; x++){
  strip.setPixelColor(x, 270, 250, 102);
  delay(5000);
  }
  strip.show();

}
