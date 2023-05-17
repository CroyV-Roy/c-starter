#include <stdio.h>

#define SIZE 100

void reverse(char *message);

int main(void)
{
  char message[SIZE], *p;

  printf("Enter a message: ");

  for (p = message; p < message + SIZE; p++) {
    *p = getchar();
    if (*p == '\n') break;
  }

  reverse(message);

  printf("Reversal is: ");
  printf("%s\n", message);

  return 0;
}

void reverse(char *message)
{
  char *p = message, *q = message, temp;

  while (*q++);
  q--;

  while (p < q) {
    temp = *p;
    *p = *q;
    *q = temp;
    p++;
    q--;
  }

}
