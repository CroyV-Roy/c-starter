#include <stdio.h>

#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void)
{
  int a[3][LEN] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int res;

  res = sum_two_dimensional_array(a, 3);
  printf("%d", res);

  return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
  int sum = 0;
  const int *p;

  for (p = *a; p < *a + n * LEN; p++) {
    sum += *p;
  }

  return sum;
}
