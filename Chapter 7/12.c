#include <stdio.h>

int main(void)
{
  printf("Enter an expression: ");
  float result;
  scanf("%f", &result);

  char c;
  float num;
  while ((c = getchar()) != '\n')
  {
    switch (c)
    {
    case '/':
      scanf("%f", &num);
      result /= num;
      break;
    case '*':
      scanf("%f", &num);
      result *= num;
      break;
    case '-':
      scanf("%f", &num);
      result -= num;
      break;
    case '+':
      scanf("%f", &num);
      result += num;
      break;
    default:
      break;
    }
  }

  printf("Value of expression: %.2f", result);

  return 0;
}
