#include <stdio.h>

int main(void)
{
  float max = 0, n;

  do
  {
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n > 0 && max < n)
      max = n;
  } while (n > 0);

  printf("The largest number entered was %.2f", max);

  return 0;
}
