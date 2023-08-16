#include <iostream>

using namespace std;

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
  Point point1(10, 20);
  Point point2 = point1; // This calls the copy constructor.

  cout << point2.x << ", " << point2.y << endl; // Prints "10, 20".

  return 0;
}
