#include <iostream>

using namespace std;

class Person {
  public:
    string name;
    int age;

    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }

    friend ostream &operator<<(ostream &os, const Person &p) {
      os << "Name: " << p.name << endl;
      os << "Age: " << p.age << endl;

      return os;
    }
};

int main() {
  Person p("John Doe", 25);

  cout << p << endl; // Prints "Name: John Doe
                    // Age: 25"

  return 0;
}
