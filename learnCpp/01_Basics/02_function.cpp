#include <iostream>

void doPrint() { std::cout << "Hello \n"; }

// return values
int getNumber() { return 5; }

// actual function that has optional parameters,
// this can be called with doSomething(), or an argument can be passed
void doSomething(int count = 3) {
} // here the variable count is not used, hence called unrefferenced parameter

// so if a parameter is optional, then we can do
void doSomething2(int) {}

// or in google's style
void doSomething3(int /* count */) {}

int main(int argc, char *argv[]) {

  std::cout << "Start main \n";
  doPrint();
  std::cout << "End main \n";

  int x{getNumber()};

  return 0;
}

// note that nested functions are not supported in cpp
// 1. parameters and arguments
// parameters - the values listed in the definition of the function
// arguments - the actual value that is passed in the function
