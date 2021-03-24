
void FuncIterator(byte iteratingArray[], int timer, int turn, int arraySize, bool reverse)
{

  do
  {
    for (int i = 0; i < arraySize; i++)
    {
      turnOnLed(iteratingArray[i]);
      delay(timer);
      if (i == arraySize - 1 && reverse == true)
      {
        for (int j = arraySize; j >= 0; j--)
        {
          turnOnLed(iteratingArray[j]);
          delay(timer);
        }
      }
    }
    turn--;
  } while (turn != 0);

}


void FuncIteratorMultiDimensional(byte arrMultiDimensional[4][4][4], int turn, int timer)
{

  do
  {
    for (int d = 0; d < 4; d++ )
    {
      for (int f = 0; f < 4; f++ )
      {
        for (int c = 3; c >= 0; c--)
        {
          turnOnLed(arrMultiDimensional[d][f][c]);
          delay(timer);
        }
      }
    }

    turn--;
  } while (turn != 0);

}


void wormFunc(byte biDimArray[33][8], int turn, int timer)
{

  do
  {
    for (int i = 0; i < 33; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        turnOnLed(biDimArray[i][j]);
        delay(timer);
      }
    }
    for (int i = 32; i >= 0; i--)
    {
      for (int j = 7; j >= 0; j--)
      {
        turnOnLed(worm[i][j]);
        delay(timer);
      }
    }
    turn--;
  } while (turn != 0);
}
