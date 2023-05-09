#include <stdio.h>

int main(void)
{
  float value;
  char ch;

  printf("Enter an expression: ");

  while ((ch = getchar()) != '\n')
  {
    switch (ch)
    {
    case '+':
      value += (float)ch;
      break;
    case '-':
      value -= (float)ch;
      break;
    case '*':
      value *= (float)ch;
      break;
    case '/':
      value /= (float)ch;
      break;
    default:
      value = (float)ch;
      break;
    }
  }

  printf("Value of expression: %.1f\n\n", value);

  return 0;
}
