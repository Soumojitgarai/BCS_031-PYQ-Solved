#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int factorialOfNumber = factorial(number);

  cout << "The factorial of " << number << " is: " << factorialOfNumber << endl;

  return 0;
}
