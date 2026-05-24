#include <iostream>
#include <string>

int main() {
  std::string userTea;
  int teaQuantity;

  std::cout << "What Tea would you like to order?\n";
  std::getline(std::cin, userTea); // read until enter is pressed

  // get tea qyanity
  std::cout << "How many cups of " << userTea << " would you like to have?\n";
  std::cin >> teaQuantity; // read until the first space

  return 0;
}
