#include <iostream>

int main() {
  // WAP where the user enters a base price for the tea. Use type casting to
  // incearse the price by 10% and display the rounded price.
  float teaPrice;

  std::cout << "What should be the price for your preffered tea flavour?\n:";
  std::cin >> teaPrice;

  int roundedPrice = (int)teaPrice + (teaPrice * 0.1);

  std::cout << "The rounded price is " << roundedPrice;

  return 0;
}
