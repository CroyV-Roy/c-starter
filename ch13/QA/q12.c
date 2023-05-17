#include <string.h>

void get_extension(const char *file_name, char *extension)
{
  char *p;
  extension[0] = '\0';

  for (p = file_name; *p != '\0'; p++) {
    if (*p == '.') break;
  }

  if (strlen(*++p) > 0)
    strcpy(extension, p);
}
