#include <iostream>

using namespace std;

class Teacher {
public:
  virtual double salary() = 0; // pure virtual function
};

class AssociateProfessor : public Teacher {
public:
  double salary() {
    return 50000;
  }
};

int main() {
  AssociateProfessor associateProfessor;

  double salary = associateProfessor.salary();

  cout << "The salary of the associate professor is: " << salary << endl;

  return 0;
}
