#include <stdio.h>

int main(void)
{
  int year, month, day;
  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  int earliest_year = year, earliest_month = month, earliest_day = day;

  while (year != 0 && month != 0 && day != 0)
  {
    if (year < earliest_year || (year == earliest_year && (month < earliest_month || (month == earliest_month && day < earliest_day))))
    {
      earliest_year = year;
      earliest_month = month;
      earliest_day = day;
    }
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
  }

  printf("%d/%d/%d is the earliest date", earliest_month, earliest_day, earliest_year);

  return 0;
}
