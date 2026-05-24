#include <iostream>

using namespace std;

// now using an ampersand, lets to change the value at source
void pourChai(int &cups) {
  cups += 5;
  cout << "Poured Cups: " << cups << endl;
}

int main() {
  int cups = 2;
  pourChai(cups);

  return 0;
}
