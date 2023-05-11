#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define N_LETTERS 26

void read_word(int counts[N_LETTERS]);
bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS]);

int main(void)
{
  int counts1[N_LETTERS] = { 0 }, counts2[N_LETTERS] = { 0 };

  read_word(counts1);
  read_word(counts2);

  if (equal_array(counts1, counts2)) {
    printf("The words are anagrams.\n");
  }
  else {
    printf("The words are not anagrams.\n");
  }

  return 0;
}

void read_word(int counts[N_LETTERS])
{
  char c;

  printf("Enter word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      c = tolower(c);
      counts[c - 'a']++;
    }
  }
}

bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS])
{
  bool equal = true;

  for (int i = 0; i < N_LETTERS; i++) {
    if (counts1[i] != counts2[i]) {
      equal = false;
      break;
    }
  }

  return equal;
}
