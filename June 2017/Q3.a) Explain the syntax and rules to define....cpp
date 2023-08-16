class ClassName {
  public:
    static int data; // Static data member

    static void setData(int value) {
      data = value;
    }

    static int getData() {
      return data;
    }
};

int ClassName::data = 10; // Initialize static data member

int main() {
  ClassName::setData(20); // Set static data member

  cout << ClassName::getData() << endl; // Print static data member

  return 0;
}
