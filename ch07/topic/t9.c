#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int hours, minutes, time;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &time);

  if (toupper(time) == 'P')
    hours += 12;

  printf("Equivalent 24-hour time: %d:%.2d", hours, minutes);

  return 0;
}
