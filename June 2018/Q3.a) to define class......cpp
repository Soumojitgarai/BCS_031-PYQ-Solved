#include <iostream>

using namespace std;

class Circle {
private:
  double radius;

public:
  Circle(double radius) {
    this->radius = radius;
  }

  double findArea() {
    return 3.14 * radius * radius;
  }

  double findCircumference() {
    return 2 * 3.14 * radius;
  }
};

int main() {
  Circle circle(10);

  double area = circle.findArea();
  double circumference = circle.findCircumference();

  cout << "The area of the circle is: " << area << endl;
  cout << "The circumference of the circle is: " << circumference << endl;

  return 0;
}
