#include <Adafruit_NeoPixel.h>
//Arduino Mega Pins
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

#define DELAYVAL 100

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip0 = Adafruit_NeoPixel(57, NP0);
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(61, NP1);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(61, NP2);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(61, NP3);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(56, NP4);
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(56, NP5);
Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(56, NP6);
Adafruit_NeoPixel strip7 = Adafruit_NeoPixel(61, NP7);
Adafruit_NeoPixel strip8 = Adafruit_NeoPixel(56, NP8);
Adafruit_NeoPixel strip9 = Adafruit_NeoPixel(60, NP9);
Adafruit_NeoPixel strip10 = Adafruit_NeoPixel(53, NP10);
Adafruit_NeoPixel strip11 = Adafruit_NeoPixel(57, NP11);
Adafruit_NeoPixel strip12 = Adafruit_NeoPixel(54, NP12);
Adafruit_NeoPixel strip13 = Adafruit_NeoPixel(59, NP13);

Adafruit_NeoPixel strips[] = {strip0, strip1, strip2, strip3, strip4, strip5, strip6, strip7, strip8, strip9, strip10, strip11, strip12, strip13};

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

//-----------Triangle Pixels Array------------
#define NUMROW  14
#define NUMCOL  20
#define MAXPIXELS 8

//caa 250616
//caa 250616
int r0c0  []  = { 3, 0 , 1 , 2 };
int r0c1  []  = { 3, 3 , 4 , 5 };
int r0c2  []  = { 3, 6 , 7 , 8 };
int r0c3  []  = { 3, 9 , 10 , 11 };
int r0c4  []  = { 3, 12 , 13 , 14 };
int r0c5  []  = { 3, 15 , 16 , 17 };
int r0c6  []  = { 3, 18 , 19 , 20 };
int r0c7  []  = { 3, 21 , 22 , 23 };
int r0c8  []  = { 3, 24 , 25 , 26 };
int r0c9  []  = { 3, 27 , 28 , 29 };
int r0c10 []  = { 3, 30 , 31 , 32 };
int r0c11 []  = { 3, 33 , 34 , 35 };
int r0c12 []  = { 3, 36 , 37 , 38 };
int r0c13 []  = { 3, 39 , 40 , 41 };
int r0c14 []  = { 2, 42 , 43 };
int r0c15 []  = { 2, 44 , 45 };
int r0c16 []  = { 2, 46 , 47 };
int r0c17 []  = { 2, 48 , 49 };
int r0c18 []  = { 3, 50 , 51 , 52 };
int r0c19 []  = { 4, 53 , 54 , 55 , 56 };

//caa 220616
int r1c0  []  = { 3, 0 , 1 , 2 };
int r1c1  []  = { 3, 3 , 4 , 5 };
int r1c2  []  = { 3, 6 , 7 , 8 };
int r1c3  []  = { 3, 9 , 10 , 11 };
int r1c4  []  = { 3, 12 , 13 , 14 };
int r1c5  []  = { 3, 15 , 16 , 17 };
int r1c6  []  = { 3, 18 , 19 , 20 };
int r1c7  []  = { 3, 21 , 22 , 23 };
int r1c8  []  = { 3, 24 , 25 , 26 };
int r1c9  []  = { 3, 27 , 28 , 29 };
int r1c10 []  = { 3, 30 , 31 , 32 };
int r1c11 []  = { 3, 33 , 34 , 35 };
int r1c12 []  = { 2, 36 , 37 };
int r1c13 []  = { 2, 38 , 39 };
int r1c14 []  = { 2, 40 , 41 };
int r1c15 []  = { 2, 42 , 43 };
int r1c16 []  = { 3, 44 , 45 , 46 };
int r1c17 []  = { 3, 47 , 48 , 49 };
int r1c18 []  = { 4, 50 , 51 , 52 , 53 };
int r1c19 []  = { 7, 54 , 55 , 56 , 57 , 58 , 59 , 60 };

