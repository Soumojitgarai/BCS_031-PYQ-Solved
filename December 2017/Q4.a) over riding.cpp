class Person {
  public:
    void sayHello() {
      cout << "Hello, I am a person!" << endl;
    }
};

class Employee : public Person {
  public:
    void sayHello() {
      cout << "Hello, I am an employee!" << endl;
    }
};

int main() {
  Person p;
  Employee e;

  p.sayHello(); // Prints "Hello, I am a person!"
  e.sayHello(); // Prints "Hello, I am an employee!"

  return 0;
}
