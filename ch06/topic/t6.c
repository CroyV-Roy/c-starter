#include <stdio.h>

int main(void)
{
  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; i * i < 100; i += 2)
  {
    printf("%d\n", i * i);
  }

  return 0;
}
