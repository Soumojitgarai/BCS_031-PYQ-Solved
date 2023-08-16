#include <iostream>

using namespace std;

class LargestNumber {
public:
  int number1;
  int number2;
  int number3;

  int find_largest_number() {
    if (number1 > number2 && number1 > number3) {
      return number1;
    } else if (number2 > number1 && number2 > number3) {
      return number2;
    } else {
      return number3;
    }
  }
};

int main() {
  LargestNumber largest_number;

  largest_number.number1 = 10;
  largest_number.number2 = 20;
  largest_number.number3 = 30;

  int largest_number_value = largest_number.find_largest_number();

  cout << "The largest number is: " << largest_number_value << endl;

  return 0;
}
