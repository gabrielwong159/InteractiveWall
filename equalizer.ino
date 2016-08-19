int intensityArray[20];
char buffer[64];

void spectrum() {
  Serial.print('\n'); //request data
  readSerial();
  blank();
  
  for (int i=0; i<NUMCOL; i+=2){
    for(int j=0; j<((int)intensityArray[NUMCOL-i]/8); j++) {
      setUpRC(j,i,colors[i%NUMCOLOR]);
    }
  }
  showAll();
  delay(10);
}

int chartoint(char inchar) {
  return ((int)inchar - 48);
}

void readSerial() {
  char inchar = Serial.read();
  if(inchar == '<'){ //wait for starting packet
    Serial.readBytesUntil('>', buffer, 64); //add data to buffer array (char)
    for(int i = 0; i < 20; ++i){
      for(int j = 0; j < 3; ++j){
        if(j == 0){
          inchar = buffer[(3*i)];
          intensityArray[i] = 100*chartoint(inchar);
        }
        else if(j == 1){
          inchar = buffer[(3*i)+1];
          intensityArray[i] += 10*chartoint(inchar);
        }
        else if(j == 2){
          inchar = buffer[(3*i)+2];
          intensityArray[i] += chartoint(inchar);
        }
      }
    }
  }
}
