#include <stdio.h>

int main(void)
{
  // using short to store factorial: largest supported value of num is 8
  // using int to store factorial: largest supported value of num is 12
  // using long to store factorial: largest supported value of num is 12
  // using long long to store factorial: largest supported value of num is 20
  // using float to store factorial: largest supported value of num is 13
  // using double to store factorial: largest supported value of num is 22
  // using long double to store factorial: largest supported value of num is 0

  printf("Enter a positive integer: ");
  int num;
  scanf("%d", &num);

  int n = num;
  int factorial = 1;

  while (n > 1)
  {
    factorial *= n;
    n--;
  }

  printf("Factorial of %d: %d\n", num, factorial);

  return 0;
}
