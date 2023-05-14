#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
  double sum = 0.0;
  const double *pa, *pb;

  for (pa = a, pb = b; pa < a + n && pb < b + n; pa++, pb++) {
    sum += *pa * *pb;
  }

  return sum;
}

int main(void)
{
  double arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  double result;

  result = inner_product(arr, arr, 10);

  printf("%f", result);

  return 0;
}
