#include <stdio.h>

int main(void)
{
  int item_number;
  printf("Enter item number: ");
  scanf("%d", &item_number);

  float unit_price;
  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  int day, month, year;
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit Price\tPurchase Date\n");
  printf("%d\t$%8.2f\t%d/%d/%d\n", item_number, unit_price, month, day, year);

  return 0;
}
