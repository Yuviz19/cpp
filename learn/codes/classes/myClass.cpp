#include <iostream>
#include <string>
#include <vector> // linear data structure, but allows fast random access to any element

using namespace std;

// always use capital letter
class Chai {

  // access modifiers
public:
  // data memebers || attributes
  string teaName;             // name of tea
  int servings;               // number of servings
  vector<string> ingredients; // ingredients of tea

  // member functions
  void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "servings: " << servings << endl;
    cout << "ingredients: ";
    for (string ingredient : ingredients) {
      cout << ingredient << " ";
    }
    cout << endl;
  }
};

int main() {
  // always make opbjects with lowercase
  Chai myChaiOne;
  myChaiOne.teaName = "Lemon Tea";
  myChaiOne.servings = 4;
  myChaiOne.ingredients = {"water", "lemon", "Honey", "Tea"};

  myChaiOne.displayChaiDetails();

  return 0;
}
