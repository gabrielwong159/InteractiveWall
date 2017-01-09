#include <Adafruit_NeoPixel.h>

void setup() {
  initialize();
  Serial.begin(9600);
}


void loop() {
  spectrum();
  //demo();
}

void demo() {
  box();  
  curtainHorizontal();
  blank();  
  horizontalSweep();  
  delay(1000);//what is this delay?  
  verticalSweep();
  blank();  
  diagonalSweep();
  splitSweep();  
  blank();    
  zigzag();
  zigzagVertical();

  delay(5000); //ENCORE
}


