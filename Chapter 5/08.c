#include <stdio.h>

#define FIRST_DEPARTURE 480
#define SECOND_DEPARTURE 583
#define THIRD_DEPARTURE 676
#define FOURTH_DEPARTURE 767
#define FIFTH_DEPARTURE 840
#define SIXTH_DEPARTURE 945
#define SEVENTH_DEPARTURE 1140
#define EIGHTH_DEPARTURE 1305

int main(void)
{
  int hours, minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  int input_time = hours * 60 + minutes;

  printf("Closest departure time is ");
  if (input_time <= FIRST_DEPARTURE + (SECOND_DEPARTURE - FIRST_DEPARTURE) / 2)
  {
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
  }
  else if (input_time <= SECOND_DEPARTURE + (THIRD_DEPARTURE - SECOND_DEPARTURE) / 2)
  {
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
  }
  else if (input_time <= THIRD_DEPARTURE + (FOURTH_DEPARTURE - THIRD_DEPARTURE) / 2)
  {
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
  }
  else if (input_time <= FOURTH_DEPARTURE + (FIFTH_DEPARTURE - FOURTH_DEPARTURE) / 2)
  {
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
  }
  else if (input_time <= FIFTH_DEPARTURE + (SIXTH_DEPARTURE - FIFTH_DEPARTURE) / 2)
  {
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
  }
  else if (input_time <= SIXTH_DEPARTURE + (SEVENTH_DEPARTURE - SIXTH_DEPARTURE) / 2)
  {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  }
  else if (input_time <= SEVENTH_DEPARTURE + (EIGHTH_DEPARTURE - SEVENTH_DEPARTURE) / 2)
  {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  }
  else
  {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}
