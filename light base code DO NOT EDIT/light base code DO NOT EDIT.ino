#include <Adafruit_NeoPixel.h>
#define NUM 48//this is the number of pixels on the strip
#define PIN 4//this is the pin on the arduino, typically we use pin 4 if there is only one strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}