/*
Vanden's Neopixel Guide
Created by Vanden Haviland, 2022 Head of Electrical for Team 178 The 2nd Law Enforcers
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
uint32_t: unsigned 32 bit interger type
*/
/*
The Color method used below returns the integer that corresponds to the rgb value
strip.Color(int red, int green, int blue)
red green and blue have ranges of 0(off) - 255(full), to find more colors google color picker but keep in mind colors may not be exactly the same on the pixels and may need some adjustment
*/
int blue = strip.Color(2, 5, 121);
int yellow = strip.Color(255,208,0);

//variables for later use
int pixelNum=0;
int pixelNumEnd=1;
int brightness=255;
int r=0;
int g=0;
int b=0;

void setup() {
  strip.begin(); //this starts the leds, you need this in the setup anytime you use a led string, 

  /*
  setBrightness changes the brightness of the LEDs, use a integer between 0(off)-225(full), the defualt is full brightness
  IMPORTANT: only use this method in the start of setup, using it multiple times in the same program may cause issues
  setBrightness(int brightness)
  */
  strip.setBrightness(brightness);

  strip.show(); //any changes to the lights do not have an immediate effect, it simply saves it to a buffer, you must send the buffer to the lights by using strip.show(); 
}

void loop() {
  /*
  setPixelColor sets individual pixels, there are two ways to use this method, one by using a color variable, and one by using individual ints for the red green and blue
  setPixelColor(int pixelNumber, int color) the color integer must use the Color method
  setPixelColor(int pixelNumber, int red, int green, int blue);
  */  
  strip.setPixelColor(pixelNum, blue);
  //or
  strip.setPixelColor(pixelNum, r, g, b);

  /*
  fill fills a set number of pixels starting from a specific point, and filling either a set number of fallowing pixels or the rest of the pixels
  the fill method uses only a color variable so if you dont have a color variable declared earlier you can put strip.Color(r, g, b) in the color spot
  to fill from a pixel to end of LED string do
  */
  strip.fill(blue, pixelNum);
  //to fill only a section of the led strip do
  strip.fill(blue, pixelNum, pixelNumEnd);

  strip.clear();//clears the entire strip(sets all pixels to off)
}