#ifndef  _MAIN_H
#define  _MAIN_H
#include <assert.h>
#include <stdio.h>
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber) ;
extern void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
#endif