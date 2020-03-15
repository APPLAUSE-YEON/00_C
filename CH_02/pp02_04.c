#include <stdio.h>

int main(void) {
  float original_amount, amount_with_tax;

  printf("금액(세금 불포함): $");
  scanf("%f", &original_amount);

  amount_with_tax = original_amount * 1.05f;

  printf("금액(세금 포함): $%.2f\n", amount_with_tax);

  return 0;
}