//caa 220616
int r2c0  []  = { 3, 0 , 1 , 2 };
int r2c1  []  = { 3, 3 , 4 , 5 };
int r2c2  []  = { 3, 6 , 7 , 8 };
int r2c3  []  = { 3, 9 , 10 , 11 };
int r2c4  []  = { 3, 12 , 13 , 14 };
int r2c5  []  = { 3, 15 , 16 , 17 };
int r2c6  []  = { 3, 18 , 19 , 20 };
int r2c7  []  = { 3, 21 , 22 , 23 };
int r2c8  []  = { 3, 24 , 25 , 26 };
int r2c9  []  = { 4, 27 , 28 , 29 , 30 };
int r2c10 []  = { 3, 31 , 32 , 33 };
int r2c11 []  = { 3, 34 , 35 , 36 };
int r2c12 []  = { 3, 37 , 38 , 39 };
int r2c13 []  = { 3, 40 , 41 , 42 };
int r2c14 []  = { 2, 43 , 44 };
int r2c15 []  = { 2, 45 , 46 };
int r2c16 []  = { 3, 47 , 48 , 49 };
int r2c17 []  = { 3, 50 , 51 , 52 };
int r2c18 []  = { 4, 53 , 54 , 55 , 56 };
int r2c19 []  = { 4, 57 , 58 , 59 , 60 };

//caa 030816
int r3c0  []  = { 3, 0 , 1 , 2 };
int r3c1  []  = { 3, 3 , 4 , 5 };
int r3c2  []  = { 3, 6 , 7 , 8 };
int r3c3  []  = { 3, 9 , 10 , 11 };
int r3c4  []  = { 3, 12 , 13 , 14 };
int r3c5  []  = { 3, 15 , 16 , 17 };
int r3c6  []  = { 3, 18 , 19 , 20 };
int r3c7  []  = { 3, 21 , 22 , 23 };
int r3c8  []  = { 3, 24 , 25 , 26 };
int r3c9  []  = { 3, 27 , 28 , 29 };
int r3c10 []  = { 3, 30 , 31 , 32 };
int r3c11 []  = { 3, 33 , 34 , 35 };
int r3c12 []  = { 2, 36 , 37 };
int r3c13 []  = { 2, 38 , 39 };
int r3c14 []  = { 2, 40 , 41 };
int r3c15 []  = { 2, 42 , 43 };
int r3c16 []  = { 3, 44 , 45 , 46 };
int r3c17 []  = { 3, 47 , 48 , 49 };
int r3c18 []  = { 4, 50 , 51 , 52 , 53 };
int r3c19 []  = { 7, 54 , 55 , 56 , 57 , 58 , 59 , 60 };

//caa 030816
int r4c0  []  = { 2, 0 , 1  };
int r4c1  []  = { 3, 2 , 3 , 4 };
int r4c2  []  = { 3, 5 , 6 , 7 };
int r4c3  []  = { 3, 8 , 9 , 10 };
int r4c4  []  = { 3, 11 , 12 , 13 };
int r4c5  []  = { 3, 14 , 15 , 16 };
int r4c6  []  = { 3, 17 , 18 , 19 };
int r4c7  []  = { 3, 20 , 21 , 22 };
int r4c8  []  = { 3, 23 , 24 , 25 };
int r4c9  []  = { 3, 26 , 27 , 28 };
int r4c10 []  = { 2, 29 , 30 };
int r4c11 []  = { 2, 31 , 32 };
int r4c12 []  = { 2, 33 , 34 };
int r4c13 []  = { 2, 35 , 36 };
int r4c14 []  = { 2, 37 , 38 };
int r4c15 []  = { 2, 39 , 40 };
int r4c16 []  = { 3, 41 , 42 , 43 };
int r4c17 []  = { 3, 44 , 45 , 46 };
int r4c18 []  = { 4, 47 , 48 , 49 , 50 };
int r4c19 []  = { 5, 51 , 52 , 53 , 54 , 55 };

