#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
  int ch, i;

  for (i = 0; i < n; i++) {
    ch = getchar();
    if (ch == '\n')
      break;
    str[i] = ch;
  }
  str[i] = '\0';
  return i;
}
