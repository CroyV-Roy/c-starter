int gcd(int m, int n)
{
  int temp;
  while (n != 0) {
    temp = m % n;
    m = n;
    n = temp;
  }
  
  return m;
}
