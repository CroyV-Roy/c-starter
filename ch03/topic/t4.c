#include <stdio.h>

int main(void)
{
  int region, prefix, surfix;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &region, &prefix, &surfix);

  printf("Your entered %d.%d.%d", region, prefix, surfix);

  return 0;
}
