#include <iostream>

using namespace std;

// pass by value and pass by reference.
void pourChai(int cups) {
  cups = cups + 5;
  cout << "Poured Cups: " << cups;
}

int main() {
  int chaiCups = 2;
  pourChai(chaiCups); // a copy is passed.
                      // this is pass by value
  // for pass by reference, we make it so that, the variable changes at source.
  return 0;
}
