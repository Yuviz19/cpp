# Access Specifiers
- think of a class like a house
- the members (variables and functions) inside the class are rooms
- Access Specifiers tells who gets a key to which room.

```c++
class BankAccount {
public:
    string owner;

protected:
    double balance;

private:
    string password;
};
```

1. public
- anything marked under public can be accessed from anywhere
  BankAccount acc;
  acc.owner = "void";

2. private
- only the class itself gets a key
- anything marked under here, can be accessed only by the member functions of that class
- the derived classes also gets the access
  BankAccount acc;
  acc.password = "1234"; // ERROR

```cpp
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }
};
```

3. protected
- family members get a key
- it is mainly used for inheritance
