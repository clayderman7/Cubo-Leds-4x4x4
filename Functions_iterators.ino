
void FuncIterator(byte iteratingArray[], int timer, int turn, int arraySize, bool reverse)
{
  do
  {
    for (int i = 0; i < arraySize; i++)
    {
      TurnOnLed(iteratingArray[i]);
      delay(timer);
      if (i == arraySize - 1 && reverse == true)
      {
        for (int j = arraySize; j >= 0; j--)
        {
          TurnOnLed(iteratingArray[j]);
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
    for (int d = 0; d < 4; d++ )                      // dimension
    {
      for (int f = 0; f < 4; f++ )                    // row
      {
        for (int c = 3; c >= 0; c--)                  // column
        {
          TurnOnLed(arrMultiDimensional[d][f][c]);
          delay(timer);
        }
      }
    }
    turn--;
  } while (turn != 0);
}

void WormFunc(byte thisArray[34][8], int turn, int timer)
{
  do
  {
    for (int i = 0; i < 34; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        TurnOnLed(thisArray[i][j]);
        delay(timer);
      }
    }
    for (int i = 33; i >= 0; i--)
    {
      for (int j = 7; j >= 0; j--)
      {
        TurnOnLed(thisArray[i][j]);
        delay(timer);
      }
    }
    turn--;
  } while (turn != 0);
}
