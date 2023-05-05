#include <stdio.h>

int main(void)
{
  int n, r1, r2, r3, r4, r5;
  r1 = r2 = r3 = r4 = r5 = 0;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);

  r1 = n % 8;
  n /= 8;

  r2 = n % 8;
  n /= 8;

  r3 = n % 8;
  n /= 8;

  r4 = n % 8;
  n /= 8;

  r5 = n % 8;
  n /= 8;
  printf("In octal, your number is: %d%d%d%d%d", r5, r4, r3, r2, r1);

  return 0;
}
