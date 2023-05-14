#include <stdio.h>

#define SIZE 100

int main(void)
{
  char sentences[SIZE], *p;

  printf("Enter a message: ");

  for (p = &sentences[0]; p < &sentences[SIZE]; p++) {
    *p = getchar();
    if (*p == '\n') break;
  }

  printf("Reversal is: ");
  for (p--; p >= &sentences[0]; p--) {
    putchar(*p);
  }
  putchar('\n');

  return 0;
}
