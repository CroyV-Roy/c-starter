#include <stdio.h>

int main(void) {
  int dollar_amount;
  int amount_20, amount_10, amount_5, amount_1;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  amount_20 = dollar_amount / 20;
  dollar_amount = dollar_amount - amount_20 * 20;

  amount_10 = dollar_amount / 10;
  dollar_amount = dollar_amount - amount_10 * 10;

  amount_5 = dollar_amount / 5;
  dollar_amount = dollar_amount - amount_5 * 5;

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", amount_20, amount_10, amount_5, dollar_amount);

  return 0;
}
