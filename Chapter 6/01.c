#include <stdio.h>

int main(void)
{
  float number;
  printf("Enter a number: ");
  scanf("%f", &number);

  float largest = -1;
  while (number > 0)
  {
    if (number > largest)
    {
      largest = number;
    }
    printf("Enter a number: ");
    scanf("%f", &number);
  }

  printf("The largest number entered was %.2f", largest);

  return 0;
}
