#include <Adafruit_NeoPixel.h>
#include <InteractiveWall.h>

InteractiveWall::InteractiveWall()
{

    //takes in 2 parameters, (numberOfPixelsInStrip, stripPinNumber), change accordingly if required
    strips[0] = Adafruit_NeoPixel(57, NP0);
    strips[1] = Adafruit_NeoPixel(61, NP1);
    strips[2] = Adafruit_NeoPixel(61, NP2);
    strips[3] = Adafruit_NeoPixel(61, NP3);
    strips[4] = Adafruit_NeoPixel(56, NP4);
    strips[5] = Adafruit_NeoPixel(56, NP5);
    strips[6] = Adafruit_NeoPixel(56, NP6);
    strips[7] = Adafruit_NeoPixel(61, NP7);
    strips[8] = Adafruit_NeoPixel(56, NP8);
    strips[9] = Adafruit_NeoPixel(60, NP9);
    strips[10] = Adafruit_NeoPixel(53, NP10);
    strips[11] = Adafruit_NeoPixel(57, NP11);
    strips[12] = Adafruit_NeoPixel(54, NP12);
    strips[13] = Adafruit_NeoPixel(59, NP13);

    //length of each array is different, hence the number of pixels per array is stored in array[0], and read from i=1:(array[0]-1)
    //caa 250616
    int r0c0  []  = { 3 , 0 , 1 , 2 };
    int r0c1  []  = { 3 , 3 , 4 , 5 };
    int r0c2  []  = { 3 , 6 , 7 , 8 };
    int r0c3  []  = { 3 , 9 , 10 , 11 };
    int r0c4  []  = { 3 , 12 , 13 , 14 };
    int r0c5  []  = { 3 , 15 , 16 , 17 };
    int r0c6  []  = { 3 , 18 , 19 , 20 };
    int r0c7  []  = { 3 , 21 , 22 , 23 };
    int r0c8  []  = { 3 , 24 , 25 , 26 };
    int r0c9  []  = { 3 , 27 , 28 , 29 };
    int r0c10 []  = { 3 , 30 , 31 , 32 };
    int r0c11 []  = { 3 , 33 , 34 , 35 };
    int r0c12 []  = { 3 , 36 , 37 , 38 };
    int r0c13 []  = { 3 , 39 , 40 , 41 };
    int r0c14 []  = { 2 , 42 , 43 };
    int r0c15 []  = { 2 , 44 , 45 };
    int r0c16 []  = { 2 , 46 , 47 };
    int r0c17 []  = { 2 , 48 , 49 };
    int r0c18 []  = { 3 , 50 , 51 , 52 };
    int r0c19 []  = { 4 , 53 , 54 , 55 , 56 };

    //caa 220616
    int r1c0  []  = { 3 , 0 , 1 , 2 };
    int r1c1  []  = { 3 , 3 , 4 , 5 };
    int r1c2  []  = { 3 , 6 , 7 , 8 };
    int r1c3  []  = { 3 , 9 , 10 , 11 };
    int r1c4  []  = { 3 , 12 , 13 , 14 };
    int r1c5  []  = { 3 , 15 , 16 , 17 };
    int r1c6  []  = { 3 , 18 , 19 , 20 };
    int r1c7  []  = { 3 , 21 , 22 , 23 };
    int r1c8  []  = { 3 , 24 , 25 , 26 };
    int r1c9  []  = { 3 , 27 , 28 , 29 };
    int r1c10 []  = { 3 , 30 , 31 , 32 };
    int r1c11 []  = { 3 , 33 , 34 , 35 };
    int r1c12 []  = { 2 , 36 , 37 };
    int r1c13 []  = { 2 , 38 , 39 };
    int r1c14 []  = { 2 , 40 , 41 };
    int r1c15 []  = { 2 , 42 , 43 };
    int r1c16 []  = { 3 , 44 , 45 , 46 };
    int r1c17 []  = { 3 , 47 , 48 , 49 };
    int r1c18 []  = { 4 , 50 , 51 , 52 , 53 };
    int r1c19 []  = { 7 , 54 , 55 , 56 , 57 , 58 , 59 , 60 };

    //caa 220616
    int r2c0  []  = { 3 , 0 , 1 , 2 };
    int r2c1  []  = { 3 , 3 , 4 , 5 };
    int r2c2  []  = { 3 , 6 , 7 , 8 };
    int r2c3  []  = { 3 , 9 , 10 , 11 };
    int r2c4  []  = { 3 , 12 , 13 , 14 };
    int r2c5  []  = { 3 , 15 , 16 , 17 };
    int r2c6  []  = { 3 , 18 , 19 , 20 };
    int r2c7  []  = { 3 , 21 , 22 , 23 };
    int r2c8  []  = { 3 , 24 , 25 , 26 };
    int r2c9  []  = { 4 , 27 , 28 , 29 , 30 };
    int r2c10 []  = { 3 , 31 , 32 , 33 };
    int r2c11 []  = { 3 , 34 , 35 , 36 };
    int r2c12 []  = { 3 , 37 , 38 , 39 };
    int r2c13 []  = { 3 , 40 , 41 , 42 };
    int r2c14 []  = { 2 , 43 , 44 };
    int r2c15 []  = { 2 , 45 , 46 };
    int r2c16 []  = { 3 , 47 , 48 , 49 };
    int r2c17 []  = { 3 , 50 , 51 , 52 };
    int r2c18 []  = { 4 , 53 , 54 , 55 , 56 };
    int r2c19 []  = { 4 , 57 , 58 , 59 , 60 };

    //caa 030816
    int r3c0  []  = { 3 , 0 , 1 , 2 };
    int r3c1  []  = { 3 , 3 , 4 , 5 };
    int r3c2  []  = { 3 , 6 , 7 , 8 };
    int r3c3  []  = { 3 , 9 , 10 , 11 };
    int r3c4  []  = { 3 , 12 , 13 , 14 };
    int r3c5  []  = { 3 , 15 , 16 , 17 };
    int r3c6  []  = { 3 , 18 , 19 , 20 };
    int r3c7  []  = { 3 , 21 , 22 , 23 };
    int r3c8  []  = { 3 , 24 , 25 , 26 };
    int r3c9  []  = { 3 , 27 , 28 , 29 };
    int r3c10 []  = { 3 , 30 , 31 , 32 };
    int r3c11 []  = { 3 , 33 , 34 , 35 };
    int r3c12 []  = { 2 , 36 , 37 };
    int r3c13 []  = { 2 , 38 , 39 };
    int r3c14 []  = { 2 , 40 , 41 };
    int r3c15 []  = { 2 , 42 , 43 };
    int r3c16 []  = { 3 , 44 , 45 , 46 };
    int r3c17 []  = { 3 , 47 , 48 , 49 };
    int r3c18 []  = { 4 , 50 , 51 , 52 , 53 };
    int r3c19 []  = { 7 , 54 , 55 , 56 , 57 , 58 , 59 , 60 };

    //caa 030816
    int r4c0  []  = { 2 , 0 , 1 };
    int r4c1  []  = { 3 , 2 , 3 , 4 };
    int r4c2  []  = { 3 , 5 , 6 , 7 };
    int r4c3  []  = { 3 , 8 , 9 , 10 };
    int r4c4  []  = { 3 , 11 , 12 , 13 };
    int r4c5  []  = { 3 , 14 , 15 , 16 };
    int r4c6  []  = { 3 , 17 , 18 , 19 };
    int r4c7  []  = { 3 , 20 , 21 , 22 };
    int r4c8  []  = { 3 , 23 , 24 , 25 };
    int r4c9  []  = { 3 , 26 , 27 , 28 };
    int r4c10 []  = { 2 , 29 , 30 };
    int r4c11 []  = { 2 , 31 , 32 };
    int r4c12 []  = { 2 , 33 , 34 };
    int r4c13 []  = { 2 , 35 , 36 };
    int r4c14 []  = { 2 , 37 , 38 };
    int r4c15 []  = { 2 , 39 , 40 };
    int r4c16 []  = { 3 , 41 , 42 , 43 };
    int r4c17 []  = { 3 , 44 , 45 , 46 };
    int r4c18 []  = { 4 , 47 , 48 , 49 , 50 };
    int r4c19 []  = { 5 , 51 , 52 , 53 , 54 , 55 };

    //caa 030816
    int r5c0  [] = { 3 , 0 , 1 , 2 };
    int r5c1  [] = { 3 , 3 , 4 , 5 , 6 };
    int r5c2  [] = { 3 , 7 , 8 , 9 };
    int r5c3  [] = { 3 , 9 , 10 , 11 };
    int r5c4  [] = { 3 , 12 , 13 , 14 };
    int r5c5  [] = { 3 , 15 , 16 , 17 };
    int r5c6  [] = { 3 , 18 , 19 , 20 };
    int r5c7  [] = { 3 , 21 , 22 , 23 };
    int r5c8  [] = { 3 , 24 , 25 , 26 };
    int r5c9  [] = { 2 , 27 , 28 };
    int r5c10 [] = { 2 , 29 , 30 };
    int r5c11 [] = { 2 , 31 , 32 };
    int r5c12 [] = { 2 , 33 , 34 };
    int r5c13 [] = { 2 , 35 , 36 };
    int r5c14 [] = { 2 , 37 , 38 };
    int r5c15 [] = { 2 , 39 , 40 };
    int r5c16 [] = { 3 , 41 , 42 , 43 };
    int r5c17 [] = { 3 , 44 , 45 , 46 };
    int r5c18 [] = { 4 , 47 , 48 , 49 , 50 };
    int r5c19 [] = { 5 , 51 , 52 , 53 , 54 , 55 };

    //WIRE BROKEN 040816
    int r6c0  [] = { 4 , 0 , 1 , 2 , 3 };
    int r6c1  [] = { 3 , 4 , 5 , 6 };
    int r6c2  [] = { 3 , 7 , 8 , 9 };
    int r6c3  [] = { 3 , 10 , 11 , 12 };
    int r6c4  [] = { 3 , 13 , 14 , 15 };
    int r6c5  [] = { 3 , 16 , 17 , 18 };
    int r6c6  [] = { 3 , 19 , 20 , 21 };
    int r6c7  [] = { 3 , 22 , 23 , 24 };
    int r6c8  [] = { 3 , 25 , 26 , 27 };
    int r6c9  [] = { 2 , 29 , 29 };
    int r6c10 [] = { 2 , 30 , 31 };
    int r6c11 [] = { 2 , 32 , 33 };
    int r6c12 [] = { 2 , 34 , 35 };
    int r6c13 [] = { 2 , 36 , 37 };
    int r6c14 [] = { 2 , 38 , 39 };
    int r6c15 [] = { 2 , 40 , 41 };
    int r6c16 [] = { 2 , 42 , 43 };
    int r6c17 [] = { 3 , 44 , 45 , 46 };
    int r6c18 [] = { 4 , 47 , 48 , 49 , 50 };
    int r6c19 [] = { 5 , 51 , 52 , 53 , 54 , 55 };

    //caa 030816
    int r7c0  [] = { 5 , 0 , 1 , 2 , 3 , 4 };
    int r7c1  [] = { 4 , 5 , 6 , 7 , 8 };
    int r7c2  [] = { 3 , 9 , 10 , 11 };
    int r7c3  [] = { 3 , 12 , 13 , 14 };
    int r7c4  [] = { 3 , 15 , 16 , 17 };
    int r7c5  [] = { 3 , 18 , 19 , 20 };
    int r7c6  [] = { 3 , 21 , 22 , 23 };
    int r7c7  [] = { 3 , 24 , 25 , 26 };
    int r7c8  [] = { 3 , 27 , 28 , 29 };
    int r7c9  [] = { 2 , 30 , 31 };
    int r7c10 [] = { 2 , 32 , 33 };
    int r7c11 [] = { 2 , 34 , 35 };
    int r7c12 [] = { 2 , 36 , 37 };
    int r7c13 [] = { 3 , 38 , 39 , 40 };
    int r7c14 [] = { 3 , 41 , 42 , 43 };
    int r7c15 [] = { 3 , 44 , 45 , 46 };
    int r7c16 [] = { 3 , 47 , 48 , 49 };
    int r7c17 [] = { 3 , 50 , 51 , 52 };
    int r7c18 [] = { 3 , 53 , 54 , 55 };
    int r7c19 [] = { 5 , 56 , 57 , 58 , 59 , 60 };

    //caa 030816
    int r8c0  [] = { 5 , 0 , 1 , 2 , 3 , 4 };
    int r8c1  [] = { 3 , 5 , 6 , 7 , 8 };
    int r8c2  [] = { 3 , 9 , 10 , 11 };
    int r8c3  [] = { 3 , 12 , 13 , 14 };
    int r8c4  [] = { 3 , 15 , 16 , 17 };
    int r8c5  [] = { 2 , 18 , 19 };
    int r8c6  [] = { 2 , 20 , 21 };
    int r8c7  [] = { 2 , 22 , 23 };
    int r8c8  [] = { 2 , 24 , 25 };
    int r8c9  [] = { 2 , 26 , 27 };
    int r8c10 [] = { 2 , 28 , 29 };
    int r8c11 [] = { 2 , 30 , 31 };
    int r8c12 [] = { 2 , 32 , 33 };
    int r8c13 [] = { 3 , 34 , 35 , 36 };
    int r8c14 [] = { 3 , 37 , 38 , 39 };
    int r8c15 [] = { 3 , 40 , 41 , 42 };
    int r8c16 [] = { 3 , 43 , 44 , 45 };
    int r8c17 [] = { 3 , 46 , 47 , 48 };
    int r8c18 [] = { 3 , 49 , 50 , 51 };
    int r8c19 [] = { 4 , 52 , 53 , 54 , 55 };

    //caa 030816
    int r9c0  [] = { 5 , 0 , 1 , 2 , 3 , 4 };
    int r9c1  [] = { 4 , 5 , 6 , 7 , 8 };
    int r9c2  [] = { 3 , 9 , 10 , 11 };
    int r9c3  [] = { 2 , 12 , 13 };
    int r9c4  [] = { 2 , 14 , 15 };
    int r9c5  [] = { 2 , 16 , 17 };
    int r9c6  [] = { 2 , 18 , 19 };
    int r9c7  [] = { 3 , 20 , 21 , 22 };
    int r9c8  [] = { 3 , 23 , 24 , 25 };
    int r9c9  [] = { 3 , 26 , 27 , 28 };
    int r9c10 [] = { 3 , 29 , 30 , 31 };
    int r9c11 [] = { 3 , 32 , 33 , 34 };
    int r9c12 [] = { 3 , 35 , 36 , 37 };
    int r9c13 [] = { 3 , 38 , 39 , 40 };
    int r9c14 [] = { 3 , 41 , 42 , 43 };
    int r9c15 [] = { 3 , 44 , 45 , 46 };
    int r9c16 [] = { 3 , 47 , 48 , 49 };
    int r9c17 [] = { 3 , 50 , 51 , 52 };
    int r9c18 [] = { 3 , 53 , 54 , 55 };
    int r9c19 [] = { 4 , 56 , 57 , 58 , 59 };

    //caa 030816
    int r10c0 [] = { 5 , 0 , 1 , 2 , 3 , 4 };
    int r10c1 [] = { 4 , 5 , 6 , 7 , 8 };
    int r10c2 [] = { 3 , 9 , 10 , 11 };
    int r10c3 [] = { 3 , 12 , 13 , 14 };
    int r10c4 [] = { 2 , 15 , 16 };
    int r10c5 [] = { 2 , 17 , 18 };
    int r10c6 [] = { 2 , 19 , 20 };
    int r10c7 [] = { 3 , 21 , 22 , 23 };
    int r10c8 [] = { 2 , 24 , 25 };
    int r10c9 [] = { 2 , 26 , 27 };
    int r10c10[] = { 2 , 28 , 29 };
    int r10c11[] = { 2 , 30 , 31 };
    int r10c12[] = { 2 , 32 , 33 };
    int r10c13[] = { 2 , 34 , 35 };
    int r10c14[] = { 2 , 36 , 37 };
    int r10c15[] = { 3 , 38 , 39 , 40 };
    int r10c16[] = { 3 , 41 , 42 , 43 };
    int r10c17[] = { 3 , 44 , 45 , 46 };
    int r10c18[] = { 3 , 47 , 48 , 49 };
    int r10c19[] = { 3 , 50 , 51 , 52 };

    //caa 040816
    int r11c0 [] = { 6 , 0 , 1 , 2 , 3 , 4 , 5 };
    int r11c1 [] = { 4 , 6 , 7 , 8 , 9 };
    int r11c2 [] = { 3 , 10 , 11 , 12 };
    int r11c3 [] = { 2 , 13 , 14 };
    int r11c4 [] = { 2 , 15 , 16 };
    int r11c5 [] = { 2 , 17 , 18 };
    int r11c6 [] = { 2 , 19 , 20 };
    int r11c7 [] = { 3 , 21 , 22 , 23 };
    int r11c8 [] = { 3 , 24 , 25 , 26};
    int r11c9 [] = { 3 , 27 , 28 , 29 };
    int r11c10[] = { 3 , 30 , 31 , 32 };
    int r11c11[] = { 2 , 33 , 34 };
    int r11c12[] = { 2 , 35 , 36 };
    int r11c13[] = { 2 , 37 , 38 };
    int r11c14[] = { 3 , 39 , 40 , 41 };
    int r11c15[] = { 2 , 42 , 43 };
    int r11c16[] = { 3 , 44 , 45 , 46 };
    int r11c17[] = { 3 , 47 , 48 , 49 };
    int r11c18[] = { 3 , 50 , 51 , 52 };
    int r11c19[] = { 4 , 53 , 54 , 55 , 56 };

    //BROKEN AT col>=5 040816
    int r12c0 [] = { 6 , 0 , 1 , 2 , 3 , 4 , 5 };
    int r12c1 [] = { 3 , 6 , 7 , 8 };
    int r12c2 [] = { 2 , 9 , 10 };
    int r12c3 [] = { 2 , 11 , 12 };
    int r12c4 [] = { 2 , 13 , 14 };
    int r12c5 [] = { 2 , 15 , 16 };
    int r12c6 [] = { 2 , 17 , 18 };
    int r12c7 [] = { 2 , 19 , 20 };
    int r12c8 [] = { 3 , 21 , 22 , 23 };
    int r12c9 [] = { 3 , 24 , 25 , 26 };
    int r12c10[] = { 3 , 27 , 28 , 29 };
    int r12c11[] = { 2 , 30 , 31 };
    int r12c12[] = { 2 , 32 , 33 };
    int r12c13[] = { 2 , 34 , 35 };
    int r12c14[] = { 2 , 36 , 37 };
    int r12c15[] = { 3 , 38 , 39 , 40 };
    int r12c16[] = { 3 , 41 , 42 , 43 };
    int r12c17[] = { 3 , 44 , 45 , 46 };
    int r12c18[] = { 3 , 47 , 48 , 49 };
    int r12c19[] = { 4 , 50 , 51 , 52 , 53 };

    //caa 250616
    int r13c0 [] = { 3 , 0 , 1 , 2 };
    int r13c1 [] = { 3 , 3 , 4 , 5 };
    int r13c2 [] = { 3 , 6 , 7 , 8 };
    int r13c3 [] = { 3 , 9 , 10 , 11 };
    int r13c4 [] = { 3 , 12 , 13 , 14 };
    int r13c5 [] = { 2 , 15 , 16 };
    int r13c6 [] = { 3 , 17 , 18 , 19 };
    int r13c7 [] = { 3 , 20 , 21 , 22 };
    int r13c8 [] = { 3 , 23 , 24 , 25 };
    int r13c9 [] = { 3 , 26 , 27 , 28 };
    int r13c10[] = { 3 , 29 , 30 , 31 };
    int r13c11[] = { 3 , 32 , 33 , 34 };
    int r13c12[] = { 3 , 35 , 36 , 37 };
    int r13c13[] = { 3 , 38 , 39 , 40 };
    int r13c14[] = { 3 , 41 , 42 , 43 };
    int r13c15[] = { 3 , 44 , 45 , 46 };
    int r13c16[] = { 3 , 47 , 48 , 49 };
    int r13c17[] = { 3 , 50 , 51 , 52 };
    int r13c18[] = { 3 , 53 , 54 , 55 };
    int r13c19[] = { 3 , 56 , 57 , 58 };

    /*
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
    */

    //had to do this because of pointer declaration issues in InteractiveWall.h
    pixels[0][0] = r0c0;
    pixels[0][1] = r0c1;
    pixels[0][2] = r0c2;
    pixels[0][3] = r0c3;
    pixels[0][4] = r0c4;
    pixels[0][5] = r0c5;
    pixels[0][6] = r0c6;
    pixels[0][7] = r0c7;
    pixels[0][8] = r0c8;
    pixels[0][9] = r0c9;
    pixels[0][10] = r0c10;
    pixels[0][11] = r0c11;
    pixels[0][12] = r0c12;
    pixels[0][13] = r0c13;
    pixels[0][14] = r0c14;
    pixels[0][15] = r0c15;
    pixels[0][16] = r0c16;
    pixels[0][17] = r0c17;
    pixels[0][18] = r0c18;
    pixels[0][19] = r0c19;
    pixels[1][0] = r1c0;
    pixels[1][1] = r1c1;
    pixels[1][2] = r1c2;
    pixels[1][3] = r1c3;
    pixels[1][4] = r1c4;
    pixels[1][5] = r1c5;
    pixels[1][6] = r1c6;
    pixels[1][7] = r1c7;
    pixels[1][8] = r1c8;
    pixels[1][9] = r1c9;
    pixels[1][10] = r1c10;
    pixels[1][11] = r1c11;
    pixels[1][12] = r1c12;
    pixels[1][13] = r1c13;
    pixels[1][14] = r1c14;
    pixels[1][15] = r1c15;
    pixels[1][16] = r1c16;
    pixels[1][17] = r1c17;
    pixels[1][18] = r1c18;
    pixels[1][19] = r1c19;
    pixels[2][0] = r2c0;
    pixels[2][1] = r2c1;
    pixels[2][2] = r2c2;
    pixels[2][3] = r2c3;
    pixels[2][4] = r2c4;
    pixels[2][5] = r2c5;
    pixels[2][6] = r2c6;
    pixels[2][7] = r2c7;
    pixels[2][8] = r2c8;
    pixels[2][9] = r2c9;
    pixels[2][10] = r2c10;
    pixels[2][11] = r2c11;
    pixels[2][12] = r2c12;
    pixels[2][13] = r2c13;
    pixels[2][14] = r2c14;
    pixels[2][15] = r2c15;
    pixels[2][16] = r2c16;
    pixels[2][17] = r2c17;
    pixels[2][18] = r2c18;
    pixels[2][19] = r2c19;
    pixels[3][0] = r3c0;
    pixels[3][1] = r3c1;
    pixels[3][2] = r3c2;
    pixels[3][3] = r3c3;
    pixels[3][4] = r3c4;
    pixels[3][5] = r3c5;
    pixels[3][6] = r3c6;
    pixels[3][7] = r3c7;
    pixels[3][8] = r3c8;
    pixels[3][9] = r3c9;
    pixels[3][10] = r3c10;
    pixels[3][11] = r3c11;
    pixels[3][12] = r3c12;
    pixels[3][13] = r3c13;
    pixels[3][14] = r3c14;
    pixels[3][15] = r3c15;
    pixels[3][16] = r3c16;
    pixels[3][17] = r3c17;
    pixels[3][18] = r3c18;
    pixels[3][19] = r3c19;
    pixels[4][0] = r4c0;
    pixels[4][1] = r4c1;
    pixels[4][2] = r4c2;
    pixels[4][3] = r4c3;
    pixels[4][4] = r4c4;
    pixels[4][5] = r4c5;
    pixels[4][6] = r4c6;
    pixels[4][7] = r4c7;
    pixels[4][8] = r4c8;
    pixels[4][9] = r4c9;
    pixels[4][10] = r4c10;
    pixels[4][11] = r4c11;
    pixels[4][12] = r4c12;
    pixels[4][13] = r4c13;
    pixels[4][14] = r4c14;
    pixels[4][15] = r4c15;
    pixels[4][16] = r4c16;
    pixels[4][17] = r4c17;
    pixels[4][18] = r4c18;
    pixels[4][19] = r4c19;
    pixels[5][0] = r5c0;
    pixels[5][1] = r5c1;
    pixels[5][2] = r5c2;
    pixels[5][3] = r5c3;
    pixels[5][4] = r5c4;
    pixels[5][5] = r5c5;
    pixels[5][6] = r5c6;
    pixels[5][7] = r5c7;
    pixels[5][8] = r5c8;
    pixels[5][9] = r5c9;
    pixels[5][10] = r5c10;
    pixels[5][11] = r5c11;
    pixels[5][12] = r5c12;
    pixels[5][13] = r5c13;
    pixels[5][14] = r5c14;
    pixels[5][15] = r5c15;
    pixels[5][16] = r5c16;
    pixels[5][17] = r5c17;
    pixels[5][18] = r5c18;
    pixels[5][19] = r5c19;
    pixels[6][0] = r6c0;
    pixels[6][1] = r6c1;
    pixels[6][2] = r6c2;
    pixels[6][3] = r6c3;
    pixels[6][4] = r6c4;
    pixels[6][5] = r6c5;
    pixels[6][6] = r6c6;
    pixels[6][7] = r6c7;
    pixels[6][8] = r6c8;
    pixels[6][9] = r6c9;
    pixels[6][10] = r6c10;
    pixels[6][11] = r6c11;
    pixels[6][12] = r6c12;
    pixels[6][13] = r6c13;
    pixels[6][14] = r6c14;
    pixels[6][15] = r6c15;
    pixels[6][16] = r6c16;
    pixels[6][17] = r6c17;
    pixels[6][18] = r6c18;
    pixels[6][19] = r6c19;
    pixels[7][0] = r7c0;
    pixels[7][1] = r7c1;
    pixels[7][2] = r7c2;
    pixels[7][3] = r7c3;
    pixels[7][4] = r7c4;
    pixels[7][5] = r7c5;
    pixels[7][6] = r7c6;
    pixels[7][7] = r7c7;
    pixels[7][8] = r7c8;
    pixels[7][9] = r7c9;
    pixels[7][10] = r7c10;
    pixels[7][11] = r7c11;
    pixels[7][12] = r7c12;
    pixels[7][13] = r7c13;
    pixels[7][14] = r7c14;
    pixels[7][15] = r7c15;
    pixels[7][16] = r7c16;
    pixels[7][17] = r7c17;
    pixels[7][18] = r7c18;
    pixels[7][19] = r7c19;
    pixels[8][0] = r8c0;
    pixels[8][1] = r8c1;
    pixels[8][2] = r8c2;
    pixels[8][3] = r8c3;
    pixels[8][4] = r8c4;
    pixels[8][5] = r8c5;
    pixels[8][6] = r8c6;
    pixels[8][7] = r8c7;
    pixels[8][8] = r8c8;
    pixels[8][9] = r8c9;
    pixels[8][10] = r8c10;
    pixels[8][11] = r8c11;
    pixels[8][12] = r8c12;
    pixels[8][13] = r8c13;
    pixels[8][14] = r8c14;
    pixels[8][15] = r8c15;
    pixels[8][16] = r8c16;
    pixels[8][17] = r8c17;
    pixels[8][18] = r8c18;
    pixels[8][19] = r8c19;
    pixels[9][0] = r9c0;
    pixels[9][1] = r9c1;
    pixels[9][2] = r9c2;
    pixels[9][3] = r9c3;
    pixels[9][4] = r9c4;
    pixels[9][5] = r9c5;
    pixels[9][6] = r9c6;
    pixels[9][7] = r9c7;
    pixels[9][8] = r9c8;
    pixels[9][9] = r9c9;
    pixels[9][10] = r9c10;
    pixels[9][11] = r9c11;
    pixels[9][12] = r9c12;
    pixels[9][13] = r9c13;
    pixels[9][14] = r9c14;
    pixels[9][15] = r9c15;
    pixels[9][16] = r9c16;
    pixels[9][17] = r9c17;
    pixels[9][18] = r9c18;
    pixels[9][19] = r9c19;
    pixels[10][0] = r10c0;
    pixels[10][1] = r10c1;
    pixels[10][2] = r10c2;
    pixels[10][3] = r10c3;
    pixels[10][4] = r10c4;
    pixels[10][5] = r10c5;
    pixels[10][6] = r10c6;
    pixels[10][7] = r10c7;
    pixels[10][8] = r10c8;
    pixels[10][9] = r10c9;
    pixels[10][10] = r10c10;
    pixels[10][11] = r10c11;
    pixels[10][12] = r10c12;
    pixels[10][13] = r10c13;
    pixels[10][14] = r10c14;
    pixels[10][15] = r10c15;
    pixels[10][16] = r10c16;
    pixels[10][17] = r10c17;
    pixels[10][18] = r10c18;
    pixels[10][19] = r10c19;
    pixels[11][0] = r11c0;
    pixels[11][1] = r11c1;
    pixels[11][2] = r11c2;
    pixels[11][3] = r11c3;
    pixels[11][4] = r11c4;
    pixels[11][5] = r11c5;
    pixels[11][6] = r11c6;
    pixels[11][7] = r11c7;
    pixels[11][8] = r11c8;
    pixels[11][9] = r11c9;
    pixels[11][10] = r11c10;
    pixels[11][11] = r11c11;
    pixels[11][12] = r11c12;
    pixels[11][13] = r11c13;
    pixels[11][14] = r11c14;
    pixels[11][15] = r11c15;
    pixels[11][16] = r11c16;
    pixels[11][17] = r11c17;
    pixels[11][18] = r11c18;
    pixels[11][19] = r11c19;
    pixels[12][0] = r12c0;
    pixels[12][1] = r12c1;
    pixels[12][2] = r12c2;
    pixels[12][3] = r12c3;
    pixels[12][4] = r12c4;
    pixels[12][5] = r12c5;
    pixels[12][6] = r12c6;
    pixels[12][7] = r12c7;
    pixels[12][8] = r12c8;
    pixels[12][9] = r12c9;
    pixels[12][10] = r12c10;
    pixels[12][11] = r12c11;
    pixels[12][12] = r12c12;
    pixels[12][13] = r12c13;
    pixels[12][14] = r12c14;
    pixels[12][15] = r12c15;
    pixels[12][16] = r12c16;
    pixels[12][17] = r12c17;
    pixels[12][18] = r12c18;
    pixels[12][19] = r12c19;
    pixels[13][0] = r13c0;
    pixels[13][1] = r13c1;
    pixels[13][2] = r13c2;
    pixels[13][3] = r13c3;
    pixels[13][4] = r13c4;
    pixels[13][5] = r13c5;
    pixels[13][6] = r13c6;
    pixels[13][7] = r13c7;
    pixels[13][8] = r13c8;
    pixels[13][9] = r13c9;
    pixels[13][10] = r13c10;
    pixels[13][11] = r13c11;
    pixels[13][12] = r13c12;
    pixels[13][13] = r13c13;
    pixels[13][14] = r13c14;
    pixels[13][15] = r13c15;
    pixels[13][16] = r13c16;
    pixels[13][17] = r13c17;
    pixels[13][18] = r13c18;
    pixels[13][19] = r13c19;

    //initializing default 7-color wheel
    colors[RED] = mapColor(255,0,0);
    colors[ORANGE] = mapColor(255,127,0);
    colors[YELLOW] = mapColor(255,255,0);
    colors[GREEN] = mapColor(0,255,0);
    colors[TEAL] = mapColor(0,255,255);
    colors[BLUE] = mapColor(0,0,255);
    colors[MAGENTA] = mapColor(255,0,255);
    colors[BLANK] = mapColor(0,0,0);
}

