#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int minutes, hours;
  char indicator;
  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &indicator);

  printf("Equivalent 24-hour time: ");
  switch (toupper(indicator))
  {
  case 'A':
    if (hours == 12)
      hours = 0;
    printf("%.2d:%.2d", hours, minutes);
    break;
  case 'P':
    printf("%.2d:%.2d", hours + 12, minutes);
    break;
  default:
    break;
  }

  return 0;
}
