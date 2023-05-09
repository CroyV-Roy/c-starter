#include <stdio.h>

int main(void)
{
  int characters, words;
  char ch;

  printf("Enter a sentence: ");

  characters = 0;
  words = 1;
  while ((ch = getchar()) != '\n')
  {
    if (ch == ' ')
      words++;
    else
      characters++;
  }

  printf("Characters = %d\n", characters);
  printf("Words = %d\n", words);
  printf("Average word length: %.1f\n\n", (float)characters / words);

  return 0;

}
