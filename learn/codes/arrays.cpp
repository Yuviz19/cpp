#include <iostream>

using namespace std;

// u can use the sizeof(arr) to get the size of the array
int totalChaiServed(int chai[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    total += chai[i];
  }

  return total;
}

// to return an array from a function
// we can return the memory address of first element of array
// aka pointer

// * - this is the data type
// & - is used to give the value of the item

int *prepareChaiOrders(int cups) {
  int *orders = new int[cups];
  for (int i = 0; i < cups; i++) {
    orders[i] = (i * 1) * 10;
  }

  return orders;
}

int main() {
  // array provides continous memory allocation
  // array is collection of similar data types
  // note the array indexing is from zero

  int chaiTemp[5] = {85, 90, 50, 100, 105};

  cout << "Chai Temperaturs: ";

  for (int i = 0; i < 5; i++) {
    cout << chaiTemp[i] << "degree C";
  }

  int cups = 5;
  int *chaiOrder = prepareChaiOrders(cups);

  return 0;
}
