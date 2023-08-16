class Point {
public:
  int x;
  int y;
};

void print_point(Point* point) {
  cout << point->x << ", " << point->y << endl;
}

int main() {
  Point point;
  point.x = 10;
  point.y = 20;

  print_point(&point); // Prints "10, 20".

  return 0;
}
