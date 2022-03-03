#include <Adafruit_NeoPixel.h>

#define PIN 2   // input pin Neopixel is attached to

#define NUMPIXELS      12 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // timing delay in milliseconds
int x = 0;

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();
}

void loop() {
    if(x%2 == 0){
      displayBlack();
    }
    else{
      displayRed();
    }
 x++;
}

// setColor()
// picks random values to set for RGB
void displayBlack(){
  for(int x =0; x < NUMPIXELS;x++){
  pixels.setPixelColor(x,0,0,0);
  pixels.show();
  delay(delayval);
}
}

void displayRed(){
   for(int x =0; x < NUMPIXELS;x++){
  pixels.setPixelColor(x,255,0,0);
  pixels.show();
  delay(delayval);
}
}
