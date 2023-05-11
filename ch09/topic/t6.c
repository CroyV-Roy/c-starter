#include <stdio.h>
#include <math.h>

double evaluate_polynomial(double x);

int main(void)
{
  double x;

  printf("This program evaluates the following polynomial:\n");
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n");
  printf("Enter a value for x: ");
  scanf("%lf", &x);
  printf("Result: %g\n", evaluate_polynomial(x));

  return 0;
}

/*
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */
double evaluate_polynomial(double x)
{
  return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}
