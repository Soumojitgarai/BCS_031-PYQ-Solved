class A {
  public:
    void doSomething() {
      cout << "I'm doing something!" << endl;
    }
};

class B {
  public:
    void sendMessage(A *a) {
      a->doSomething();
    }
};

int main() {
  A *a = new A();
  B *b = new B();

  b->sendMessage(a);

  return 0;
}
