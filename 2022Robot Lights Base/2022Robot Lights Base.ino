#include <Adafruit_NeoPixel.h>
#define NUM 48//we need to determine how many pixels we are using, this may change
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800);


/*
Decimal	  Binary(pin/code)			        Action	
	        DIO7/d0 	DIO8/d1	  DIO9/d2		
0	        0	    	  0		      0		      Blue Alliance Normal	
1	        0	    	  0	      	1    	  	Blue Shoot	
2	        0		      1		      0	      	Blue Climb	
3	        0	    	  1		      1	      	Red Alliance Normal	
4	        1		      0		      0     		Red Shoot	
5	        1		      0		      1	      	Red Climb	
6         1         1         0         Enforcers
*/

//input pins
int d0 = 7;
int d1 = 8;
int d2 = 9;

//reading
int reading = 6;

//Enforcers Colors
int enforcerBlue = strip.Color(2, 5, 121);
int enforcerYellow = strip.Color(255,208,0);
//Allience Colors
int red = strip.Color(237, 28, 36);
int blue = strip.Color(0, 101, 179);
int black = strip.Color(0, 0, 0);

void read(){
  int reading = 0b00000000;
  bitWrite(reading, 0, digitalRead(d0));
  bitWrite(reading, 1, digitalRead(d1));
  bitWrite(reading, 2, digitalRead(d2));
}

void run(){
  if(reading==0) blueNormal();
  else if(reading==1) blueShoot();
  else if(reading==2) blueClimb();
  else if(reading==3) redNormal();
  else if(reading==4) redShoot();
  else if(reading==5) redClimb();
  else enforcers();
}

void blueNormal(){
  strip.fill(blue, 0);
  strip.show();
}

void blueShoot(){
  strip.clear();
  strip.show();
  for(int i=NUM; i>0; i--){
    strip.setPixelColor(i, blue);
    if(i>3){
      strip.setPixelColor((i-3), black);
    }
    strip.show();
    delay(10)
  }
}

void blueClimb(){
  strip.clear();
  for(int i=0; i<NUM; i+=2){
    strip.setPixelColor(i, blue);
  }
  strip.show();
  delay(100);
  strip.clear();
  for(int i=1; i<NUM; i+=2){
    strip.setPixelColor(i, blue);
  }
  strip.show();
  delay(100);
}

void redNormal(){
  strip.fill(red, 0);
  strip.show();
}

void redShoot(){

  strip.clear();
  strip.show();
  for(int i=NUM; i>0; i--){
    strip.setPixelColor(i, red);
    if(i>3){
      strip.setPixelColor((i-3), black);
    }
    strip.show();
    delay(10)
  }
}

void redClimb(){
  strip.clear();
  for(int i=0; i<NUM; i+=2){
    strip.setPixelColor(i, red);
  }
  strip.show();
  delay(100);
  strip.clear();
  for(int i=1; i<NUM; i+=2){
    strip.setPixelColor(i, red);
  }
  strip.show();
  delay(100);
}

void enforcers(){
  strip.fill(enforcerBlue, 0);
  for(int i=0; i<NUM; i+=2){
    strip.setPixelColor(enforcerYellow, i);
  }
  strip.show();
}



void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  read();
  run();
}
