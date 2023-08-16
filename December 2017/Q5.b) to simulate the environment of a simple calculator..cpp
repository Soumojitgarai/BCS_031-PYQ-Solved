#include <iostream>

using namespace std;

int main() {
  // Declare variables for the two operands and the operator.
  float num1, num2;
  char operator;

  // Get the two operands from the user.
  cout << "Enter the first operand: ";
  cin >> num1;

  cout << "Enter the second operand: ";
  cin >> num2;

  // Get the operator from the user.
  cout << "Enter the operator (+, -, *, or /): ";
  cin >> operator;

  // Switch on the operator.
  switch (operator) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;
    default:
      cout << "Invalid operator!" << endl;
  }

  return 0;
}
