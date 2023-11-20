#include <stdio.h>

int main(void)
{
  int days, starting_day;
  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting_day);

  int lines = 1;
  for (int i = 0; i < starting_day - 1; i++, lines++)
  {
    printf("   ");
  }
  
  for (int i = 1; i <= days; i++, lines++)
  {
    printf("%3d", i);
    if (lines % 7 == 0)
    {
      printf("\n");
    }
  }
  
  return 0;
}
