#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void)
{
  int numbers [ROWS][COLUMNS] = {0};

  for (int i = 0; i < ROWS; i++)
  {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < COLUMNS; j++)
    {
      scanf("%d", &numbers[i][j]);
    }
  }

  printf("\nRow totals: ");
  for (int i = 0; i < ROWS; i++)
  {
    int sum = 0;
    for (int j = 0; j < COLUMNS; j++)
    {
      sum += numbers[i][j];
    }
    printf("%d ", sum);
    sum = 0;
  }

  printf("\nColumn totals: ");
  for (int i = 0; i < ROWS; i++)
  {
    int sum = 0;
    for (int j = 0; j < COLUMNS; j++)
    {
      sum += numbers[j][i];
    }
    printf("%d ", sum);
    sum = 0;
  }
  
  return 0;
}
