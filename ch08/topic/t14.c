#include <stdio.h>

#define N 100
#define TERMINUS (ch = getchar()) != '\n' && ch != '.' && ch != '?' && ch != '!'

int main(void)
{
  char sentence[N], ch;
  int pos;

  printf("Enter a sentence: ");
  for (int i = 0; TERMINUS; i++) {
    sentence[i] = ch;
    pos = i;
  }

  printf("Reversal of sentence: ");
  for (int i = pos; i >= 0; i--) {
    int j;
    if (sentence[i] == ' ') {
      for (j = i + 1; sentence[j] != ' ' && j <= pos; j++) {
        printf("%c", sentence[j]);
      }
      printf(" ");
    }
    else if (i == 0) {
      for (j = i; sentence[j] != ' ' && j <= pos; j++) {
        printf("%c", sentence[j]);
      }
    }
  }

  printf("%c\n", ch);

  return 0;
}
