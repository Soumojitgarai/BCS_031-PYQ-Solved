class Person {
  public:
    string name;

    void sayHello() {
      cout << "Hello! My name is " << this->name << endl;
    }
};

int main() {
  Person p;
  p.name = "John Doe";

  p.sayHello();

  return 0;
}
