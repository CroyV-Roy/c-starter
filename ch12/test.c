#include <stdio.h>

int main(void)
{
  int a[10], i, sum = 0, *p = a;

  for (i = 0; i < 10; i++) {
    p[i] = i;
  }

  for (i = 0; i < 10; i++) {
    printf("%3d", p[i]);
  }

  return 0;
}
