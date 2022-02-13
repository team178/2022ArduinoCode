/*
Basic use examples of the arduino neopixel library.
For more infromation go the the NeoPixel Uberguide at: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use
Another(slightly less user freindly) place for infromation is the neopixle class reference at: https://adafruit.github.io/Adafruit_NeoPixel/html/class_adafruit___neo_pixel.html#abccaba27e35bfae27c856e76b46c7924
*/
#include <Adafruit_NeoPixel.h>
#define NUM 48//this is the number of pixels on the strip
#define PIN 4//this is the pin on the arduino, typically we use pin 4 if there is only one strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800); //we typically call the LED strips "strip" in code, if you have multiple strips title them "strip0", "strip1", "strip2"...

/*
Enforcer colors: these are the team colors we use with the lights, if you look at the team branding page we typically use the Accent Blue for the blue and Enforcers Gold 3.0 for the yellow as they show up well on the LED's
Colors use the variable type uint32_t, this is a 32 bit unsigned unsigned integer, it is used because the full rgb values need exactly 32 bits
*/

uint32_t blue = strip.Color(2, 5, 121);
uint32_t yellow = strip.Color(255,208,0);




void setup() {
  // put your setup code here, to run once:
strip.begin(); //this starts the leds, you need this in the setup anytime you use a led string
strip.show(); //any changes to the lights do not have an immediate effect, it simply saves it to a buffer, you must send the buffer to the lights by using strip.show(); 
}

void loop() {
  // put your main code here, to run repeatedly:

}