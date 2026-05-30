#include <iostream>
#include <string>

using namespace std;

// base/parent class
class Tea {
protected:
  string teaName;
  int servings;

public:
  Tea(string name, int serve) : teaName(name), servings(serve) {
    cout << "Tea Constructor called " << teaName << endl;
  }

  virtual void brew() const {
    cout << "Brewing " << teaName << " with generic function" << endl;
  }

  virtual void serve() const { cout << "Serving " << teaName << endl; }

  // virtual Destructor
  virtual ~Tea() { cout << "Tea Destructor called " << teaName << endl; }
};

class GreenTea : public Tea {
public:
  GreenTea(int serve) : Tea("Green Tea", serve) {
    cout << "Green Tea Constructor called" << endl;
  }

  void brew() const override { cout << "Brewing " << teaName << endl; }
};

class MasalaTea : public Tea {
public:
  MasalaTea(int serve) : Tea("Masala Tea", serve) {
    cout << "Masala Tea Constructor called " << endl;
  }

  void brew() const override { cout << "Brewing " << teaName << endl; }

  ~MasalaTea() { cout << "Masala Tea Destructor called" << endl; }
};

int main(int argc, char *argv[]) {
  Tea *tea_one = new GreenTea(2);
  Tea *tea_two = new MasalaTea(3);

  tea_one->brew();
  tea_one->serve();

  tea_two->brew();
  tea_two->serve();

  delete tea_one;
  delete tea_two;
  return 0;
}
