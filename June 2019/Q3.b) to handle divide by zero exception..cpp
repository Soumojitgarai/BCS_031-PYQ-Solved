#include <iostream>
#include <exception>

using namespace std;

int divide(int x, int y) {
  if (y == 0) {
    throw exception(); // Throwing an exception.
  }

  return x / y;
}

int main() {
  int x, y;
  cin >> x >> y;

  try {
    int result = divide(x, y);
    cout << result << endl;
  } catch (exception& e) {
    cout << "Division by zero error." << endl;
  }

  return 0;
}
