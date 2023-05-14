#include <stdio.h>

#define SIZE 100

int main(void)
{
  char sentences[SIZE], *p;

  printf("Enter a message: ");

  for (p = sentences; p < sentences + SIZE; p++) {
    *p = getchar();
    if (*p == '\n') break;
  }

  printf("Reversal is: ");
  for (p--; p >= sentences; p--) {
    putchar(*p);
  }
  putchar('\n');

  return 0;
}
