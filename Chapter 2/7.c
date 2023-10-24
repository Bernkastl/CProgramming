#include <stdio.h>

int main(void)
{
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  int twenty_bills = amount / 20;
  amount -= twenty_bills * 20;

  int ten_bills = amount / 10;
  amount -= ten_bills * 10;

  int five_bills = amount / 5;
  amount -= five_bills * 5;

  printf("$20 bills: %d\n", twenty_bills);
  printf("$10 bills: %d\n", ten_bills);
  printf(" $5 bills: %d\n", five_bills);
  printf(" $1 bills: %d\n", amount);

  return 0;
}
