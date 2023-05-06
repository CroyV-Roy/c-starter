#include <stdio.h>

int main(void)
{
  int n, i;
  float e = 1.0f, factor = 1.0f;
  printf("Enter the value of n: ");
  scanf("%d", &n); // 读取用户输入的整数n

  for (i = 1; i <= n; i++)
  {
    factor *= i;        // 计算i的阶乘
    e += 1.0f / factor; // 加上1/factor
  }

  printf("The approximate value of e is: %f", e);

  return 0;
}
