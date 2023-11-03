#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
  printf("Enter the UPC code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

  int first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  int second_sum = i2 + i4 + i6 + i8 + i10;
  int total = 3 * first_sum + second_sum;
  int check_digit = 9 - ((total - 1) % 10);

  if (check_digit == i12)
  {
    printf("VALID");
  }
  else
  {
    printf("NOT VALID");
  }

  return 0;
}
