#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  char initial, c;

  printf("Enter a first and last name: ");
  scanf(" %c", &initial);
  while (getchar() != ' ') {
    /* consume rest of first name */
  }
  scanf(" "); /* consume spaces between first and last names */

  while ((c = getchar()) != '\n' && c != ' ') {
    printf("%c", c);
  }

  printf(" %c.\n", initial);

  return 0;
}
