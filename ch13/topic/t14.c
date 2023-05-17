#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_LETTERS 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[80], word2[80], ch, *p;

  p = word1;
  printf("Enter first word: ");
  while ((ch = getchar()) != '\n' && p < word1 + 80) {
    if (isalpha(ch)) {
      *p = toupper(ch);
      p++;
    }
  }
  *p = '\0';

  p = word2;
  printf("Enter first word: ");
  while ((ch = getchar()) != '\n' && p < word2 + 80) {
    if (isalpha(ch)) {
      *p = toupper(ch);
      p++;
    }
  }
  *p = '\0';

  if (are_anagrams(word1, word2)) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }
  return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
  int letters[NUM_LETTERS] = { 0 };
  int *p = letters;

  while (*word1) {
    letters[*word1 - 'A']++;
    word1++;
  }
  while (*word2) {
    letters[*word2 - 'A']--;
    word2++;
  }
  while (*p) {
    if (*p != 0)
      return false;
    *p++;
  }
  return true;
}
