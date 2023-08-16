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

  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

void swapPoints(Point &p1, Point &p2) {
  int tempX = p1.x;
  int tempY = p1.y;

  p1.x = p2.x;
  p1.y = p2.y;

  p2.x = tempX;
  p2.y = tempY;
}

int main() {
  Point p1(10, 20);
  Point p2(30, 40);

  cout << "Before swapping: " << endl;
  p1.print();
  p2.print();

  swapPoints(p1, p2);

  cout << "After swapping: " << endl;
  p1.print();
  p2.print();

  return 0;
}
