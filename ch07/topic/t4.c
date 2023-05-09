#include <stdio.h>

int main(void)
{
  char ch;

  printf("Enter phone number: ");

  while ((ch = getchar()) != '\n')
  {
    if ('A' <= ch && ch <= 'C')
      printf("2");
    else if ('D' <= ch && ch <= 'F')
      printf("3");
    else if ('G' <= ch && ch <= 'I')
      printf("4");
    else if ('J' <= ch && ch <= 'L')
      printf("5");
    else if ('M' <= ch && ch <= 'O')
      printf("6");
    else if ('P' <= ch && ch <= 'S')
      printf("7");
    else if ('T' <= ch && ch <= 'V')
      printf("8");
    else if ('W' <= ch && ch <= 'Z')
      printf("9");
    else
      printf("%c", ch);
  }

  return 0;
}
