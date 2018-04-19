
// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include "Adafruit_GFX.h"   // Core graphics library
#include "RGBmatrixPanel.h" // Hardware-specific library

#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);


void setup() {

  matrix.begin();
  
  // draw a pixel in solid white
  matrix.drawPixel(0, 0, matrix.Color333(7, 7, 7)); 
  delay(500);

  matrix.drawPixel(1,0, matrix.Color333(6, 0, 6));
  delay(1000);


  
  // draw some text!
  matrix.setCursor(1, 0);   // start at top left, with one pixel of spacing
  matrix.setTextSize(1);    // size 1 == 8 pixels high

   matrix.fillScreen(matrix.Color333(0, 0, 0)); 
  // print each letter with a rainbow color
  /*matrix.setTextColor(matrix.Color333(7,0,0));
  matrix.print('1');
  matrix.setTextColor(matrix.Color333(7,4,0)); 
  matrix.print('6');
  matrix.setTextColor(matrix.Color333(7,7,0));
  matrix.print('x');
  matrix.setTextColor(matrix.Color333(4,7,0)); 
  matrix.print('3');
  matrix.setTextColor(matrix.Color333(0,7,0));  
  matrix.print('2');
  
  matrix.setCursor(1, 9);   // next line
  matrix.setTextColor(matrix.Color333(0,7,7)); 
  matrix.print('*');
  matrix.setTextColor(matrix.Color333(0,4,7)); 
  matrix.print('R');
  matrix.setTextColor(matrix.Color333(0,0,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(4,0,7)); 
  matrix.print("B");
  matrix.setTextColor(matrix.Color333(7,0,4)); 
  matrix.print("*");
  */
  

    
 
    

  // whew!
}

void northAmerica() {
  matrix.drawLine(9,1,4, 1, matrix.Color333(7, 7, 7)); //matrix.drawLine(end of x, end of y, start of x, start of y, matrix.Color333(r, g, b)); 
  matrix.drawLine(8, 2, 1, 2, matrix.Color333(7,7,7)); //333 means 3-bit numbers(up to 512 colors,values go from 0 to 7), 
  matrix.drawLine(9,3,2,3, matrix.Color333(7, 7, 7)); //there is also 444, which accepts 4 bit numbers
  matrix.drawLine(9,4,3,4, matrix.Color333(7, 7, 7));
  matrix.drawLine(8,5,3,5, matrix.Color333(7, 7, 7));
  matrix.drawLine(6,6,4,6, matrix.Color333(7, 7, 7));
  matrix.drawLine(7,7,5,7, matrix.Color333(7, 7, 7));
  matrix.drawPixel(0,5, matrix.Color333(7, 7, 7)); 
}

void southAmerica() {
  matrix.drawLine(9,8,7, 8, matrix.Color333(7, 7, 7)); //matrix.drawLine(end of x, end of y, start of x, start of y, matrix.Color333(r, g, b)); 
  matrix.drawLine(10,9,6,9, matrix.Color333(7,7,7)); //333 means 3-bit numbers(up to 512 colors,values go from 0 to 7), 
  matrix.drawLine(11,10,6,10, matrix.Color333(7, 7, 7)); //there is also 444, which accepts 4 bit numbers
  matrix.drawLine(10,11,6,11, matrix.Color333(7, 7, 7));
  matrix.drawLine(9,12,7,12, matrix.Color333(7, 7, 7));
  matrix.drawLine(8,13,7,13, matrix.Color333(7, 7, 7));
  matrix.drawPixel(7,14, matrix.Color333(7, 7, 7));
  matrix.drawPixel(1,10, matrix.Color333(7, 7, 7));
  
}

void loop() {
  // do nothing
  // fix the screen with green+
 /* matrix.fillRect(0, 0, 32, 16, matrix.Color333(0, 7, 0));
  delay(500);

  // draw a box in yellow
  matrix.drawRect(0, 0, 32, 16, matrix.Color333(7, 7, 0));
  delay(500);
  
  // draw an 'X' in red
  matrix.drawLine(0, 0, 31, 15, matrix.Color333(7, 0, 0));
  matrix.drawLine(31, 0, 0, 15, matrix.Color333(7, 0, 0));
  delay(500);
  
  // draw a blue circle
  matrix.drawCircle(7, 7, 7, matrix.Color333(0, 0, 7));
  delay(500);
  
  // fill a violet circle
  matrix.fillCircle(23, 7, 7, matrix.Color333(7, 0, 7));
  delay(500);
  
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(500);
  */
  northAmerica();
  southAmerica();
 
  /* matrix.setCursor (1, 0);
    matrix.setTextColor(matrix.Color333(0,5,7)); 
  matrix.print('O');
   delay(500);
  matrix.setTextColor(matrix.Color333(0,7,0)); 
  matrix.print('R');
   delay(500);
  matrix.setTextColor(matrix.Color333(6,6,0));
  matrix.print('B');
   delay(500);
  matrix.setTextColor(matrix.Color333(4,0,7)); 
  matrix.print("I");
   delay(500);
  matrix.setTextColor(matrix.Color333(5,5,5)); 
  matrix.print("S");
   delay(500); */
}
