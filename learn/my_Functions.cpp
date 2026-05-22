#include <iostream>
#include <string>

// fucntion declaration and definition
int checkTemperature(int temp) { return temp; }

// declaration
void serveChai(int cups);

// function overloading & with default parameter
void serveChai(std::string teaType = "Masala Tea") {
  std::cout << "Serving " << teaType << std::endl;
}

int main() {
  int temp = checkTemperature(50); // calling a function.
  std::cout << temp;

  serveChai("Lemon Tea"); // actual parameter
  return 0;
}

// definition of function
void serveChai(int cups) { std::cout << "Serving " << cups << " of chai"; }
