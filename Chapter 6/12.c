#include <stdio.h>

int main(void)
{
  float epsilon;
  printf("Enter epsilon: ");
  scanf("%f", &epsilon);

  float sum = 0;
  float term = 0;

  int i = 0;
  do
  {
    float factorial = 1;
    for (int f = 2; f <= i; f++)
    {
      factorial *= f;
    }

    term = 1 / factorial;
    sum += term;
    i++;
  } while (term > epsilon);

  printf("The sum of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! where epsilon is %f is %f", epsilon, sum);

  return 0;
}
