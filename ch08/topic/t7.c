#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
  int arr[ROWS][COLS] = { 0 };
  int i, j;
  int sum_col = 0, sum_row = 0;

  for (i = 0; i < ROWS; i++) {
    printf("Enter row %d: ", i + 1);
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5]);
  }

  printf("Row totals: ");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      sum_row += arr[i][j];
    }
    printf("%3d", sum_row);
  }
  printf("\n");

  printf("Column totals: ");
  for (j = 0; j < COLS; j++) {
    for (i = 0; i < ROWS; i++) {
      sum_col += arr[i][j];
    }
    printf("%3d", sum_col);
  }
  printf("\n");

  return 0;
}
