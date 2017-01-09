#include <InteractiveWall.h>

InteractiveWall wall;

void setup() {
  Serial.begin(9600);
}

void loop() {
  horizontalSweep();
}

void horizontalSweep() {
  for (int i=0; i<NUMCOLOR; i++) horizontalSweep(i);
}

void horizontalSweep(int index) {
  for (int i=-1; i<NUMCOL; i++) {
    for (int j=0; j<NUMROW; j++) {
      wall.showColor(j,i,wall.getColor(i));
    }
    delay(DELAYVAL);
  }
}
