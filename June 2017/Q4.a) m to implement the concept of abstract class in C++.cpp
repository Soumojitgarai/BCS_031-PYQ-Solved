#include <iostream>

using namespace std;

class Shape {
  public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
  private:
    int radius;

  public:
    Circle(int radius) {
      this->radius = radius;
    }

    void draw() {
      cout << "Drawing a circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
  private:
    int width;
    int height;

  public:
    Rectangle(int width, int height) {
      this->width = width;
      this->height = height;
    }

    void draw() {
      cout << "Drawing a rectangle with width " << width << " and height " << height << endl;
    }
};

int main() {
  Circle c(10);
  Rectangle r(20, 30);

  c.draw();
  r.draw();

  return 0;
}
