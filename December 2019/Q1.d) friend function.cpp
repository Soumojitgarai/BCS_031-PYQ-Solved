class Point {
private:
  int x;
  int y;

public:
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  friend void print_point(Point point);
};

void print_point(Point point) {
  cout << point.x << ", " << point.y << endl;
}

int main() {
  Point point(10, 20);

  print_point(point); // This is okay, even though print_point() is not a member of Point.

  return 0;
}
