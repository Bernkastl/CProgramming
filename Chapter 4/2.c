#include <stdio.h>

int main(void)
{

  int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int first = num % 10;
  printf("%d", first);

  num /= 10;

  int second = num % 10;
  printf("%d", second);

  num /= 10;

  int third = num % 10;
  printf("%d", third);

  return 0;
}
