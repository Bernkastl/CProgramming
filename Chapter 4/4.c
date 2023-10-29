#include <stdio.h>

int main(void)
{
  
  int number;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);

  printf("In octal, your number is: %o", number);

  return 0;
}
