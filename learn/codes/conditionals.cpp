#include <iostream>

// Write an if statement that checks if age >= 18
// If true, print "Allowed" inside the if block
// Write an else statement
// Inside the else block, print "Not allowed"

int main() {
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 18) {
    std::cout << "allowed" << std::endl;
  } else {
    std::cout << "Not allowed";
  }

  return 0;
}
