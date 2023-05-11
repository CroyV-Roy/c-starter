#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 10
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define NUM_DIRECTIONS 4

#define UP_AVAILABLE curr_row - 1 >= 0 && walk[curr_row - 1][curr_col] == '.'
#define RIGHT_AVAILABLE curr_col + 1 < COLS && walk[curr_row][curr_col + 1] == '.'
#define DOWN_AVAILABLE curr_row + 1 < ROWS && walk[curr_row + 1][curr_col] == '.'
#define LEFT_AVAILABLE curr_col - 1 >= 0 && walk[curr_row][curr_col - 1] == '.'

//          0
//        3   1
//          2

void generate_random_walk(char walk[ROWS][COLS]);
void print_array(char walk[ROWS][COLS]);

int main(void)
{
  char walk[ROWS][COLS];

  generate_random_walk(walk);
  print_array(walk);

  return 0;
}

void generate_random_walk(char walk[ROWS][COLS])
{
  int curr_row = -1, curr_col = 0, num_tried = 0;
  bool tried[4] = { false };

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      walk[i][j] = '.';
    }
  }

  for (char letter = 'A'; letter <= 'Z'; letter++) {
    while (num_tried < NUM_DIRECTIONS)
    {
      int dir = rand() % NUM_DIRECTIONS;

      if (dir == UP && !tried[UP]) {
        if (UP_AVAILABLE) {
          walk[--curr_row][curr_col] = letter;
          break;
        }
        else {
          tried[UP] = true;
          num_tried++;
        }
      }
      else if (dir == RIGHT && !tried[RIGHT]) {
        if (RIGHT_AVAILABLE) {
          walk[curr_row][++curr_col] = letter;
          break;
        }
        else {
          tried[RIGHT] = true;
          num_tried++;
        }
      }
      else if (dir == DOWN && !tried[DOWN]) {
        if (DOWN_AVAILABLE) {
          walk[++curr_row][curr_col] = letter;
          break;
        }
        else {
          tried[DOWN] = true;
          num_tried++;
        }
      }
      else if (dir == LEFT && !tried[LEFT]) {
        if (LEFT_AVAILABLE) {
          walk[curr_row][--curr_col] = letter;
          break;
        }
        else {
          tried[LEFT] = true;
          num_tried++;
        }
      }
    }

    for (int i = 0; i < NUM_DIRECTIONS; i++) {
      tried[i] = false;
    }
    num_tried = 0;
  }
}

void print_array(char walk[ROWS][COLS])
{
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%c", walk[i][j]);
    }
    printf("\n");
  }
}
