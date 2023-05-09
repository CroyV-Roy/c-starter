#include <stdio.h>

int main(void)
{
  int digit_count[10] = { 0 };
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n != 0)
  {
    while (n > 0) {
      digit = n % 10;
      digit_count[digit]++;
      n /= 10;
    }

    printf("Repeated digits(s): ");
    for (digit = 0; digit < 10; digit++) {
      if (digit_count[digit] > 1)
        printf("%3d", digit);
    }
    printf("\n");

    printf("Enter a number: ");
    scanf("%ld", &n);
  }

  return 0;
}
