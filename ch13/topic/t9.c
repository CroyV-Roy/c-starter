#include <stdio.h>
#include <ctype.h>

#define SIZE 1024

int compute_vowel_count(const char *sentence);

int main(void)
{
  int count;
  char sentences[SIZE + 1];


  printf("Enter a sentence: ");
  gets(sentences);

  count = compute_vowel_count(sentences);
  printf("Your sentence contains %d vowels.", count);

  return 0;

}

int compute_vowel_count(const char *sentence)
{
  int count = 0;
  while (*sentence) {
    switch (*sentence) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      count++;
      break;
    }
  }
  return count;
}
