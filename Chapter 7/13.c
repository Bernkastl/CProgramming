#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
  printf("Enter a sentence: ");

  char c;
  int letter_sum = 0, word_count = 0;
  bool in_word = false;

  while ((c = getchar()) != '\n')
  {
    if (isalpha(c) || ispunct(c))
    {
      letter_sum++;
      if (!in_word)
      {
        in_word = true;
        word_count++;
      }
    }
    else
    {
      in_word = false;
    }
  }

  printf("Average word length: %.1f", (float)letter_sum / word_count);

  return 0;
}
