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

#define NUMROW 14
#define NUMCOL 20
#define NUMCOLOR 7
#define DELAYVAL 100

#define COLOR_RED 16711680
#define COLOR_ORANGE 16744192
#define COLOR_YELLOW 16776960
#define COLOR_GREEN 65280
#define COLOR_TEAL 65535
#define COLOR_BLUE 255
#define COLOR_MAGENTA 16711935
#define COLOR_BLANK 0

class InteractiveWall {
  public:
    InteractiveWall();

    void initialize();
    void setColor(int row, int col, uint8_t r, uint8_t g, uint8_t b);
    void setColor(int row, int col, uint32_t color);
    void setColor(uint32_t color);
    void showColor(int row, int col, uint8_t r, uint8_t g, uint8_t b);
    void showColor(int row, int col, uint32_t color);
    void showAll();
    void blank();

    uint32_t mapColor(uint8_t r, uint8_t g, uint8_t b);

  private:
    int pixelSum(int row, int col);

    uint32_t colors[NUMCOLOR+1];
    Adafruit_NeoPixel strips[NUMROWS];
    uint8_t *pixels[NUMROWS];
}

#endif
