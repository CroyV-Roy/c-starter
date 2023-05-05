#include <stdio.h>

int main(void)
{
  float loan, rate, monthly_payment;
  float fp, sp, tp;

  printf("Enter amount of loan: :");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  rate = rate * 0.01 / 12;

  fp = loan - monthly_payment + loan * rate;
  sp = fp - monthly_payment + fp * rate;
  tp = sp - monthly_payment + sp * rate;

  printf("Balance remaining after first payment: %.2f\n", fp);
  printf("Balance remaining after second payment: %.2f\n", sp);
  printf("Balance remaining after third2 payment: %.2f\n", tp);

  return 0;
}
