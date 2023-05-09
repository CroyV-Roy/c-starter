#include <ctype.h>
#include <stdio.h>

#define N_LETTERS 26

int main(void)
{
  int letters[N_LETTERS] = { 0 };
  char c;

  printf("Enter first word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      c = tolower(c);
      letters[c - 'a']++;
    }
  }

  printf("Enter second word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      c = tolower(c);
      letters[c - 'a']--;
    }
  }

  for (int i = 0; i < N_LETTERS; i++) {
    if (letters[i] != 0) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }

  printf("The words are anagrams.\n");

  return 0;
}
