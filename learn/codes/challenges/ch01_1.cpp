#include <iostream>
#include <string>

int main() {
  // WAP that declares variables to store the type of tea, its price per kg, and
  // its rating. use data types effecitvely
  std::string teaType = "Lemon Tea";
  float pricePerKg = 305.67;
  char teaRating = 'A';

  std::cout << "Here's your " << teaType << " which costs " << pricePerKg
            << ", and has a rating of " << teaRating << std::endl;

  return 0;
}
