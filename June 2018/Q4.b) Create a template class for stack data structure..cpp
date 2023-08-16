#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
  T *data;
  int top;
  int capacity;

public:
  Stack(int capacity) {
    this->data = new T[capacity];
    this->top = -1;
    this->capacity = capacity;
  }

  ~Stack() {
    delete[] data;
  }

  bool isFull() {
    return top == capacity - 1;
  }

  bool isEmpty() {
    return top == -1;
  }

  void push(T item) {
    if (isFull()) {
      cout << "Stack is full. Cannot push." << endl;
      return;
    }

    top++;
    data[top] = item;
  }

  T pop() {
    if (isEmpty()) {
      cout << "Stack is empty. Cannot pop." << endl;
      return T();
    }

    T item = data[top];
    top--;
    return item;
  }

  T peek() {
    if (isEmpty()) {
      cout << "Stack is empty. Cannot peek." << endl;
      return T();
    }

    return data[top];
  }

  int size() {
    return top + 1;
  }
};