//caa 030816
int r5c0  [] = { 3, 0 , 1 , 2 };
int r5c1  [] = { 3, 3 , 4 , 5 , 6 };
int r5c2  [] = { 3, 7 , 8 , 9 };
int r5c3  [] = { 3, 9 , 10 , 11 };
int r5c4  [] = { 3, 12 , 13 , 14 };
int r5c5  [] = { 3, 15 , 16 , 17 };
int r5c6  [] = { 3, 18 , 19 , 20 };
int r5c7  [] = { 3, 21 , 22 , 23 };
int r5c8  [] = { 3, 24 , 25 , 26 };
int r5c9  [] = { 2, 27 , 28 };
int r5c10 [] = { 2, 29 , 30 };
int r5c11 [] = { 2, 31 , 32 };
int r5c12 [] = { 2, 33 , 34 };
int r5c13 [] = { 2, 35 , 36 };
int r5c14 [] = { 2, 37 , 38 };
int r5c15 [] = { 2, 39 , 40 };
int r5c16 [] = { 3, 41 , 42 , 43 };
int r5c17 [] = { 3 , 44 , 45 , 46 };
int r5c18 [] = { 4, 47 , 48 , 49 , 50 };
int r5c19 [] = { 5, 51 , 52 , 53 , 54 , 55 };

//WIRE BROKEN 040816
int r6c0  [] = { 4, 0 , 1 , 2 , 3 };
int r6c1  [] = { 3, 4 , 5 , 6 };
int r6c2  [] = { 3, 7 , 8 , 9 };
int r6c3  [] = { 3, 10 , 11 , 12 };
int r6c4  [] = { 3, 13 , 14 , 15 };
int r6c5  [] = { 3, 16 , 17 , 18 };
int r6c6  [] = { 3, 19 , 20 , 21 };
int r6c7  [] = { 3, 22 , 23 , 24 };
int r6c8  [] = { 3, 25 , 26 , 27 };
int r6c9  [] = { 2, 29 , 29 };
int r6c10 [] = { 2, 30 , 31 };
int r6c11 [] = { 2, 32 , 33 };
int r6c12 [] = { 2, 34 , 35 };
int r6c13 [] = { 2, 36 , 37 };
int r6c14 [] = { 2, 38 , 39 };
int r6c15 [] = { 2, 40 , 41 };
int r6c16 [] = { 2, 42 , 43 };
int r6c17 [] = { 3, 44 , 45 , 46 };
int r6c18 [] = { 4, 47 , 48 , 49 , 50 };
int r6c19 [] = { 5, 51 , 52 , 53 , 54 , 55 };

//caa 030816
int r7c0  [] = { 5, 0 , 1 , 2 , 3 , 4 };
int r7c1  [] = { 4, 5 , 6 , 7 , 8 };
int r7c2  [] = { 3, 9 , 10 , 11 };
int r7c3  [] = { 3, 12 , 13 , 14 };
int r7c4  [] = { 3, 15 , 16 , 17 };
int r7c5  [] = { 3, 18 , 19 , 20 };
int r7c6  [] = { 3, 21 , 22 , 23 };
int r7c7  [] = { 3, 24 , 25 , 26 };
int r7c8  [] = { 3, 27 , 28 , 29 };
int r7c9  [] = { 2, 30 , 31 };
int r7c10 [] = { 2, 32 , 33 };
int r7c11 [] = { 2, 34 , 35 };
int r7c12 [] = { 2, 36 , 37 };
int r7c13 [] = { 3, 38 , 39 , 40 };
int r7c14 [] = { 3, 41 , 42 , 43 };
int r7c15 [] = { 3, 44 , 45 , 46 };
int r7c16 [] = { 3, 47 , 48 , 49 };
int r7c17 [] = { 3, 50 , 51 , 52 };
int r7c18 [] = { 3, 53 , 54 , 55 };
int r7c19 [] = { 5, 56 , 57 , 58 , 59 , 60 };

