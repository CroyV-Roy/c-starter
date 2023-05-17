#include <stdio.h>

void remove_filename(char *url);

void remove_filename(char *url)
{
  char *p = NULL;

  while (*url) {
    if (*url == '/')
      p = url;
    url++;
  }

  if (*p)
    *p = '\0';
}
