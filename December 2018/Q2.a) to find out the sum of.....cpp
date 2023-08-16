#include <iostream>

using namespace std;

class SumOfNumbers {
private:
  int n;
  int sum;

public:
  SumOfNumbers(int n) {
    this->n = n;
    this->sum = 0;
  }

  void addNumber(int number) {
    this->sum += number;
  }

  int getSum() {
    return this->sum;
  }
};

int main() {
  int n;
  cout << "Enter the number of numbers: ";
  cin >> n;

  SumOfNumbers sumOfNumbers(n);

  for (int i = 1; i <= n; i++) {
    cout << "Enter number " << i << ": ";
    int number;
    cin >> number;
    sumOfNumbers.addNumber(number);
  }

  cout << "The sum of the numbers is: " << sumOfNumbers.getSum() << endl;

  return 0;
}
