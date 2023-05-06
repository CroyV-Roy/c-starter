#include <stdio.h>

int main(void)
{
  float loan, rate, monthly_payment;
  int i, times;

  printf("Enter amount of loan: :");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("Enter number of payments: ");
  scanf("%d", &times);

  rate = rate * 0.01 / 12;

  for (i = 1; i <= times; i++)
  {
    loan = loan - monthly_payment + loan * rate;
    printf("Balance remaining after %d payment: %.2f\n", i, loan);
  }

  return 0;
}
