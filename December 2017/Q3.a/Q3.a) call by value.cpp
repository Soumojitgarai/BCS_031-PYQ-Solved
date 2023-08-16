#include <iostream>

using namespace std;

void changeValue(int x) {
  x = x + 1;
}

int main() {
  int a = 10;

  changeValue(a);

  cout << a << endl; // Prints 10

  return 0;
}
