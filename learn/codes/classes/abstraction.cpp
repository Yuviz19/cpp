#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// the following class is an abstract class
// as this class contains atleast one virtual function

// a virtual function does not talk about the details of a function
// it is merely a boiler plate
// they are redifined in the derived classes
class Tea {
public:
  virtual void prepareIngredients() = 0;
  virtual void brew() = 0;
  virtual void serve() = 0;
  // they are meant to be overwritten

  void makeTea() {
    prepareIngredients();
    brew();
    serve();
  }
};
// no one expects us to make objects from abstract classes
// it always stays like a contract noe

// derived class
class GreenTea : public Tea {
public:
  // overwriting the virtual function
  void prepareIngredients() override {
    cout << "Green Leaves and water is ready" << endl;
  }

  void brew() override { cout << "The tea is getting brewed" << endl; }

  void serve() override { cout << "Your Tea is ready!" << endl; }
};

int main(int argc, char *argv[]) {
  GreenTea greenTea;
  greenTea.makeTea(); // now this function works properly
  return 0;
}
