/*

*/

//#define NUMCOLOR 7 //red, orange, yellow, green, teal, blue, purple

void horizontalSweep() {
  for (int i=0; i<NUMCOLOR; i++) horizontalSweep(colors[i]);
}

void verticalSweep() {
  for (int i=0; i<NUMCOLOR; i++) verticalSweep(colors[i]);
}

void diagonalSweep() {
  for (int i=0; i<NUMCOLOR; i++) diagonalSweep(i);
}

void zigzag(){
  for (int i=0; i<NUMCOLOR; i++) zigzag(colors[i]);
}

void zigzagVertical() {
  for (int i=0; i<NUMCOLOR; i++) zigzagVertical(colors[i]);
}

void curtainHorizontal() {
  for (int i=0; i<NUMCOLOR; i++) curtainHorizontal(colors[i]);
}

void box() {
  for (int i=0; i<NUMCOLOR; i++) box(colors[i]);
}

void horizontalSweep(uint32_t color) {
  for (int i=-1; i<NUMCOL; i++) {
    for (int j=0; j<NUMROW; j++) {
      lightUpRC(j,i,color);
    }
    delay(DELAYVAL);
  }
}

void verticalSweep(uint32_t color) {
  for (int i=NUMROW-1; i>=0; i--) {
    for (int j=0; j<NUMCOL; j++) {
      setUpRC(i,j,color);
    }
    showAll();
    delay(DELAYVAL);
  }  
}

void diagonalSweep(uint32_t color) {
  for (int i=0; i<(NUMROW+NUMCOL); i++) {
    //draw diagonal
    for (int j=0; j< NUMCOL; j++){
      int row = i-j;
      setUpRC(row, j, color);
    }
    showAll();
    delay(DELAYVAL);
  }
}

void splitSweep(){
  for(int i = 0; i < NUMCOLOR; i++){
    for(int col =0; col < NUMCOL; col++){
      for(int row = 0; row < NUMROW; row++){
        if(row < NUMROW/2){
          setUpRC(row, col, colors[i]);
        }
        else{
          setUpRC(row, NUMCOL - 1 - col, colors[i]);
        }
      }
      showAll();
      delay(DELAYVAL);
    }
  }
}

void zigzag(uint32_t color) {
  for(int i=0; i<NUMROW; i++) {
    for(int j=0; j<NUMCOL; j++) {
        lightUpRC(i,j,color);
        delay(DELAYVAL/10);
    }
  }
}

void zigzagVertical(uint32_t color){
  for (int i=0; i<NUMCOL; i++) {
    for (int j=0; j<NUMROW; j++) {
      lightUpRC(row, col, color);
      delay(DELAYVAL/4);
    }
  }
}

void curtainZigzag(int num){
  for(int row=0; row < NUMROW; row++){
    for(int col=0; col < NUMCOL; col++){
      lightUpRC(row, NUMCOL -  col, colors[num]);
      lightUpRC(row, col, colors[(num+2)%(NUMCOLOR-1)]);
      delay(DELAYVAL);
    }
  }
}

void curtainHorizontal() {
  for (int num=0; num<NUMCOLOR; num++) {
    for (int i=0; i<NUMCOL; i++) {
      for (int j=0; j<NUMROW; j++) {
        lightUpRC(j, i, colors[num%(NUMCOLOR-1)]);
        lightUpRC(j, NUMCOL-i, colors[(num+2)%(NUMCOLOR-1)]);
      }
      delay(DELAYVAL);
    }
  }
}

void box(uint32_t color) {
  blank();
  for (int i=0; i<(NUMCOL/2 + 5); i++) {
    for (int j=(NUMROW/2 - i); j<(NUMROW/2 + i); j++) {
      for (int k=(NUMCOL/2 - i); k<(NUMCOL/2 + i); k++) {
        setUpRC(j,k,color);
      }
    }
    showAll();
    delay(DELAYVAL/10);
  }
}



// awaiting further testing
void showHI(uint32_t color){
  int coordinates[29][2] = {{2,6},{3,6},{4,6},{5,6},{6,6},{7,6},{8,6},{9,6},{5,7},{2,8},{3,8},{4,8},{5,8},{6,8},{7,8},{8,8},{9,8},{2,11},{3,11},{4,11},{5,11},{6,11},{7,11},{8,11},{9,11},{2,10},{2,12},{9,10},{9,12}};
  for (int i=0; i<29; i++) {
    setUpRC(coordinates[i][0],coordinates[i][1], color);
  }
  showAll();
  delay(10*DELAYVAL);
  blank();
}
