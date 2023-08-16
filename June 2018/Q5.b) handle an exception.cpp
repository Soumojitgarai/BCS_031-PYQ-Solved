#include <iostream>

using namespace std;

int main() {
  int number;

  try {
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
      throw "The number must be non-negative.";
    }

    cout << "The number is: " << number << endl;
  } catch (const char *exception) {
    cout << exception << endl;
  } finally {
    cout << "The finally block is always executed." << endl;
  }

  return 0;
}
