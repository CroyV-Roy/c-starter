#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int count;
  char ch;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n')
  {
    switch (tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      count++;
      break;
    }
  }

  printf("Your sentence contains %d vowels.", count);

  return 0;

}
