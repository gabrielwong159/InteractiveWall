#ifndef INTERACTIVEWALL_H
#define INTERACTIVEWALL_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define NP0 30
#define NP1 31
#define NP2 32
#define NP3 33
#define NP4 34
#define NP5 35
#define NP6 36
#define NP7 37
#define NP8 38
#define NP9 39
#define NP10 40
#define NP11 41
#define NP12 42
#define NP13 43

#define NUMSTRIPS 14
#define NUMROW 14
#define NUMCOL 20
#define NUMCOLOR 7
#define DELAYVAL 100

#define RED 0
#define ORANGE 1
#define YELLOW 2
#define GREEN 3
#define TEAL 4
#define BLUE 5
#define MAGENTA 6
#define BLANK 7

class InteractiveWall {
  public:
    InteractiveWall();

    void initialize();
    void setColor(int row, int col, uint32_t color);
    void setColor(uint32_t color);
    void showColor(int row, int col, uint32_t color);
    void showAll();
    void blank();

    void test();

    uint32_t getColor(int index);
    uint32_t mapColor(uint8_t r, uint8_t g, uint8_t b);

  private:
    uint32_t colors[NUMCOLOR+1];
    Adafruit_NeoPixel strips[NUMSTRIPS];

    int *pixels[NUMSTRIPS];
};

#endif