//caa 030816
int r8c0  [] = { 5, 0 , 1 , 2 , 3 , 4 };
int r8c1  [] = { 3 , 5 , 6 , 7 , 8 };
int r8c2  [] = { 3, 9 , 10 , 11 };
int r8c3  [] = { 3, 12 , 13 , 14 };
int r8c4  [] = { 3, 15 , 16 , 17 };
int r8c5  [] = { 2, 18 , 19 };
int r8c6  [] = { 2, 20 , 21 };
int r8c7  [] = { 2, 22 , 23 };
int r8c8  [] = { 2, 24 , 25 };
int r8c9  [] = { 2, 26 , 27 };
int r8c10 [] = { 2, 28 , 29 };
int r8c11 [] = { 2, 30 , 31 };
int r8c12 [] = { 2, 32 , 33 };
int r8c13 [] = { 3, 34 , 35 , 36 };
int r8c14 [] = { 3, 37 , 38 , 39 };
int r8c15 [] = { 3, 40 , 41 , 42 };
int r8c16 [] = { 3, 43 , 44 , 45 };
int r8c17 [] = { 3, 46 , 47 , 48 };
int r8c18 [] = { 3, 49 , 50 , 51 };
int r8c19 [] = { 4, 52 , 53 , 54 , 55 };

//caa 030816
int r9c0  [] = { 5, 0 , 1 , 2 , 3 , 4 };
int r9c1  [] = { 4, 5 , 6 , 7 , 8 };
int r9c2  [] = { 3, 9 , 10 , 11 };
int r9c3  [] = { 2, 12 , 13 };
int r9c4  [] = { 2, 14 , 15 };
int r9c5  [] = { 2, 16 , 17 };
int r9c6  [] = { 2, 18 , 19 };
int r9c7  [] = { 3, 20 , 21 , 22 };
int r9c8  [] = { 3, 23 , 24 , 25 };
int r9c9  [] = { 3, 26 , 27 , 28 };
int r9c10 [] = { 3, 29 , 30 , 31 };
int r9c11 [] = { 3, 32 , 33 , 34 };
int r9c12 [] = { 3, 35 , 36 , 37 };
int r9c13 [] = { 3, 38 , 39 , 40 };
int r9c14 [] = { 3, 41 , 42 , 43 };
int r9c15 [] = { 3, 44 , 45 , 46 };
int r9c16 [] = { 3, 47 , 48 , 49 };
int r9c17 [] = { 3, 50 , 51 , 52 };
int r9c18 [] = { 3, 53 , 54 , 55 };
int r9c19 [] = { 4, 56 , 57 , 58 , 59 };

//caa 030816
int r10c0 [] = { 5, 0 , 1 , 2 , 3 , 4 };
int r10c1 [] = { 4, 5 , 6 , 7 , 8 };
int r10c2 [] = { 3, 9 , 10 , 11 };
int r10c3 [] = { 3, 12 , 13 , 14 };
int r10c4 [] = { 2, 15 , 16 };
int r10c5 [] = { 2, 17 , 18 };
int r10c6 [] = { 2, 19 , 20 };
int r10c7 [] = { 3, 21 , 22 , 23 };
int r10c8 [] = { 2, 24 , 25 };
int r10c9 [] = { 2, 26 , 27 };
int r10c10[] = { 2, 28 , 29 };
int r10c11[] = { 2, 30 , 31 };
int r10c12[] = { 2, 32 , 33 };
int r10c13[] = { 2, 34 , 35 };
int r10c14[] = { 2, 36 , 37 };
int r10c15[] = { 3, 38 , 39 , 40 };
int r10c16[] = { 3, 41 , 42 , 43 };
int r10c17[] = { 3, 44 , 45 , 46 };
int r10c18[] = { 3, 47 , 48 , 49 };
int r10c19[] = { 3, 50 , 51 , 52 };

//caa 040816
int r11c0 [] = { 6, 0 , 1 , 2 , 3 , 4 , 5 };
int r11c1 [] = { 4, 6 , 7 , 8 , 9 };
int r11c2 [] = { 3, 10 , 11 , 12 };
int r11c3 [] = { 2, 13 , 14 };
int r11c4 [] = { 2, 15 , 16 };
int r11c5 [] = { 2, 17 , 18 };
int r11c6 [] = { 2, 19 , 20 };
int r11c7 [] = { 3, 21 , 22 , 23 };
int r11c8 [] = { 3, 24 , 25 , 26};
int r11c9 [] = { 3, 27 , 28 , 29 };
int r11c10[] = { 3, 30 , 31 , 32 };
int r11c11[] = { 2, 33 , 34 };
int r11c12[] = { 2, 35 , 36 };
int r11c13[] = { 2, 37 , 38 };
int r11c14[] = { 3, 39 , 40 , 41 };
int r11c15[] = { 2, 42 , 43 };
int r11c16[] = { 3, 44 , 45 , 46 };
int r11c17[] = { 3, 47 , 48 , 49 };
int r11c18[] = { 3, 50 , 51 , 52 };
int r11c19[] = { 4, 53 , 54 , 55 , 56 };

