#include <stdio.h>

void split_time(long total_sec, int* hr, int* min, int* sec);

int main(void)
{
  long total_sec;
  int hr = 0, min = 0, sec = 0;

  printf("Enter a time as number of seconds since midnight: ");
  scanf("%ld", &total_sec);

  split_time(total_sec, &hr, &min, &sec);

  printf("Time given was %.2d:%.2d:%.2d\n", hr, min, sec);
  printf("Check: %d * 3600 + %d * 60 + %d = %ld\n", hr, min, sec,
    (long)hr * 3600 + min * 60 + sec);

  return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec)
{
  *hr = total_sec / 3600;
  *min = (total_sec / 60) % 60;
  *sec = total_sec % 60;
}
