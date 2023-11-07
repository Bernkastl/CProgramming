#include <stdio.h>

int main(void)
{
  int first_year, first_month, first_day;
  int second_year, second_month, second_day;

  printf("Enter the first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &first_month, &first_day, &first_year);

  printf("Enter the second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &second_month, &second_day, &second_year);

  if (first_year < second_year || (first_year == second_year && (first_month < second_month || (first_month == second_month && first_day < second_day))))
  {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
  }
  else if (first_year == second_year && first_month == second_month && first_day == second_day)
  {
    printf("The dates are the same\n");
  }
  else
  {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", second_month, second_day, second_year, first_month, first_day, first_year);
  }

  return 0;
}
