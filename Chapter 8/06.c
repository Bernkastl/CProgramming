#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 80

int main(void)
{
  char message[MAX_LENGTH];
  printf("Enter message: ");
  fgets(message, 80, stdin);

  printf("In B1FF-speak: ");
  for (size_t i = 0; message[i] != '\n'; i++)
  {
    char current_char = toupper(message[i]);

    switch (current_char)
    {
    case 'A':
      putchar('4');
      break;
    case 'B':
      putchar('8');
      break;
    case 'E':
      putchar('3');
      break;
    case 'I':
      putchar('1');
      break;
    case 'O':
      putchar('0');
      break;
    case 'S':
      putchar('5');
      break;
    default:
      putchar(current_char);
      break;
    }
  }

  printf("!!!!!!!!!!");

  return 0;
}
