#include <stdio.h>

int main(void)
{
  int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int first_digit = num / 10;
  int second_digit = num % 10;

  printf("You entered the number ");
  switch (first_digit)
  {
  case 2:
    printf("twenty");
    break;
  case 3:
    printf("thirty");
    break;
  case 4:
    printf("forty");
    break;
  case 5:
    printf("fifty");
    break;
  case 6:
    printf("sixty");
    break;
  case 7:
    printf("seventy");
    break;
  case 8:
    printf("eighty");
    break;
  case 9:
    printf("ninety");
    break;
  default:
    break;
  }

  switch (second_digit)
  {
  case 1:
    if (first_digit != 1)
      printf("-one");
    else
      printf("eleven");
    break;

  case 2:
    if (first_digit != 1)
      printf("-two");
    else
      printf("twelve");
    break;

  case 3:
    if (first_digit != 1)
      printf("-three");
    else
      printf("thirteen");
    break;

  case 4:
    if (first_digit != 1)
      printf("-four");
    else
      printf("fourteen");
    break;

  case 5:
    if (first_digit != 1)
      printf("-five");
    else
      printf("fifteen");
    break;

  case 6:
    if (first_digit != 1)
      printf("-six");
    else
      printf("sixteen");
    break;

  case 7:
    if (first_digit != 1)
      printf("-seven");
    else
      printf("seventeen");
    break;

  case 8:
    if (first_digit != 1)
      printf("-eight");
    else
      printf("eighteen");
    break;

  case 9:
    if (first_digit != 1)
      printf("-nine");
    else
      printf("nineteen");
    break;

  default:
    break;
  }

  return 0;
}
