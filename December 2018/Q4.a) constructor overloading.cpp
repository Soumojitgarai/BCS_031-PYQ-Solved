class Point {
private:
  int x;
  int y;

public:
  Point() {
    x = 0;
    y = 0;
  }

  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};
