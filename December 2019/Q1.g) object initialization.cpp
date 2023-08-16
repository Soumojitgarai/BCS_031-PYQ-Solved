class Point {
public:
  int x;
  int y;

  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
};

int main() {
  Point point(10, 20);

  cout << point.x << ", " << point.y << endl; // Prints "10, 20".

  return 0;
}
