class Counter {
public:
  static int count; // This is a static data member.

  static void increment_count() {
    count++;
  }
};

int Counter::count = 0; // This is the initialization of the static data member.

int main() {
  Counter::increment_count(); // This increments the static data member.
  Counter::increment_count();

  cout << Counter::count << endl; // Prints "2".

  return 0;
}
