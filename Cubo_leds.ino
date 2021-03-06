
const byte row1 = 2, row2 = 3, row3 = 4, row4 = 5;
const byte column1 = 6, column2 = 7, column3 = 8, column4 = 9;
const byte floor1 = 10, floor2 = 11, floor3 = 12, floor4 = 13;

byte multiDimArray[4][4][4] =
{
  { {61, 52, 41, 40 },  {21, 28, 1, 16 }, {62, 51, 45, 36 },  {25, 24, 5, 12 } },
  { {63, 50, 46, 35 },  {29, 20, 9, 8 },  {64, 49, 47, 34 },  {20, 19, 13, 4 } },
  { {60, 53, 48, 33 },  {31, 18, 14, 3 }, {56, 57, 44, 37 },  {32, 17, 15, 2 } },
  { {52, 61, 40, 41 },  {28, 21, 16, 1 }, {51, 62, 36, 45 },  {24, 25, 12, 5 } }
};

byte worm[34][8] =
{
  {1, 5, 9, 13, 5, 9, 13, 14}, {9, 13, 14, 15, 13, 14, 15, 16}, {14, 15, 16, 12, 15, 16, 12, 8}, {16, 12, 8, 4, 12, 8, 4, 20},
  {8, 4, 20, 36, 4, 20, 36, 52}, {20, 36, 52, 51, 36, 52, 51, 50}, {52, 51, 50, 49, 51, 50, 49, 33}, {50, 49, 33, 17, 49, 33, 17, 1},
  {33, 17, 1, 6, 17, 1, 6, 11}, {1, 6, 11, 16, 6, 11, 16, 32}, {11, 16, 32, 48, 16, 32, 48, 64}, {32, 48, 64, 60, 48, 64, 60, 56},
  {64, 60, 56, 52, 60, 56, 52, 55}, {56, 52, 55, 58, 52, 55, 58, 61}, {55, 58, 61, 45, 58, 61, 45, 29}, {61, 45, 29, 13, 45, 29, 13, 10},
  {29, 13, 10, 7, 13, 10, 7, 4}, {10, 7, 4, 3, 7, 4, 3, 2}, {4, 3, 2, 6, 3, 2, 6, 11}, {2, 6, 11, 27, 6, 11, 27, 43},
  {11, 27, 43, 59, 27, 43, 59, 55}, {43, 59, 55, 54, 59, 55, 54, 58}, {55, 54, 58, 57, 54, 58, 57, 53}, {58, 57, 53, 37, 57, 53, 37, 21},
  {53, 37, 21, 5, 37, 21, 5, 6}, {21, 5, 6, 7, 5, 6, 7, 8}, { 6, 7, 8, 24, 7, 8, 24, 40}, {8, 24, 40, 56, 24, 40, 56, 60},
  {40, 56, 60, 44, 56, 60, 44, 28}, {60, 44, 28, 12, 44, 28, 12, 11}, {28, 12, 11, 10, 12, 11, 10, 9}, {11, 10, 9, 25, 10, 9, 25, 41},
  {9, 25, 41, 57, 25, 41, 57, 61}, {41, 57, 61, 57, 61, 61, 45, 29}
};

byte efecto1[] = {22, 23, 27, 26, 42, 38, 39, 43, 44, 40, 24, 28, 32, 48, 64, 60, 56, 52, 36, 20, 4, 8, 12, 16, 43, 42, 39, 38, 27, 26,
                  23, 22, 21, 25, 41, 37, 33, 17, 1, 5, 9, 13, 29, 45, 61, 57, 53, 49};

byte espiral[] = {61, 62, 63, 64, 48, 32, 16, 15, 14, 13, 29, 45, 58, 59, 60, 44, 28, 12, 11, 10, 9, 25, 41, 57, 54, 55, 56, 40, 24, 8,
                  7, 6, 5, 21, 37, 53, 50, 51, 52, 36, 20, 4, 3, 2, 1, 17, 33, 49, 50, 35, 19, 18, 39, 23, 22, 43, 27, 26, 47, 31, 30, 46
                 };

byte sVertical[] = {1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 17, 18, 19, 20, 24, 28, 32, 31, 30, 29, 25, 21, 33, 34, 35, 36, 40, 44, 48, 47, 46,
                    45, 41, 37, 49, 50, 51, 52, 56, 60, 64, 63, 62, 61, 57, 53, 54, 55, 59, 58, 38, 39, 43, 42, 22, 23, 27, 26, 6, 7, 11, 10
                   };

byte ring1[] = {9, 5, 17, 33, 53, 57, 45, 29, 10, 6, 18, 34, 54, 58, 46, 30, 11, 7, 19, 35, 55, 59, 47, 31, 12, 8, 20, 36, 56, 60, 48, 32,3, 2,
                17, 33, 50, 51, 36, 20, 7, 6, 21, 37, 54, 55, 40, 24, 11, 10, 25, 41, 58, 59, 44, 28, 15, 14, 29, 45, 62, 63, 48, 32};

byte diagonal[] = {4, 20, 36, 52, 8, 3, 24, 19, 40, 35, 56, 51, 12, 7, 2, 28, 23, 18, 44, 39, 34, 60, 55, 50, 16, 11, 6, 1, 32, 27, 22, 17, 48,
                   43, 38, 33, 64, 59, 54, 49, 15, 10, 5, 31, 26, 21, 47, 42, 37, 63, 58, 53, 14, 9, 30, 25, 46, 41, 62, 57, 13, 29, 45, 61};

