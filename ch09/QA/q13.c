#include <ctype.h>
#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
  char board[8][8] = { {'-', '-', '-', 'r', '-', '-', 'k', '-'},
          {'-', '-', 'p', '-', '-', '-', 'p', '-'},
          {'-', '-', '-', 'b', '-', '-', 'p', '-'},
          {'-', 'p', '-', 'P', 'p', '-', '-', '-'},
          {'p', '-', '-', '-', '-', '-', '-', '-'},
          {'P', '-', 'P', '-', '-', '-', '-', '-'},
          {'B', 'P', 'K', 'B', 'n', 'P', '-', '-'},
          {'-', '-', '-', '-', '-', '-', '-', '-'} };

  printf("Board:\n");
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }

  int eval = evaluate_position(board);
  printf("\nPosition Evaluation: %s%d\n", (eval < 0) ? "" : "+", eval);

  return 0;
}

int evaluate_position(char board[8][8])
{
  int eval = 0;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int value;

      switch (toupper(board[i][j])) {
      case 'Q':
        value = 9;
        break;
      case 'R':
        value = 5;
        break;
      case 'B':
      case 'N':
        value = 3;
        break;
      case 'P':
        value = 1;
        break;
      default:
        value = 0;
        break;
      }

      if (islower(board[i][j])) {
        value *= -1;
      }

      eval += value;
    }
  }

  return eval;
}
