
#include <Adafruit_NeoPixel.h>
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

#define NUMPIXELS 144
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  
  strip.clear();
  strip.setBrightness(50);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0; i<300; i++){
 strip.setPixelColor(i, 255, 255, 255);
 
 
 }
flashRed();
delay(1000);
flashGreen();
delay(1000);
flashBlue();
delay(1000);

}

void flashRed(){
  
  for(int i =0; i<144; i++){
    strip.setPixelColor(i,2, 5, 121);
  }
  strip.show();
}
void flashGreen(){
  
  for(int i =0; i<144; i++){
    strip.setPixelColor(i,255,208,0);
  }
  strip.show();
  
}void flashBlue(){
  
  for(int i =0; i<144; i++){
    strip.setPixelColor(i,255,208,0);
  }  
  strip.show();
}
