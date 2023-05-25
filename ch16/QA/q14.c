#define RECTANGLE 1
#define CIRCLE 2

struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;

// a 
double shape_area(struct shape s)
{
  if (s.shape_kind == RECTANGLE)
    return s.u.rectangle.height * s.u.rectangle.width;
  else
    return 3.1415 * s.u.circle.radius * s.u.circle.radius;
}

// b
struct shape shape_move(struct shape s, int x, int y)
{
  s.center.x += x;
  s.center.y += y;

  return s;
}

// c
struct shape shape_scale(struct shape s, double c)
{
  if (s.shape_kind == RECTANGLE) {
    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;
  } else
    s.u.circle.radius *= c;
  return s;
}
