#include <stdio.h>

#define PI 3.14

int main(void)
{
  // v = 4/3πr^3
  int radius = 10;
  float volume;

  volume = (4.0f / 3.0f) * PI * radius * radius * radius;
  printf("Ball volume is: %.2f", volume);

  return 0;
}
