#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
  string teaName;
  int servings;
  vector<string> ingredients;

  // parameterised constructor
  Chai(string name, int serve, vector<string> ingre) {
    teaName = name;
    servings = serve;
    ingredients = ingre;
    cout << "constructGor called" << endl;
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
  Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});

  return 0;
}
