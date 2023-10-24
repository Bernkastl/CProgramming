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

  amount = amount - monthly_payment + (amount * interest_rate / 12.0 / 100.0);
  printf("Balance remaining after first payment: $%.2f\n", amount);

  amount = amount - monthly_payment + (amount * interest_rate / 12.0 / 100.0);
  printf("Balance remaining after second payment: $%.2f\n", amount);

  amount = amount - monthly_payment + (amount * interest_rate / 12.0 / 100.0);
  printf("Balance remaining after third payment: $%.2f\n", amount);

  return 0;
}
