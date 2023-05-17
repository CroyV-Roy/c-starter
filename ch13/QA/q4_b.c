#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (!isspace(ch = getchar()))
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
