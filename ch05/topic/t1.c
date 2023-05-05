#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (0 < n && n < 10)
  {
    printf("The number %d has 1 digits", n);
  }
  else if (n < 100)
  {
    printf("The number %d has 2 digits", n);
  }
  else if (n < 1000)
  {
    printf("The number %d has 3 digits", n);
  }

  return 0;
}
