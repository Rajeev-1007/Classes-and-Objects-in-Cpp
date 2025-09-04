# Classes-and-Objects-in-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: To Study and implement classes and objects in C++.

Software Used: VS Code.

Theory: In C++, classes are user-defined data types that encapsulate data and functions. They serve as blueprints for creating objects, which are instances of classes. This supports object-oriented programming by enabling abstraction, encapsulation, inheritance, and polymorphism.
A class defines attributes (data members) and behaviors (member functions). Access specifiers like public, private, and protected control visibility.

Syntax:

    class ClassName {
    private:
    int data;           // private data member
    public:
    void setData(int d) { data = d; }  // public member function
    int getData() { return data; }
    };

Object Creation:

    ClassName obj;          // object instantiation
    obj.setData(10);        // accessing member function

Objects use the dot operator (.) to access public members. Constructors initialize objects, and destructors clean up. Classes can also be defined with member initializers, overloaded functions, and inheritance for advanced design.
In essence, classes and objects bring structure and modularity to C++ programs.


Algorithm

1) Calculator Algorithm

- **Step 1:** Start

- **Step 2:** Define a class `Calculator` with:
  - Two float data members: `num1`, `num2`
  - A constructor to initialize `num1` and `num2`

- **Step 3:** Define member functions:
  - `add()` returns `num1 + num2`
  - `subtract()` returns `num1 - num2`
  - `multiply()` returns `num1 * num2`
  - `divide()` returns `num1 / num2` if `num2 ≠ 0`, else returns `0`

- **Step 4:** In `main()`:
  - Prompt user to input two float numbers `a` and `b`
  - Create object `c` of class `Calculator` using `a` and `b`

- **Step 5:** Call and display:
  - `add()`
  - `subtract()`
  - `multiply()`
  - `divide()` if `b ≠ 0`, else display error message

- **Step 6:** End

---


