# Pointers

1.
```c
int x = 4;
```

English - integer named x is set to value 4

2.
```c
int * px = &x;
int y = *px; // this is called de-referencing
```

English - pointer named px is set to the address of x
Line 2 - English - integer named y is set to the thing pointed to by px
  - hence the value of y is 4

# References
- is is like an alias or another name for an existing variable
```c
int i = 0;
int &ri = i; // now updating the value of ri, makes the value of i change too..
```

- u can't change the References.
- u can't do maths to References. int &ref = &i+4;

-- some crazy things
- first pointer - 
  - eg 2 in Pointers

- pointer to a pointer
  - int **ppx = &px;

- Address   Variable   Value
  1000      x          1
  2000      pX         1000
  3000      ppX        2000

- ppx contains 2000, *ppx == px
- and **ppx means 
  1. go to ppx
  2. get px
  3. follow px
  4. get x

-- References
- int &ref = x;
  - a reference is an alias, from now on ref is just another name for x.

!> [!NOTE]
> all a reference under the hood is a pointer
