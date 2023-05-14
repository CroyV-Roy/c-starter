#include <stdio.h>

#define SIZE 100

int main(void)
{
  char sentences[SIZE], *p, *q;

  printf("Enter a message: ");

  for (p = sentences; p < sentences + SIZE; p++) {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  for (q = sentences; p != q; q++, p--) {
    if (*q != *p)
      break;
  }

  if (p == q) {
    printf("Palindrome");
  } else {
    printf("Not a palindrome");
  }

  putchar('\n');

  return 0;
}
