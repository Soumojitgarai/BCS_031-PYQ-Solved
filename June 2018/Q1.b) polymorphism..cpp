#include <iostream>

using namespace std;

class Shape {
public:
  virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
  void draw() {
    cout << "Drawing a circle." << endl;
  }
};

class Rectangle : public Shape {
public:
  void draw() {
    cout << "Drawing a rectangle." << endl;
  }
};

int main() {
  Shape *shape;

  shape = new Circle();
  shape->draw();

  shape = new Rectangle();
  shape->draw();

  return 0;
}
