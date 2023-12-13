#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    while (n > 0)
    {
      digit = n % 10;
      digit_seen[digit]++;
      n /= 10;
    }

    printf("%-12s", "Digit:");
    for (int i = 0; i < 10; i++)
    {
      printf("%3d", i);
    }
    printf("\n");

    printf("%-12s", "Occurrences:");
    for (int i = 0; i < 10; i++)
    {
      printf("%3d", digit_seen[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
      digit_seen[i] = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);
  }

  return 0;
}
