#include <stdio.h>

int main(void)
{
  int i, n;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar(); // to consume the \n character after the user hits enter, since scanf keeps it in the buffer

  for (i = 1; i <= n; i++)
  {
    printf("%10d%10d\n", i, i * i);
    if ( i % 24 == 0)
    {
      printf("Press Enter to continue...");
      getchar();
    }
  }

  return 0;
}
