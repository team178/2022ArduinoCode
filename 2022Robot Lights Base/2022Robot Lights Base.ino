#include <Adafruit_NeoPixel.h>
#define NUM 48//we need to determine how many pixels we are using, this may change
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800);


/*
Decimal	  Binary(pin/code)			        Action	
	        DIO7/do0	DIO8/do1	DIO9/do2		
0	        0	    	  0		      0		      Blue Alliance Normal	
1	        0	    	  0	      	1    	  	Blue Shoot	
2	        0		      1		      0	      	Blue Climb	
3	        0	    	  1		      1	      	Red Alliance Normal	
4	        1		      0		      0     		Red Shoot	
5	        1		      0		      1	      	Red Climb	
6         1         1         0         Enforcers
*/

//input pins
int do0 = 7;
int do1 = 8;
int do2 = 9;

//stored pins
bool d0=1;
bool d1=1;
bool d2=0;


//Enforcers Colors
int enforcerBlue = strip.Color(2, 5, 121);
int enforcerYellow = strip.Color(255,208,0);
//Allience Colors
int red = strip.Color(237, 28, 36);
int blue = strip.Color(0, 101, 179);

void blueNormal(){

}

void blueShoot(){

}

void blueClimb(){

}

void redNormal(){

}

void redShoot(){

}

void redClimb(){
  
}

void enforcers(){

}



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}