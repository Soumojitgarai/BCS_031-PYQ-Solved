#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Create a file object to write to.
  ofstream output_file("my_file.txt");

  // Write some data to the file.
  output_file << "This is some data in the file." << endl;
  output_file << "The following is another line of data." << endl;

  // Close the file.
  output_file.close();

  // Create a file object to read from.
  ifstream input_file("my_file.txt");

  // Read the data from the file.
  string line;
  while (getline(input_file, line)) {
    cout << line << endl;
  }

  // Close the file.
  input_file.close();

  return 0;
}
