#include <iostream>
#include <string>
#include <vector>

using namespace std;

// getters and setters are used to get and set the values of things based on our
// needs
class Chai {
private:
  string teaName;
  int servings;
  vector<string> ingredients;

public:
  Chai() {
    teaName = "Unknown Tea";
    servings = 1;
    ingredients = {"water", "tea leaves"};
  }

  Chai(string name, int serve, vector<string> ingredients)
      : teaName(name), servings(serve), ingredients(ingredients) {}

  // getter - used to get values
  string getTeaName() { return teaName; }

  // setter - used to set items
  void setTeaName(string name) {
    // logic
    teaName = name;
  }

  // getter for servings
  int getServings() { return servings; }

  // setter for servings
  void setServings(int serve) { servings = serve; }

  // getter for ingredients
  vector<string> setIngredients() { return ingredients; }

  // setter for ingredients
  void setIngredients(vector<string> ingre) { ingredients = ingre; }
};

int main() {
  Chai chai;
  // now u get the access to all functions

  return 0;
}
