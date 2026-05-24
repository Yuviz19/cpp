# C++

## Introduction

```c
#include <iostream>
int main() {
  std::cout << "hello world!" << std::endl;
  return 0;
}
```

> Hello World in cpp.
> my main reason to learn cpp is to 
  1. do DSA 
  2. make fast APIs 
  3. and learn system and cloud designs (with Go lang)

#### The Anatomy - 

1. #include - this is called the preprocessor directive, and this is an inclusive directive, which is used to include a file, which controls the input and output streams.

2. namespaces - these are separate spaces in the universal codebase that contain several methods of the libraries that we are including out codebase.

3. main function - this is the code entry point.

## Var and Const

```c
  int score;         // declaration
  score = 100;       // initialization 
  // identifiers - these are user-defined names given to elements.

  // for variables that are not meant to be changed
  const int balance = 98;
```

## Data Types

### Primitive
- the ones that are already drilled into the memory
  - int
    - __int8 - 1 byte 
    - __int16 - 2 bytes
    - __int32
    - __int64
  - float (32 bits)(7 decimal places)
  - double (64 bits)(15-16 decimal places)
  - char (single char)
  - bool (1 or 0/True or False)
  - void (here empty)(in other langs it might be don't care)

### Derived
- Primitive with some extra features
  - array (collection of similar data types)
  - function 
  - pointer
  - reference

### User Defined
- the ones that are made by the user for special use cases
 - structure
 - Union 
 - enum
 - class
 - typedef

#### Data Type Modifiers
- these are used to modify the existing data types 
  - unsigned (used to remove the signs{only positive})
  - long
  - long long
  - short 

#### Type Casting
to convert from one data type to the another
  eg.
```c

float temp = 69.67;
int roundedTemp = (int) temp;
```

#### String 
these are a collection of characters, 
  1. import string file to use it 
  2. and string datatype comes under std namespace

## User Input
- getline()
  - this is used to get a line or a collection of strings.
  - to use it getline(cin, variable)

- cin 
  - this is used to get a sequence of something, or until there is space or tab.
  - this treats space or tab as the EOL.
  - use cin >> variable.

## Operators 
- symbols that allow data manipulation and, it takes some operands
  1. unary 
  2. Binary
  3. Ternary
- based on the number of variables it take in

- Arithmetic Operators
  - +,-,*,/ and %
- Assignment Operators
  - =,+=,-=,*=,/= and %=
- Relational Operators
  - <,> <=, >=
- Logical Operators
  - && and || (and or)
- Bitwise Operators
  - used to do stuff with binary numbers

## Conditionals
- use of if, else if ✅
-- Ternary Operator 
  - syntax => variable = (condition) ? exp_True : exp_False;

-- switch-case
- this is used to select one of many blocks of code
- syntax
```c
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

- break and default is are optional keywords.
- break is used to break out of the switch blocks
- default statement is used, when none of the case matches

## Loops
- while, do..while, for loops.
- refer to the loop challenges.(not done till now)

## Functions
- syntax
- returnType functionName(parameters){ //body }

- void return type means empty and we return nothing.
- refer to the code at ./my_Functions.cpp, ./my_Functions_two.cpp and ./my_Functions_three.cpp

- the files are about basic functions, passing by reference and values too
- lamda functions - refer to file ./lamda_func.cpp

```c
#include <iostream>
using namespace std;
// lambda functions - main fucntionality in frameworks and libraries

int main() {
  // lamda - unnamed functions, that are not going to be used again
  // auto is used to give the data types on their own.
  auto preparedChai = [](int cups) {
    cout << "Preparing " << cups << " of tea" << endl;
  };
  // they get removed from memory once work is done.
  preparedChai(5);
  return 0;
}
```

## OOPs
- everything is an object.
- class is the original thing, and its instances are called its objects.