byte diagoFromOne[] = {1, 17, 3, 49, 5, 2, 21, 18, 37, 34, 53, 50, 9, 6, 3, 25, 22, 19, 57, 54, 51, 13, 10, 7, 4, 29, 26, 23, 20, 45, 42, 39,
                       36, 61, 58, 55, 52, 14, 11, 8, 30, 27, 24, 46, 43, 40, 62, 59, 56, 15, 12, 31, 28, 47, 44, 63, 60, 16, 32, 48, 64
                      };

byte diagoFromThirteen[] = {13, 29, 45, 61, 9, 14, 25, 30, 41, 46, 57, 62, 5, 10, 15, 21, 26, 31, 37, 42, 47, 53, 58, 63, 1, 6, 11, 16, 17, 22, 27, 32, 33,
                            38, 43, 48, 49, 54, 59, 64, 2, 7, 12, 18, 23, 28, 34, 39, 44, 50, 55, 60, 3, 8, 19, 24, 35, 40, 51, 56, 4, 20, 36, 52 };

byte diagoFromSixTeen[] = {16, 32, 48, 64, 15, 12, 31, 28, 47, 44, 63, 60, 14, 11, 8, 30, 27, 24, 46, 43, 40, 62, 59, 56, 13, 10, 7, 4, 29, 26, 23, 20,
                           45, 42, 39, 36, 61, 58, 55, 52, 9, 6, 3, 25, 22, 19, 41, 38, 35, 57, 54, 51, 5, 2, 21, 18, 37, 34, 53, 50, 1, 17, 33, 49 };

byte wipeFromFront[] = {64, 48, 32, 16, 60, 44, 28, 12, 56, 40, 24, 8, 52, 36, 20, 4, 63, 47, 31, 15, 59, 43, 27, 11, 55, 39, 23, 7, 51, 35, 19, 3, 62, 46,
                        30, 14, 58, 42, 26, 10, 54, 38, 22, 6, 50, 34, 18, 2, 61, 45, 29, 13, 57, 41, 25, 9, 53, 37, 21, 5, 49, 33, 17, 1 };

byte turnM[] = {1, 21, 41, 61, 46, 31, 16, 28, 40, 52, 35, 18, 1, 13, 25, 37, 49, 34, 19, 4, 24, 44, 64, 47, 30, 13};

byte walking[] =
{
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 45, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 8, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 9, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 10, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 11, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 12, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 13, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 14, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 60, 15, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 16, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 29, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 30, 31, 32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 31,
  32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 32, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 46, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 47, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 48, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 61, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 62, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 63, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 64, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 60, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 59, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 58, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 57, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 53, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 54, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 55, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 56, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 52, 51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42,
  51, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 50, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 49, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 33, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 34, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 35, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 36, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 37, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 38, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 39, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 40, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 44, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 43, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 42, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 41, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 45, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 46, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 47, 48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17,
  48, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 32, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 31, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 30, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 29, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 25, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 26, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 27, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 28, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 24, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 23, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 22, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 21, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 17, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 18, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 9, 19, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 9, 13, 20, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 9, 13, 14, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 9, 13, 14, 15, 4, 3, 2, 1, 5, 6, 7, 8, 12, 11, 10, 9, 13, 14, 15, 16
};


/**********************************Longitud de los arrays unidimensionales***********************/

const int efecto1Size = (sizeof(efecto1) / sizeof(efecto1[0]));
const int sVerticalSize = (sizeof(sVertical) / sizeof(sVertical[0]));
const int espiralSize = (sizeof(espiral) / sizeof(espiral[0]));
const int diagonalSize = (sizeof(diagonal) / sizeof(diagonal[0]));
const int diagoFromOneSize = (sizeof(diagoFromOne) / sizeof(diagoFromOne[0]));
const int diagoFromThirteenSize = (sizeof(diagoFromThirteen) / sizeof(diagoFromThirteen[0]));
const int diagoFromSixTeenSize = (sizeof(diagoFromSixTeen) / sizeof(diagoFromSixTeen[0]));
const int wipeFromFrontSize = (sizeof(wipeFromFront) / sizeof(wipeFromFront[0]));
const int ring1Size = (sizeof(ring1) / sizeof(ring1[0]));
const int turnMSize = (sizeof(turnM) / sizeof(turnM[0]));
const int walkingSize = (sizeof(walking) / sizeof(walking[0]));


void setup()
{
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  randomSeed(analogRead(A0));

}


void loop()
{

  WormFunc(worm, 2, 10);
  FuncIterator(efecto1, 18, 1, efecto1Size, true);
  FuncIterator(sVertical, 18, 1, sVerticalSize, true);
  FuncIterator(espiral, 18, 1, espiralSize, true);

  for (int i = 0; i < 300; i++) {
    TurnOnLed(random(1, 64));
    delay(15);
  }

  FuncIterator(diagonal, 4, 2, diagonalSize, true);
  FuncIterator(diagoFromOne, 4, 2, diagoFromOneSize, true);
  FuncIterator(diagoFromThirteen, 4, 2, diagoFromThirteenSize, true);
  FuncIterator(diagoFromSixTeen, 4, 2, diagoFromSixTeenSize, true);
  FuncIterator(wipeFromFront, 4, 2, wipeFromFrontSize, true);
  FuncIterator(ring1, 5, 6, ring1Size, true);
  FuncIterator(turnM, 25, 7, turnMSize, false);
  FuncIterator(walking, 3, 1, walkingSize, true);
  FuncIteratorMultiDimensional(multiDimArray, 7, 6);
  WormFunc(worm, 2, 10);
  TwoWaysFunc(twoWays, 3, 10);

  for (int i = 0; i < 300; i++) {
    TurnOnLed(random(1, 64));
    delay(12);
  }

}
