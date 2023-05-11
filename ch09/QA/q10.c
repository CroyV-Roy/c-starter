int largest(int a[], int n)
{
  int i, max = a[0];

  for (i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];

  return max;
}

int average(int a[], int n)
{
  int i, avg = 0;

  for (i = 0; i < n; i++)
    avg += a[i];

  return avg / n;
}

int num_positive(int a[], int n)
{
  int i, count = 0;

  for (i = 0; i < n; i++)
    if (a[i] > 0)
      count++;

  return count;
}
