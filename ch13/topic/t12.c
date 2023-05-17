#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LEN 20

int main(void)
{
  int i = 0, j = 0;
  char *sentence[MAX_WORDS][MAX_LEN + 1];
  char ch, end = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n' && i < MAX_WORDS) {
    if (ch == ' ' || ch == '\t') {
      sentence[i][j] = '\0';
      i++;
      j = 0;
      continue;
    }
    if (ch == '.' || ch == '!' || ch == '?') {
      end = ch;
      sentence[i][j] = '\0';
      break;
    } else if (j < MAX_LEN) {
      sentence[i][j++] = ch;
    }
  }

  printf("Reversal of sentence: ");
  while (i >= 0)
    printf("%s ", sentence[i--]);
  printf("%c\n", end);

  return 0;
}
