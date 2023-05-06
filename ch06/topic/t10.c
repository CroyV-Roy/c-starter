#include <stdio.h>

int main(void)
{
  int month, day, year;
  int minM, minD, minY;

  printf("Enter a date (mm/dd/yy)");
  scanf("%d/%d/%d", &month, &day, &year);

  minM = month;
  minD = day;
  minY = year;

  while (month != 0 && day != 0 && year != 0)
  {
    printf("Enter a date (mm/dd/yy)");
    scanf("%d/%d/%d", &month, &day, &year);

    if (minY > year || minM > month || minD > day)
    {
      minM = month;
      minD = day;
      minY = year;
    }
  }

  printf("%d/%.2d/%.2d is the earliest date", minM, minD, minY);

  return 0;
}
