#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai {
public:
  string teaName;
  int servings;
  vector<string> ingredients;

  // delegating constuctor - its major work is to call another constuctor
  Chai(string name) : Chai(name, 1, {"Water", "Tea Leaves"}) {}

  // main constuctor
  Chai(string name, int serve, vector<string> ingre) {
    teaName = name;
    servings = serve;
    ingredients = ingre;

    cout << "Main constuctor called" << endl;
  }

  void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "Servings: " << servings << endl;
    cout << "Ingredients: ";
    for (string ingre : ingredients) {
      cout << ingre << " ";
    }
    cout << endl;
  }
};

// note the arguments here, in the main function
// int argc tells, how many arguments were passed from the command line
// char *argv[] gives an array of arguments that are passed
// where the 0th element is ./file_name

int main(int argc, char *argv[]) {
  Chai quickChai("Quick Chai");
  // we want to make the scenario something like
  // if we pass "quick chai" into it, then it makes a new object with some
  // specific default values
  quickChai.displayChaiDetails();

  return 0;
}
