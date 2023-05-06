#include <stdio.h>

int main(void)
{
  int m, n, remainder, f1, f2;

  printf("Enter a fraction: ");
  scanf("%d/6%d", &m, &n);

  f1 = m;
  f2 = n;

  while (n != 0)
  {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  f1 /= m;
  f2 /= m;

  printf("The lowest terms: %d/%d\n", f1, f2);

  return 0;
}
