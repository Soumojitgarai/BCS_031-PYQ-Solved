#include <iostream>

using namespace std;

class Point {
private:
  int x;
  int y;

public:
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  Point(const Point &other) {
    this->x = other.x;
    this->y = other.y;
  }

  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

int main() {
  Point p1(10, 20);

  Point p2(p1); // copy constructor is called here

  p1.print();
  p2.print();

  return 0;
}
