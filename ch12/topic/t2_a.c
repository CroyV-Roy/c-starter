#include <stdio.h>

#define SIZE 100

int main(void)
{
  char sentences[SIZE];
  int i, j;

  printf("Enter a message: ");

  for (i = 0; i < SIZE; i++) {
    sentences[i] = getchar();
    if (sentences[i] == '\n')
      break;
  }

  for (j = 0, i--; i != j; j++, i--) {
    if (sentences[i] != sentences[j])
      break;
  }

  if (i == j) {
    printf("Palindrome");
  } else {
    printf("Not a palindrome");
  }
  
  putchar('\n');

  return 0;
}
