class Person {
  private:
    string name;
    int age;

  protected:
    string address;

  public:
    string getName() {
      return name;
    }

    void setName(string name) {
      this->name = name;
    }

    int getAge() {
      return age;
    }

    void setAge(int age) {
      this->age = age;
    }

    string getAddress() {
      return address;
    }

    void setAddress(string address) {
      this->address = address;
    }
};

int main() {
  Person p;
  p.setName("John Doe");
  p.setAge(25);
  p.setAddress("123 Main Street");

  cout << p.getName() << endl; // Prints "John Doe"
  cout << p.getAge() << endl; // Prints 25
  // cout << p.address << endl; // This will not compile because address is protected

  return 0;
}
