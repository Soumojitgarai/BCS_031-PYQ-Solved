#include <iostream>

using namespace std;

void changeReference(int &x) {
  x = x + 1;
}

int main() {
  int a = 10;

  changeReference(a);

  cout << a << endl; // Prints 11

  return 0;
}
