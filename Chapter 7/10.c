#include <stdio.h>
#include <ctype.h>

int main(void)
{
  printf("Enter a sentence: ");
  char c;
  int vowel_number;

  while ((c = getchar()) != '\n')
  {
    switch (toupper(c))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowel_number++;
      break;
    default:
      break;
    }
  }

  printf("Your sentence contains %d vowels", vowel_number);

  return 0;
}
