#include <stdio.h>

int main(void)
{
  printf("Enter a first and last name: ");

  char initial;
  scanf(" %c", &initial);

  while (getchar() != ' ')
    continue;

  char c;
  while ((c = getchar()) != '\n')
  {
    putchar(c);
  }
  printf(", %c.", initial);
  
  return 0;
}
