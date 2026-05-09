#include <iostream>
#include <string>

// WAP that taked user's favourite tea as input using getline and also asks how
// many cups of tea they want using cin. Dislay the result in a fun message

int main() {
  std::string favTea;
  int teaCups;

  std::cout << "What is your favourite Tea Type?\n: ";
  std::getline(std::cin, favTea);

  std::cout << "How many cups of " << favTea << " would you like to have?\n: ";
  std::cin >> teaCups;

  std::cout << teaCups << " of " << favTea << "\nDang! you have a great taste!";
  return 0;
}
