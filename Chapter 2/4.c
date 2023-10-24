#include <stdio.h>

#define TAX 5

int main(void)
{
  float amount;
  printf("Enter an amount: ");
  scanf("%f", &amount);

  float amount_taxed = amount * (1 + TAX / 100.0);

  printf("With tax added: %.2f", amount_taxed);

  return 0;
}