// public

void InteractiveWall::initialize() {
    for (int i=0; i<NUMSTRIPS; i++) {
        strips[i].begin();
        strips[i].show();
    }
}

void InteractiveWall::test() {
    setColor(0,0, colors[RED]);
    strips[0].show();
}

void InteractiveWall::setColor(int row, int col, uint32_t color) {
  //exits when out-of-bounds coordinates received
  if (row<0 || col<0 || row>=NUMROW || col>=NUMCOL) return;

  //reads length of array from array[0], then iterates from i=1 to i=array[0]
  for(int i=1; i<*pixels[row][col]+1; i++){
    strips[row].setPixelColor(*(pixels[row][col]+i), color);
  }
}

void InteractiveWall::setColor(uint32_t color) {
  for (int i=0; i<NUMROW; i++) for (int j=0; j<NUMCOL; j++) setColor(i,j,color);
}

void InteractiveWall::showColor(int row, int col, uint32_t color) {
  if (row<0 || col<0 || row>=NUMROW || col>=NUMCOL) return;

  setColor(row, col, color);
  strips[row].show();
}

void InteractiveWall::showAll(void) {
  for (int i=0; i<NUMSTRIPS; i++) strips[i].show();
}

void InteractiveWall::blank(void) {
  setColor(colors[BLANK]);
}

uint32_t InteractiveWall::getColor(int index) {
  return colors[index];
}

uint32_t InteractiveWall::mapColor(uint8_t r, uint8_t g, uint8_t b) {
  return ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
}

