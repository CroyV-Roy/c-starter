#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void)
{
  int a[N] = { 5, 2, 6, 3, 6, 3, 5, 1, 5, 4 };

  printf("Unsorted a[]: ");
  for (int i = 0; i < N; i++) {
    printf(" %d", a[i]);
  }
  printf("\n");

  selection_sort(a, N);

  printf("  Sorted a[]: ");
  for (int i = 0; i < N; i++) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int a[], int n)
{
  if (n < 1) return;

  int max = a[0], max_pos = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
      max_pos = i;
    }
  }

  a[max_pos] = a[n - 1];
  a[n - 1] = max;

  selection_sort(a, n - 1);
}
