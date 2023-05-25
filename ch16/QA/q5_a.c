struct date {
  int month;
  int day;
  int year;
};

int day_of_year(struct date d)
{
  int res = 0, i;
  const int days_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0))
    res++;
  for (i = 0; i < d.month; i++)
    res += days_month[i];
  return res + d.day;
}
