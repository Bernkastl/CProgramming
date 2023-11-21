#include <stdio.h>

int main(void)
{
  float amount;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);

  float interest_rate;
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  float monthly_payment;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  int payments;
  printf("Enter number of payments: ");
  scanf("%d", &payments);

  for (int i = 1; i <= payments; i++)
  {
    amount = amount - monthly_payment + (amount * interest_rate / 12.0 / 100.0);
    printf("Balance remaining after first payment #%d: $%.2f\n", i, amount);
  }

  return 0;
}
