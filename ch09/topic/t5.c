#include <stdio.h>

#define NEXT_ROW (curr_row - 1) < 0 ? n - 1 : curr_row - 1
#define NEXT_COL (curr_col + 1) % n

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int magic_square[n][n];



  return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
  int curr_row = 0, curr_col = n / 2;

  for (int i = 0; i < n;i++) {
    for (int j = 0; j < n; j++) {
      magic_square[i][j] = 0;
    }
  }

  for (int i = 1; i <= n * n; i++) {
    magic_square[curr_row][curr_col] = i;

    if (magic_square[NEXT_ROW][NEXT_COL] != 0) {
      curr_row = (curr_row + 1) % n;
    }
    else {
      curr_row = NEXT_ROW;
      curr_col = NEXT_COL;
    }
  }
}

void print_magic_square(int n, int magic_square[n][n])
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", magic_square[i][j]);
    }
    printf("\n");
  }
}
