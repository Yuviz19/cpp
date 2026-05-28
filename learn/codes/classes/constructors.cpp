#include <iostream>
#include <vector>

using namespace std;

// everytime a class is called a constructor is called,
// if not made, compiler makes it, otherwise overwritten
class Chai {
public:
  string teaName;
  int servings;
  vector<string> ingredients;

  // defaul constructor
  Chai() {
    teaName = "Unknown Tea";
    servings = 1;
    ingredients = {"Water", "Tea Leaves"};
    cout << "constructor called" << endl;
  }

  void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "ingredients: ";
    for (string ingredient : ingredients) {
      cout << ingredient << " ";
    }
    cout << endl;
  }
};

int main() {
  Chai defaultChai;

  return 0;
}
