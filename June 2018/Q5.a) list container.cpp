#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> myList;

  myList.push_back(10);
  myList.push_back(20);
  myList.push_back(30);

  for (int i = 0; i < myList.size(); i++) {
    cout << myList[i] << endl;
  }

  myList.erase(myList.begin());

  for (int i = 0; i < myList.size(); i++) {
    cout << myList[i] << endl;
  }

  return 0;
}
