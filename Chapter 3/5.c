#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
  printf("Enter the numbers from 1 to 16 in any order: ");

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11,
        &d12, &d13, &d14, &d15, &d16);

  printf("%3d %3d %3d %3d\n", d1, d2, d3, d4);
  printf("%3d %3d %3d %3d\n", d5, d6, d7, d8);
  printf("%3d %3d %3d %3d\n", d9, d10, d11, d12);
  printf("%3d %3d %3d %3d\n", d13, d14, d15, d16);

  printf("\nRow sums: %d %d %d %d\n", d1 + d2 + d3 + d4, d5 + d6 + d7 + d8, d9 + d10 + d11 + d12, d13 + d14 + d15 + d16);

  printf("Column sums: %d %d %d %d\n", d1 + d5 + d9 + d13, d2 + d6 + d10 + d14, d3 + d7 + d11 + d15, d4 + d8 + d12 + d16);

  printf("Diagonal sums: %d %d\n", d1 + d6 + d11 + d16, d4 + d7 + d10 + d13);

  return 0;
}
