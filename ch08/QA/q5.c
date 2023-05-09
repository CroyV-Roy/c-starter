#include <stdio.h>

int main(void)
{
  int fib_number[40] = { 0, 1 };
  int i;

  for (i = 2; i < 40; i++) {
    fib_number[i] = fib_number[i - 1] + fib_number[i - 2];
  }

  for (i = 0; i < 40; i++) {
    printf("%d\n", fib_number[i]);
  }

  return 0;
}
