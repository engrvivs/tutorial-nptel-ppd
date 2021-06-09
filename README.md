# Programming in C++03 - Prof. Partha Pratim Das, CSE, IIT Kharagpur

Develop Status: [![Lines Of Code](https://tokei.rs/b1/github/XAMPPRocky/tokei?category=code)](https://github.com/engrvivs/tutorial-nptel-ppd) ![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/engrvivs/tutorial-nptel-ppd) [![Build Status](https://travis-ci.com/engrvivs/tutorial-nptel-ppd.svg?branch=main)](https://travis-ci.com/engrvivs/tutorial-nptel-ppd) [![codecov](https://codecov.io/gh/engrvivs/tutorial-nptel-ppd/branch/main/graph/badge.svg?token=trEpzuvPIS)](https://codecov.io/gh/engrvivs/tutorial-nptel-ppd)

## Build Process

```bash
$ ./script/build.sh
Type 0 for normal build ELSE 1 to check unit Tests and get Code Coverage: 0
...

$ ./buildMake/create_rect
```

## Notes

- Implementations, as discussed during the course

- `l`-value refers to address of the variable
- `r`-value refers to value
- computation does NOT necessarily starts with `main`
  - infact, it starts with static objects
- Object is constructed, after the initializer list is executed
- pointer objects created through placement `new()` operator
must **EXPLICITLY** called its Destructor at the end of the scope

## Module 02: I/O, Variable Declaration, Standard Library, Loop

## Module 03: Array(fix/variable sized), Vector and String

## Module 04: Sorting and Searching

## Module 05: Stack and Its Applications

- Reverse string
- Evaluate postfix expression
- Identify palindrom (w/ and w/o center-marker)
- Convet infix to postfix
- Depth-First Search (DFS)

- Containers in C++ Standard Library:
  - `stack`, `queue`, `dqueue`, `list`, `map` (name-value pair), (unordered) `set`

## Procedural Extensions to C

### Module 06: `const` vs Manifest Constants and `inline` Functions vs MACROS

- Manifest constant (#define) is replaced by C Pre-Processor (CPP)
  - `NULL` is set to `0` in C/C++
- `const` variable must be initialized, when defined (evaluated during init.)
  - `const int n = 10;`
  - `const Complex c = {2.3, 7.5};`
  - `const int *p = &n;`
- Compiler knows data type and scope of `const` variable
- Can be watched in debugger
- Value of `const` variable canNOT be changed after definition; compilation error:
  - `n = 5;`
  - `c.re = 3.5;`
  - `int *p = &n;  // else n may be changed by *p = 4;`
- Compiler does NO see macros as functions
  - `#define SQUARE(x) ((x) * (x))`
  - `SQUARE(++a) == (((++a) * (++a)))`

### Module 07: Reference - alias/synonym of existing variable

- different names but same address
- MUST be initialized to a variable: `int &j = i;`
- vs Pointer:
  - NOT NULL
    - NULL checking NOT required -- faster code
  - FIXED referent
  - NOT allow users to operate on address
  - operation on reference are interpreted on the referent

```C++
/* ERROR */
int &j;  // no variable to refer to; canNOT be NULL
int &k = 5;  // no address, as 5 is constant
int &m = j + k;  // temporary address
//
/* CORRECT */
int &j = i;
// below two cannot be changed
const int &k = 5;
const int &m = j + k;
```

### Module 08: `default` Parameters and Function Overloading

- default arguments may be expressions, which can be evaluated during compilation
- In practice, give default values during declaration (or 1st definition) NOT in definition

### Module 09: Operator Overloading

- Unary prefix: MyType& operator++(MyType&)
- Unary postfix: MyType operator++(MyType&, int non_passed_para)
- NOT allowed for . :: ?: sizeof
  - :: compile time scope resolution
- Try NOT overload && || , &

### Module 10: Dynamic Memory Managment

- allocates exact amount of memory from heap (free memory store)
- passing NULL pointer to `delete` is secure
- `new`, `delete` operators
  - operator `new` and function `operator new()` are DIFFERENT entities for user-defined types
- Array `new[]`, `delete[]`
- Placement `new()` allocator for specific memory address

## Object-Oriented Features of C++

### Module 11: Class and Objects

- ordered tuple of data members decide the object's state at any time
- `this` pointer is implicitly passed to and is accessible *ONLY in* methods
- `UDT * const this`
  - constant pointer to UDT
- Access specifiers help to control visibility of members of a class
- Data Hiding allows change in containers, without changing application

### Module 13: Constructor and Destructor

- Initializer List: compiler initialize in the UNIQUE order in which they written in the class
- same name of the class
- `this` pointer is accessible
- no return type (not even `void`)
- implicit call by instantiation (at end of scope) or operator `new` (`delete`)
- no parameter and no overloading allowed for Destructor
- Destructor is UNIQUE for a class
- Object Lifetime
  - When is an object ready?
  - How long can the object be used?
- Destructors are called in the reverse order of Constructors
  - because later object(s) may be dependent on previous object(s)
- For array of objects, a default constructor must be supported
- Memory for an object must be available BEFORE its construction
- Memory for the object can be released *only* AFTER its destruction

## References

- [Prof. Partha Pratim Das, "Programming in C++", NPTEL, IIT Kharagpur](https://nptel.ac.in/courses/106/105/106105151/)
