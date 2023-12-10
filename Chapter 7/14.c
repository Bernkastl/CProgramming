#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("Enter a positive number: ");
  float x;
  scanf("%f", &x);

  float y = 1, div, avg, prev_y;
  do
  {
      div = x / y;
      avg = (y + div) / 2;
      prev_y = y;
      y = avg;
  } while (fabs(prev_y - y) > 0.00001);
  
  printf("Square root: %.5f", y);

  return 0;
}
