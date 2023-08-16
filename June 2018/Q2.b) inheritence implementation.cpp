class Circle {
public:
  double radius;

  Circle(double radius) {
    this->radius = radius;
  }

  double findArea() {
    return 3.14 * radius * radius;
  }
};

class Rectangle : public Circle {
public:
  double width;
  double height;

  Rectangle(double radius, double width, double height) : Circle(radius) {
    this->width = width;
    this->height = height;
  }

  double findArea() {
    return width * height;
  }
};
