#include <stdio.h>

int main(void)
{
  int numerator, denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  int n = numerator, m = denominator;

  while (n != 0)
  {
    int rem = m % n;
    m = n;
    n = rem;
  }

  numerator /= m;
  denominator /= m;

  printf("In lowest terms: %d/%d", numerator, denominator);

  return 0;
}
