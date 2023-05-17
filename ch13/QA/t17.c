#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension);

bool test_extension(const char *file_name, const char *extension)
{
  int f_size = strlen(file_name);
  int e_size = strlen(extension);
  const char *fp = (file_name + f_size) - e_size;

  if (e_size >= f_size)
    return false;

  while (*fp) {
    if (toupper(*fp++) != toupper(*extension++))
      return false;
  }

  return true;
}
