
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
 // for(int i=0; i<144; i++){
  //  strip.setPixelColor(i, 255, 255, 255);
 // }
//strip.fill(strip.setPixelColor(255,0,0), 0);
flashRed();
delay(1000);
flashGreen();
delay(1000);
flashBlue();
delay(1000);

}

void flashRed(){
  strip.show();
  for(int i =0; i<144; i++){
    strip.setPixelColor(i, 255,0,0);
  }
  
}
void flashGreen(){
  strip.show();
  for(int i =0; i<144; i++){
    strip.setPixelColor(i, 0,255,0);
  }
  
}void flashBlue(){
  strip.show();
  for(int i =0; i<144; i++){
    strip.setPixelColor(i, 0,0,255);
  }  
}
