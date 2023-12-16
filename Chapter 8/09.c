#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_BOUND 10

enum Direction
{
  Up,
  Right,
  Down,
  Left
};

int main(void)
{
  srand((unsigned)time(NULL));

  char table[MAX_BOUND][MAX_BOUND];
  for (int i = 0; i < MAX_BOUND; i++)
  {
    for (int j = 0; j < MAX_BOUND; j++)
    {
      table[i][j] = '.';
    }
  }

  table[0][0] = 'A';
  int x = 0;
  int y = 0;

  char current_letter = 'B';

  int failed_movements[4] = {0, 0, 0, 0};

  while (current_letter <= 'Z')
  {
    int allFail = 1;
    for (int i = 0; i < 4; i++)
    {
      if (failed_movements[i] != 1)
      {
        allFail = 0;
        break;
      }
    }

    if (allFail == 1)
      break;

    int pos = rand() % 4;

    int test_x = x, test_y = y;
    switch (pos)
    {
    case Up:
      test_y++;
      break;
    case Right:
      test_x++;
      break;
    case Down:
      test_y--;
      break;
    case Left:
      test_x--;
      break;
    default:
      break;
    }

    if (test_x < 10 && test_x >= 0 && test_y < 10 && test_y >= 0 && table[test_x][test_y] == '.')
    {
      x = test_x;
      y = test_y;
      table[x][y] = current_letter++;
      for (int i = 0; i < 4; i++)
      {
        failed_movements[i] = 0;
      }
    }
    else
    {
      failed_movements[pos] = 1;
    }
  }

  for (int i = 0; i < MAX_BOUND; i++)
  {
    for (int j = 0; j < MAX_BOUND; j++)
    {
      printf("%-2c", table[i][j]);
    }
    printf("\n");
  }

  return 0;
}
