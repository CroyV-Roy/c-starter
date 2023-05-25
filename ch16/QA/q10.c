struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

// a
int area_rectangle(struct rectangle r)
{
  return (r.lower_right.x - r.upper_left.x)
    * (r.lower_right.y - r.upper_left.y);
}

// b
struct point rectangle_center(struct rectangle r)
{
  return (struct point)
  {
    (r.lower_right.x - r.upper_left.x) / 2,
      (r.lower_right.y - r.upper_left.y) / 2
  };
}

// c
struct rectangle move_rect(struct rectangle r, int x, int y)
{
  r.upper_left.x += x;
  r.upper_left.y += y;
  r.lower_right.x += x;
  r.lower_right.y += y;
  return r;
}

// d
bool is_within_rect(struct rectangle r, struct point p)
{
  return (p.x > r.upper_left.x && p.x < r.lower_right.x
    && p.y > r.upper_left.y && p.y < r.lower_right.y);
}
