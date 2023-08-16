#include <iostream>

using namespace std;

class Matrix {
  private:
    int rows;
    int columns;
    int **data;

  public:
    Matrix(int rows, int columns) {
      this->rows = rows;
      this->columns = columns;
      this->data = new int *[rows];
      for (int i = 0; i < rows; i++) {
        this->data[i] = new int[columns];
      }
    }

    ~Matrix() {
      for (int i = 0; i < rows; i++) {
        delete[] this->data[i];
      }
      delete[] this->data;
    }

    void setData(int row, int column, int value) {
      this->data[row][column] = value;
    }

    int getData(int row, int column) {
      return this->data[row][column];
    }

    Matrix add(Matrix &m) {
      Matrix sum(rows, columns);
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
          sum.setData(i, j, this->getData(i, j) + m.getData(i, j));
        }
      }

      return sum;
    }
};

int main() {
  Matrix m1(2, 3);
  m1.setData(0, 0, 1);
  m1.setData(0, 1, 2);
  m1.setData(0, 2, 3);
  m1.setData(1, 0, 4);
  m1.setData(1, 1, 5);
  m1.setData(1, 2, 6);

  Matrix m2(2, 3);
  m2.setData(0, 0, 7);
  m2.setData(0, 1, 8);
  m2.setData(0, 2, 9);
  m2.setData(1, 0, 10);
  m2.setData(1, 1, 11);
  m2.setData(1, 2, 12);

  Matrix sum = m1.add(m2);

  for (int i = 0; i < sum.rows; i++) {
    for (int j = 0; j < sum.columns; j++) {
      cout << sum.getData(i, j) << " ";
    }
    cout << endl;
  }

  return 0;
}
