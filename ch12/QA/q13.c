#define N 10;

double ident[N][N], *p;
int num_zeros = N;

for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
  if (num_zeros == N) {
    *p = 1.0;
    num_zeros = 0;
  } else {
    *p = 0.0;
    num_zeros++;
  }
}
