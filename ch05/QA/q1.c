#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 2;
  j = 3;
  k = i * j == 6;
  printf("%d", k);

  i = 5;
  j = 10;
  k = 1;
  printf("%d", k > i < j);

  return 0;
}
