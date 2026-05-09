#include <iostream>
#include <string> // required for using strings

int main() {

  int tealeaves = 50;
  float waterTemp = 85.5;
  double priceTea = 299.99;
  char teaGrade = 'A';
  bool isTeaReady = false;

  std::string favoriteTea = "Lemon Tea\n"; // string comes under std namespace
  std::string description = "Known as the \"Beat\" tea";
  // use escape sequence to write characters as normal chars and not as code
  // tokens

  std::cout << favoriteTea << description << std::endl;

  return 0;
}
