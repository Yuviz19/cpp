# Note for importing functions (professionally)

- declare a file "functions.cpp"
- and then with the same name "functions.h"

- now declare the functions in the .h file and define them in the cpp file
- then in the main file
  - #include 'functions.h';

  - inside the .h file put -> #pragma once (ensures that the header file is included and compiled only once)

- then before running compile it
  - g++ main.cpp functions.cpp -o main
  - ./main
