#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "Hello";

  // comments
  // varaibles - the below is a method, called direct initialization

  int width{5};    // can be done with () also
  int breadth = 5; // this is called copy initialization

  // the best practice is value initialization or zero initialization
  int height{}; // stores value 0 in height -> use this when u want to change
                // this value
  std::cin >> height;

  int a = 5, b = 6; // copy-initialization
  int c(7), d(8);   // direct-initialization
  int e{9}, f{10};  // direct-list-initialization
  int i{}, j{};     // value-initialization

  // when variables are declared but now used
  [[maybe_unused]] double pie{3.14159};

  return 0;
}