//BROKEN AT col>=5 040816
int r12c0 [] = { 6, 0 , 1 , 2 , 3 , 4 , 5 };
int r12c1 [] = { 3, 6 , 7 , 8 };
int r12c2 [] = { 2, 9 , 10 };
int r12c3 [] = { 2, 11 , 12 };
int r12c4 [] = { 2, 13 , 14 };
int r12c5 [] = { 2, 15 , 16 };
int r12c6 [] = { 2, 17 , 18 };
int r12c7 [] = { 2, 19 , 20 };
int r12c8 [] = { 3, 21 , 22 , 23 };
int r12c9 [] = { 3, 24 , 25 , 26 };
int r12c10[] = { 3, 27 , 28 , 29 };
int r12c11[] = { 2, 30 , 31 };
int r12c12[] = { 2, 32 , 33 };
int r12c13[] = { 2, 34 , 35 };
int r12c14[] = { 2, 36 , 37 };
int r12c15[] = { 3, 38 , 39 , 40 };
int r12c16[] = { 3, 41 , 42 , 43 };
int r12c17[] = { 3, 44 , 45 , 46 };
int r12c18[] = { 3, 47 , 48 , 49 };
int r12c19[] = { 4, 50 , 51 , 52 , 53 };

//caa 250616
int r13c0 [] = { 3, 0 , 1 , 2 };
int r13c1 [] = { 3, 3 , 4 , 5 };
int r13c2 [] = { 3, 6 , 7 , 8 };
int r13c3 [] = { 3, 9 , 10 , 11 };
int r13c4 [] = { 3, 12 , 13 , 14 };
int r13c5 [] = { 2, 15 , 16 };
int r13c6 [] = { 3, 17 , 18 , 19 };
int r13c7 [] = { 3, 20 , 21 , 22 };
int r13c8 [] = { 3, 23 , 24 , 25 };
int r13c9 [] = { 3, 26 , 27 , 28 };
int r13c10[] = { 3, 29 , 30 , 31 };
int r13c11[] = { 3, 32 , 33 , 34 };
int r13c12[] = { 3, 35 , 36 , 37 };
int r13c13[] = { 3, 38 , 39 , 40 };
int r13c14[] = { 3, 41 , 42 , 43 };
int r13c15[] = { 3, 44 , 45 , 46 };
int r13c16[] = { 3, 47 , 48 , 49 };
int r13c17[] = { 3, 50 , 51 , 52 };
int r13c18[] = { 3, 53 , 54 , 55 };
int r13c19[] = { 3, 56 , 57 , 58 };


