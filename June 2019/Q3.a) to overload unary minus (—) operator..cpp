#include <iostream>

using namespace std;

class Number {
private:
  int value;

public:
  Number(int value) {
    this->value = value;
  }

  int get_value() {
    return value;
  }

  // Overriding the unary minus (-) operator.
  Number operator-() {
    return Number(-value);
  }
};

int main() {
  Number number(10);

  // Using the overloaded unary minus (-) operator.
  Number negative_number = -number;

  cout << negative_number.get_value() << endl; // Prints "-10".

  return 0;
}
