#include <stdio.h>

int main(void)
{
  int num1, num2, num3, num4;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  int largest_group_one, largest_group_two, largest;
  int smallest_group_one, smallest_group_two, smallest;

  if (num1 > num2)
  {
    largest_group_one = num1;
    smallest_group_one = num2;
  }
  else
  {
    largest_group_one = num2;
    smallest_group_one = num1;
  }

  if (num3 > num4)
  {
    largest_group_two = num3;
    smallest_group_two = num4;
  }
  else
  {
    largest_group_two = num4;
    smallest_group_two = num3;
  }

  if (largest_group_one > largest_group_two)
  {
    largest = largest_group_one;
  }
  else
  {
    largest = largest_group_two;
  }

  if (smallest_group_one < smallest_group_two)
  {
    smallest = smallest_group_one;
  }
  else
  {
    smallest = smallest_group_two;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
