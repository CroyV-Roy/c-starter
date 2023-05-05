#include <stdio.h>

int main(void)
{
  int max, min, a, b, c, d;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  max = a;
  min = a;

  if (b > a)
    max = b;
  if (c > max)
    max = c;
  if (d > max)
    max = d;
  if (b < a)
    min = b;
  if (c < min)
    min = c;
  if (d < min)
    min = d;

  printf("Largest: %d", max);
  printf("Smallest: %d", min);

  return 0;
}
