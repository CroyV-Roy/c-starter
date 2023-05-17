#include <stdio.h>
#include <ctype.h>

#define SIZE 100

double compute_average_word_length(const char *sentence);

int main(void)
{
  char sentence[SIZE + 1];

  printf("Enter a sentence: ");
  gets(sentence);

  printf("Average word length: %.1f\n\n", compute_average_word_length(sentence));

  return 0;
}

double compute_average_word_length(const char *sentence)
{
  int words = 0, character = 0;

  while (*sentence) {
    while (*sentence++ && !isspace(*sentence))
      character++;
    words++;
    while (*sentence && isspace(*sentence))
      sentence++;
  }

  return (double)character / words;
}
