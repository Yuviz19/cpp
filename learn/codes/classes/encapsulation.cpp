#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  double balance;

public:
  BankAccount(string accountNumber, double initbalance) {
    accountNumber = accountNumber;
    balance = initbalance;
  }

  // getter for balance
  double getBalance() const { return balance; }

  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
    } else {
      cout << "Invalid Amount" << endl;
    }
  }

  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
    } else {
      cout << "Invalid/Insufficient Amount" << endl;
    }
  }
};
