struct fraction {
  int numerator;
  int denominator;
};

// a
struct fraction reduce_fraction(struct fraction f)
{
  int temp;
  int n = f.numerator, d = f.denominator;

  while (n % d != 0) {
    temp = d;
    d = n % d;
    n = temp;
  }
  f.numerator /= d;
  f.denominator /= d;
  return f;
}

// b
struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
  return reduce_fraction((struct fraction)
  {
    f1.numerator *f2.denominator +
      f2.numerator * f1.denominator, f1.denominator *f2.denominator
  });
}

// c
struct fraction subtract_fractions(struct fraction f1, struct fraction f2)
{
  return reduce_fraction((struct fraction)
  {
    f1.numerator *f2.denominator -
      f2.numerator * f1.denominator, f1.denominator *f2.denominator
  });
}

// d
struct fraction multiply_fractions(struct fraction f1, struct fraction f2)
{
  return reduce_fraction((struct fraction)
  {
    f1.numerator *f2.numerator,
      f1.denominator *f2.denominator
  });
}

// e
struct fraction divide_fractions(struct fraction f1, struct fraction f2)
{
  return reduce_fraction((struct fraction)
  {
    f1.numerator *f2.denominator,
      f1.denominator *f2.numerator
  });
}
