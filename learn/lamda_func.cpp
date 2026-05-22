#include <iostream>

using namespace std;

// lambda functions - main fucntionality in frameworks and libraries
int main() {

  // lamda - unnamed functions, that are not going to be used again
  // auto is used to give the data types on their own.
  auto preparedChai = [](int cups) {
    cout << "Preparing " << cups << " of tea" << endl;
  };
  // they get removed from memory once work is done.

  preparedChai(5);

  return 0;
}
