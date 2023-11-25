#include <stdio.h>

int main(void)
{
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  float sum = 0;
  for (int i = 0; i <= n; i++)
  {
    float factorial = 1;
    for (int f = 2; f <= i; f++)
    {
      factorial *= f;
    }

    sum += 1 / factorial;
  }

  printf("The sum of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! where n = %d is %f", n, sum);

  return 0;
}
