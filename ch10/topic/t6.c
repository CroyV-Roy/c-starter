#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 20

int top = 0;

void push(double x, double stack[STACK_SIZE]);
double pop(double stack[STACK_SIZE]);
void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);

int main(void)
{


  char ch;
  double stack[STACK_SIZE];

  printf("Enter an RPN expresson: ");
  scanf(" %c", &ch);

  while (ch != '\n') {
    if (isdigit(ch)) {
      push(digittoint(ch), stack);
    }
    else if (ch == '+') {
      double b = pop(stack);
      double a = pop(stack);
      push(a + b, stack);
    }
    else if (ch == '-') {
      double b = pop(stack);
      double a = pop(stack);
      push(a - b, stack);
    }
    else if (ch == '*') {
      double b = pop(stack);
      double a = pop(stack);
      push(a * b, stack);
    }
    else if (ch == '/') {
      double b = pop(stack);
      double a = pop(stack);
      push(a / b, stack);
    }
    else if (ch == '=') {
      printf("Value of expression: %g\n", pop(stack));
      make_empty();
      printf("Enter an RPN expression: ");
    }

    scanf(" %c", &ch);
  }

  return 0;
}

void push(double x, double stack[STACK_SIZE])
{
  if (is_full())
    stack_overflow();
  else
    stack[top++] = x;
}

double pop(double stack[STACK_SIZE])
{
  if (is_empty())
    stack_underflow();
  else
    return stack[--top];
}

void stack_overflow(void)
{
  printf("Expression is too complex\n");
  exit(1);
}

void stack_underflow(void)
{
  printf("Not enough operands in expression\n");
  exit(1);
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