int *pixels[NUMROW][NUMCOL] = 
{
{r0c0, r0c1, r0c2, r0c3, r0c4, r0c5, r0c6, r0c7, r0c8, r0c9, r0c10, r0c11, r0c12, r0c13, r0c14, r0c15, r0c16, r0c17, r0c18, r0c19},
{r1c0, r1c1, r1c2, r1c3, r1c4, r1c5, r1c6, r1c7, r1c8, r1c9, r1c10, r1c11, r1c12, r1c13, r1c14, r1c15, r1c16, r1c17, r1c18, r1c19},
{r2c0, r2c1, r2c2, r2c3, r2c4, r2c5, r2c6, r2c7, r2c8, r2c9, r2c10, r2c11, r2c12, r2c13, r2c14, r2c15, r2c16, r2c17, r2c18, r2c19},
{r3c0, r3c1, r3c2, r3c3, r3c4, r3c5, r3c6, r3c7, r3c8, r3c9, r3c10, r3c11, r3c12, r3c13, r3c14, r3c15, r3c16, r3c17, r3c18, r3c19},
{r4c0, r4c1, r4c2, r4c3, r4c4, r4c5, r4c6, r4c7, r4c8, r4c9, r4c10, r4c11, r4c12, r4c13, r4c14, r4c15, r4c16, r4c17, r4c18, r4c19},
{r5c0, r5c1, r5c2, r5c3, r5c4, r5c5, r5c6, r5c7, r5c8, r5c9, r5c10, r5c11, r5c12, r5c13, r5c14, r5c15, r5c16, r5c17, r5c18, r5c19},
{r6c0, r6c1, r6c2, r6c3, r6c4, r6c5, r6c6, r6c7, r6c8, r6c9, r6c10, r6c11, r6c12, r6c13, r6c14, r6c15, r6c16, r6c17, r6c18, r6c19},
{r7c0, r7c1, r7c2, r7c3, r7c4, r7c5, r7c6, r7c7, r7c8, r7c9, r7c10, r7c11, r7c12, r7c13, r7c14, r7c15, r7c16, r7c17, r7c18, r7c19},
{r8c0, r8c1, r8c2, r8c3, r8c4, r8c5, r8c6, r8c7, r8c8, r8c9, r8c10, r8c11, r8c12, r8c13, r8c14, r8c15, r8c16, r8c17, r8c18, r8c19},
{r9c0, r9c1, r9c2, r9c3, r9c4, r9c5, r9c6, r9c7, r9c8, r9c9, r9c10, r9c11, r9c12, r9c13, r9c14, r9c15, r9c16, r9c17, r9c18, r9c19},
{r10c0, r10c1, r10c2, r10c3, r10c4, r10c5, r10c6, r10c7, r10c8, r10c9, r10c10, r10c11, r10c12, r10c13, r10c14, r10c15, r10c16, r10c17, r10c18, r10c19},
{r11c0, r11c1, r11c2, r11c3, r11c4, r11c5, r11c6, r11c7, r11c8, r11c9, r11c10, r11c11, r11c12, r11c13, r11c14, r11c15, r11c16, r11c17, r11c18, r11c19},
{r12c0, r12c1, r12c2, r12c3, r12c4, r12c5, r12c6, r12c7, r12c8, r12c9, r12c10, r12c11, r12c12, r12c13, r12c14, r12c15, r12c16, r12c17, r12c18, r12c19},
{r13c0, r13c1, r13c2, r13c3, r13c4, r13c5, r13c6, r13c7, r13c8, r13c9, r13c10, r13c11, r13c12, r13c13, r13c14, r13c15, r13c16, r13c17, r13c18, r13c19}
};




//-----------ColorSetting-------------
#define NUMCOLOR 7 //red, orange, yellow, green, teal, blue, purple, blank

uint32_t mapColor(uint8_t r, uint8_t g, uint8_t b) {
  return ((uint32_t)r << 16) | ((uint32_t)g <<  8) | b;
}

const int RED = 0; // (255, 0, 0)
const int ORANGE = 1; // (255, 124, 0)
const int YELLOW = 2; // (255, 255, 0)
const int GREEN = 3; // (0, 255, 0)
const int TEAL = 4; // (0, 255, 255)
const int BLUE = 5; // (0, 0, 255)
const int MAGENTA = 6; // (255, 0, 255)
const int BLANK = 7; // (0, 0, 0)

uint32_t colors[NUMCOLOR+1] = {mapColor(255, 0, 0), mapColor(255, 124, 0), mapColor(255, 255, 0), mapColor(0, 255, 0), mapColor(0, 255, 255), mapColor(0, 0, 255), mapColor(255, 0, 255), mapColor(0, 0, 0)};


