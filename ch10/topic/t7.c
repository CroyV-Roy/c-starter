#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = { {1, 1, 1, 1, 1, 1, 0},  // 0
           {0, 1, 1, 0, 0, 0, 0},  // 1
           {1, 1, 0, 1, 1, 0, 1},  // 2
           {1, 1, 1, 1, 0, 0, 1},  // 3
           {0, 1, 1, 0, 0, 1, 1},  // 4
           {1, 0, 1, 1, 0, 1, 1},  // 5
           {1, 0, 1, 1, 1, 1, 1},  // 6
           {1, 1, 1, 0, 0, 0, 0},  // 7
           {1, 1, 1, 1, 1, 1, 1},  // 8
           {1, 1, 1, 1, 0, 1, 1} }; // 9
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void)
{
  char ch;
  int position = 0;

  clear_digits_array();

  printf("Enter a number: ");
  while ((ch = getchar()) != '\n') {
    if (isdigit(ch) && position < MAX_DIGITS) {
      process_digit(digittoint(ch), position);
      position++;
    }
  }
  print_digits_array();
  printf("\n");

  return 0;
}

void clear_digits_array(void)
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
  int offset = 4 * position;

  if (segments[digit][0])
    digits[0][1 + offset] = '_';
  if (segments[digit][1])
    digits[1][2 + offset] = '|';
  if (segments[digit][2])
    digits[2][2 + offset] = '|';
  if (segments[digit][3])
    digits[2][1 + offset] = '_';
  if (segments[digit][4])
    digits[2][0 + offset] = '|';
  if (segments[digit][5])
    digits[1][0 + offset] = '|';
  if (segments[digit][6])
    digits[1][1 + offset] = '_';
}

void print_digits_array(void)
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      printf("%c", digits[i][j]);
    printf("\n");
  }
}
