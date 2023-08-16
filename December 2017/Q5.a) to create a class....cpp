#include <iostream>

using namespace std;

class Employee {
  protected:
    string name;
    string address;
    int age;

  public:
    Employee(string name, string address, int age) {
      this->name = name;
      this->address = address;
      this->age = age;
    }

    void setName(string name) {
      this->name = name;
    }

    void setAddress(string address) {
      this->address = address;
    }

    void setAge(int age) {
      this->age = age;
    }

    string getName() {
      return name;
    }

    string getAddress() {
      return address;
    }

    int getAge() {
      return age;
    }
};

class PartTimeEmployee : public Employee {
  private:
    float hourlyPayment;

  public:
    PartTimeEmployee(string name, string address, int age, float hourlyPayment) :
        Employee(name, address, age) {
      this->hourlyPayment = hourlyPayment;
    }

    void setHourlyPayment(float hourlyPayment) {
      this->hourlyPayment = hourlyPayment;
    }

    float getHourlyPayment() {
      return hourlyPayment;
    }

    void display() {
      cout << "Name: " << name << endl;
      cout << "Address: " << address << endl;
      cout << "Age: " << age << endl;
      cout << "Hourly Payment: " << hourlyPayment << endl;
    }
};

int main() {
  PartTimeEmployee emp("John Doe", "123 Main Street", 25, 15);

  emp.display();

  return 0;
}
