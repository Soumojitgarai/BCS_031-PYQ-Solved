class Point {
private:
  int x;
  int y;

public:
  int get_x() {
    return this->x;
  }
};

int main() {
  Point point;
  point.x = 10;
  point.y = 20;

  int x = point::get_x(); // This is okay, even though get_x() is declared in Point's private section.

  cout << x << endl; // Prints "10".

  return 0;
}
