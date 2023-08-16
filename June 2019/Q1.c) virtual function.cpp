class Animal {
public:
  virtual void make_sound() {}
};

class Dog : public Animal {
public:
  void make_sound() override {
    cout << "Woof!" << endl;
  }
};

class Cat : public Animal {
public:
  void make_sound() override {
    cout << "Meow!" << endl;
  }
};

int main() {
  Dog dog;
  Cat cat;

  dog.make_sound(); // Prints "Woof!"
  cat.make_sound(); // Prints "Meow!"

  return 0;
}
