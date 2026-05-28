#include <iostream>
#include <string>
#include <vector>

using namespace std;

// let's say we are allocating memory to a variable dynamically
class Chai {
public:
  string *teaName;
  int servings;
  vector<string> ingredients;

  Chai(string name, int serve, vector<string> ingre) {
    teaName = new string(name);
    servings = serve;
    ingredients = ingre;
    cout << "constructGor called" << endl;
  }

  // now we need to call a destructor too..
  // otherwise it is automatically called =
  ~Chai() { delete teaName; }

  // to create a deep copy of the object
  Chai(const Chai &other) {
    teaName = new string(*other.teaName);
    servings = other.servings;
    ingredients = other.ingredients
  }

  void displayChaiDetails() {
    cout << "Tea Name: " << *teaName << endl;
    cout << "ingredients: ";
    for (string ingredient : ingredients) {
      cout << ingredient << " ";
    }
    cout << endl;
  }
};

int main() {
  Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
  lemonTea.displayChaiDetails();

  // copy the object
  // Chai copiedChai = lemonTea; // this is also s valid syntax
  // when the lemon tea is copied, this give an error as the destructor of lemon
  // tea is called and the copy is hard to manage

  // then what is the difference
  // *lemonTea.teaName = "Modified Tea"; // this will not wprk for copied tea

  *lemonTea.teaName = "Modified Lemon Tea";

  return 0;
}