//TODO - remove some colours because
//http://www.w3schools.com/colors/colors_picker.asp
uint32_t colors_hardcore[25] = {
  mapColor(255, 0, 0), //0
  mapColor(255, 64, 0), //15
  mapColor(255, 128, 0), //30
  mapColor(255, 153, 0), //36
  mapColor(255, 191, 0), //45
  mapColor(255, 255, 0), //60
  mapColor(191, 255, 0), //75
  mapColor(128, 255, 0), //90
  mapColor(64, 255, 0), //105
  mapColor(0, 255, 0), //120
  mapColor(0, 255, 64), //135
  mapColor(0, 255, 128), //150
  mapColor(0, 255, 191), //165
  mapColor(0, 255, 255), //180
  mapColor(0, 191, 255), //195
  mapColor(0, 128, 255), //210
  mapColor(0, 64, 255), //225
  mapColor(0, 0, 255), //240
  mapColor(64, 0, 255), //255
  mapColor(128, 0, 255), //270
  mapColor(191, 0, 255), //285
  mapColor(255, 0, 255), //300
  mapColor(255, 0, 191), //315
  mapColor(255, 0, 128), //330
  mapColor(255, 0, 64), //345
};

int intensityArray[20];
char buffer[64];

void setup() {
  for (int i=0; i<NUMSTRIPS; i++) {
    strips[i].begin(); //initialize strips
    strips[i].show(); //turns off all pixels
  }
  Serial.begin(9600);
}


void loop() {
  spectrum();
  /*
  rainbow();
  box();
  
  for (int i=0; i<NUMCOLOR; i++) curtainHorizontal(i);

  showAllColor(colors[BLANK]);
  
  for(int i=0; i<NUMCOLOR; i++) horizontalSweep(colors[i]);
  
  rainbow();
  horizontalSweep(colors[BLANK]);
  
  delay(1000);
  
  for(int i=0; i<NUMCOLOR; i++) verticalSweep(colors[i]);

  showAllColor(colors[BLANK]);
  
  for (int i=0; i<NUMCOLOR; i++) diagonalSweep(colors[i]);

  splitSweep();
  
  showAllColor(colors[BLANK]);
    
  zigzag();
  zigzagVertical();

  delay(5000); //ENCORE
  */
}

//DIFFERENT DISPLAY PATTERNS

//Spectrum
void spectrum(){
  Serial.print('\n'); //request data
  readSerial();
  setAllBlank();
  
  for (int i=0; i<NUMCOL; i+=2){
    for(int j=0; j<((int)intensityArray[NUMCOL-i]/8); j++) {
      setUpRC(j,i,colors[i%NUMCOLOR]);
    }
  }
  showAll();
  delay(10);
}

//convert char to int
int chartoint(char inchar) {
  return ((int)inchar - 48);
}

//Read Serial
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

//row by row, left to right
void zigzag(){
  for(int i =0; i < sizeof(colors)/sizeof(uint32_t); i++){
    for(int row=0; row < NUMROW; row++){
      for(int col=0; col < NUMCOL; col++){
            //lightUpRC(row - 5, col, colors[5 % i]);
            lightUpRC(row, col, colors[i]);
            delay(10);
      }
    }
  }
}

//row by row, up to down
void zigzagVertical(){
  for(int i =0; i < sizeof(colors)/sizeof(uint32_t); i++){
    for(int col=0; col < NUMCOL; col++){
      for(int row=0; row < NUMROW; row++){
        //lightUpRC(row - 5, col, colors[ 5 % i]);
        lightUpRC(row, col, colors[i]);
        delay(25);
      }
    }
  }
}

//how do i even explain it
void curtainZigzag(int num){
  for(int row=0; row < NUMROW; row++){
    for(int col=0; col < NUMCOL; col++){
      lightUpRC(row, NUMCOL -  col, colors[num]);
      lightUpRC(row, col, colors[(num+2)%(NUMCOLOR-1)]);
      delay(DELAYVAL);
    }
  }
}

//simultaneous left to right, right to left
void curtainHorizontal(int num) {
  for (int i=0; i<NUMCOL; i++) {
    for (int j=0; j<NUMROW; j++) {
      lightUpRC(j, i, colors[num%(NUMCOLOR-1)]);
      lightUpRC(j, NUMCOL-i, colors[(num+2)%(NUMCOLOR-1)]);
    }
    delay(DELAYVAL);
  }
}

//makes rainbow, no explanation needed
void rainbow() {
    for (int i=0; i<50; i++) {
      for (int j=0; j<NUMROW; j++) {
        for (int k=0; k < i; k++){
          setUpRC(j, i-k, colors_hardcore[k%25]);
        }
        showAll();
      }
    }
}

