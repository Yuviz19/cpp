#include <iostream>
#include <string>

using namespace std;

class Chai {
private:
  string teaName;
  int serving;

public:
  Chai(string name, int serve) : teaName(name), serving(serve) {}

  // without referencing, a copy of objects is passed, in larger codebases, the
  // copying is costly
  friend bool compareSerings(const Chai &chai1, const Chai &chai2);

  void display() const { cout << "tea name: " << teaName << endl; }
};

bool compareSerings(const Chai &chai1, const Chai &chai2) {
  return chai1.serving > chai2.serving;
}

int main() {
  Chai massalaChai("Masala Chai", 2);
  Chai gingerTea("Ginger Tea", 4);

  massalaChai.display();
  gingerTea.display();

  // now lets say we have to compare the servings of the tea.
  // but serving variable is private
  // hence we make a function to expose the private and protected variables

  if (compareSerings(massalaChai, gingerTea)) {
    cout << "Masala Chai is having more servings";
  } else {
    cout << "Masala Chai is having less servings";
  }

  return 0;
}
