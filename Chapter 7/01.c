#include <stdio.h>

/* smallest values that cause failures when we change the type of i
 * int 46341 (32 bits)
 * short 182 (16 bits)
 * long 46341 (32 bits)
/*

int main(void)
{
  int n;
  long i;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10ld%10ld\n", i, (long) i * i);

  return 0;
}
