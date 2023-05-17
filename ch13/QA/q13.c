#include <string.h>

void build_index_url(const char *domain, char *index_url)
{
  strcpy(index_url, "http://www.");
  strcat(domain, "/index.html");
  strcat(index_url, domain);
}
