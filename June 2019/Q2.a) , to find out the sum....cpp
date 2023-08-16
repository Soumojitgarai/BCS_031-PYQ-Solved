#include <iostream>

using namespace std;

class FriendSum {
private:
  int n;
  int* arr;

public:
  FriendSum(int n) {
    this->n = n;
    arr = new int[n];
  }

  void input() {
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
  }

  int sum() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i];
    }
    return sum;
  }

  friend int sum_of_numbers(FriendSum fs); // This is a friend function.
};

int sum_of_numbers(FriendSum fs) {
  return fs.sum();
}

int main() {
  int n;
  cin >> n;

  FriendSum fs(n);
  fs.input();

  int sum = sum_of_numbers(fs);

  cout << sum << endl;

  return 0;
}