//make radial, make box, make pretty
void box() {
  setAllBlank();
  for (int colorI=0; colorI<NUMCOLOR+1; colorI++) {
    for (int i=0; i<(NUMCOL/2 + 5); i++) {
      for (int j=(NUMROW/2 - i); j<(NUMROW/2 + i); j++) {
        for (int k=(NUMCOL/2 - i); k<(NUMCOL/2 + i); k++) {
          setUpRC(j,k,colors[colorI]);
        }
      }
      showAll();
      delay(DELAYVAL/10);
    }
  }
}

//makes party
void equalizer() {
  //int first = random(6);
  for (int i=0; i<100; i++) {
    //showAllColor(colors[GREEN]);
    setAllBlank();
    //int current = first + random(-2,3);
    for (int j=0; j<NUMCOL; j++) {
      //current+= random(-2, 4);
      for (int k=0; k<random(NUMROW); k++) {
        setUpRC(k,j,colors[random(j) % NUMCOLOR]);
      }
    }
    showAll();
    delay(random(0,DELAYVAL*2));
  }
}

/* TODO
void rain(uint32_t color) {
  setAllBlank();
  for (int i=0; i<10; i++) {
    
  }
}
*/

// awaiting further testing
void showHI(uint32_t color){
  int coordinates[29][2] = {{2,6},{3,6},{4,6},{5,6},{6,6},{7,6},{8,6},{9,6},{5,7},{2,8},{3,8},{4,8},{5,8},{6,8},{7,8},{8,8},{9,8},{2,11},{3,11},{4,11},{5,11},{6,11},{7,11},{8,11},{9,11},{2,10},{2,12},{9,10},{9,12}};
  for (int i=0; i<29; i++) {
    setUpRC(coordinates[i][0],coordinates[i][1], color);
  }
  showAll();
  delay(10*DELAYVAL);
  setAllBlank();
}

//SWEEP FUNCTIONS
//left to right
void horizontalSweep(uint32_t color) {
  for (int i=-1; i<NUMCOL; i++) {
    for (int j=0; j<NUMROW; j++) {
      lightUpRC(j,i,color);
    }
    delay(DELAYVAL);
  }
}

void horizontalSweepMini(uint32_t color) {
  for (int i=0; i<NUMCOL; i++) {
    for (int j=6; j<9; j++) {
      lightUpRC(j,i,color);
    }
    delay(DELAYVAL);
  }
}

//up to down
void verticalSweep(uint32_t color) {
  for (int i=0; i<NUMROW; i++) {
    for (int j=0; j<NUMCOL; j++) {
      setUpRC(i,j,color);
    }
    showAll();
    delay(DELAYVAL);
  }  
}

//left to right, f(x) = x
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

//basic library functions

//set colour without displaying
void setUpRC(int row, int col, uint32_t color){
  //catch out-of-bounds coordinates  
  if (row<0 || col<0 || row>=NUMROW || col>=NUMCOL) { return; }
  
  for(int i = 1; i<*pixels[row][col]+1; i++){
    strips[row].setPixelColor(*(pixels[row][col]+i), color);
  }
}


//set up RC + show
void lightUpRC(int row, int col, uint32_t color){
  //catch out-of-bounds coordinates
  if (row<0 || col<0 || row>=NUMROW || col>=NUMCOL) { return; }
  
  for(int i = 1; i<*pixels[row][col]+1; i++){
    strips[row].setPixelColor(*(pixels[row][col]+i), color);
  }
  strips[row].show();
}

//displays all colour settings
void showAll(){
  for (int i=0; i<NUMSTRIPS; i++) {
    strips[i].show();
  }
}

//sets all pixels to blank - REQUIRES A SHOW ALL
void setAllBlank(){
  for (int i=0;i<NUMROW;i++){
    for(int j=0;j<NUMCOL;j++){
      setUpRC(i,j,colors[BLANK]);
    }
  }
}

void showAllColor(uint32_t color) {
  for (int i=0; i<NUMROW; i++) {
    for (int j=0; j<NUMCOL; j++) {
      setUpRC(i, j, color);
    }
  }
  showAll();
}

