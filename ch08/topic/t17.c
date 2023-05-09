#include <stdio.h>

#define NEXT_ROW (pos_row - 1) < 0 ? n - 1 : pos_row - 1
#define NEXT_COL (pos_col + 1) % n

int main(void)
{
  int n, pos_row, pos_col;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int square[n][n];
  pos_row = 0;
  pos_col = n / 2;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      square[i][j] = 0;
    }
  }

  for (int i = 1; i <= n * n; i++) {
    square[pos_row][pos_col] = i;

    if (square[NEXT_ROW][NEXT_COL] != 0) {
      pos_row = (pos_row + 1) % n;
    }
    else {
      pos_row = NEXT_ROW;
      pos_col = NEXT_COL;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d", square[i][j]);
    }
    printf("\n");
  }

  return 0;
}
