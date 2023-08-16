#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float f = 12.3456;

  cout << setw(10) << right << setprecision(2) << setfill('*') << showpoint << f << endl;

  return 0;
}
