#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void failure(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void)
{
  char c;

  printf("Enter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n')
  {
    if (c == '(' || c == '{') {
      push(c);
    }
    else if (c == ')') {
      if (pop() != '(')
        failure();
    }
    else if (c == '}') {
      if (pop() != '{')
        failure();
    }
  }

  if (is_empty())
    printf("Parentheses/braces are nested properly.\n");
  else
    failure();

  return 0;
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char c)
{
  if (is_full()) {
    stack_overflow();
  }
  else {
    contents[top++] = c;
  }
}

char pop(void)
{
  if (is_empty()) {
    stack_underflow();
  }
  else {
    return contents[--top];
  }
}

void failure(void)
{
  printf("Parentheses/braces are not matched.\n");
  exit(0);
}

void stack_underflow(void)
{
  failure();
}

void stack_overflow(void)
{
  printf("Stack overflow\n");
  exit(1);
}
