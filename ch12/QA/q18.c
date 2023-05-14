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
  char *p;
  int white = 0, black = 0;

  for (p = *board; p < *board + 64; p++) {
    switch (*p) {
    case 'Q':
      white += 9;
      break;
    case 'q':
      black += 9;
      break;
    case 'R':
      white += 5;
      break;
    case 'r':
      black += 5;
      break;
    case 'B':
      white += 3;
      break;
    case 'b':
      black += 3;
      break;
    case 'N':
      white += 3;
      break;
    case 'n':
      black += 3;
      break;
    case 'P':
      white++;
      break;
    case 'p':
      black++;
      break;
    default:
      break;
    }
  }

  return white - black;
}
