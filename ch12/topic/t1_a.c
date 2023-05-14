#include <stdio.h>

#define SIZE 100

int main(void)
{
  char sentences[SIZE];
  int i;

  printf("Enter a message: ");

  for (i = 0; i < SIZE; i++) {
    sentences[i] = getchar();
    if (sentences[i] == '\n')
      break;
  }

  printf("Reversal is: ");
  for (i--; i >= 0; i--) {
    putchar(sentences[i]);
  }
  putchar('\n');

  return 0;
}
