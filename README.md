# Classes-and-Objects-in-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

**Aim:** To Study and implement classes and objects in C++.

**Software Used:** VS Code.

Theory: In C++, classes are user-defined data types that encapsulate data and functions. They serve as blueprints for creating objects, which are instances of classes. This supports object-oriented programming by enabling abstraction, encapsulation, inheritance, and polymorphism.
A class defines attributes (data members) and behaviors (member functions). Access specifiers like public, private, and protected control visibility.

**Syntax:**

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


**Algorithm**

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

2) Vehicle Information Algorithm

- **Step 1:** Start

- **Step 2:** Define a class `Vehicle` with the following public data members:
  - `company` (string)
  - `model` (string)
  - `made_in` (string)
  - `type` (string)
  - `year` (float)
  - `price` (float)

- **Step 3:** In `main()`:
  - Declare object `v1` of class `Vehicle`
  - Prompt user to enter `type` of vehicle

- **Step 4:** If `v1.type == "Car"`:
  - Input `company`, `model`, `made_in`, `year`, and `price`
  - Else, display message: "PLEASE ENTER THE DETAILS OF CAR ONLY"

- **Step 5:** Declare object `v2` of class `Vehicle`
  - Prompt user to enter `type` of vehicle

- **Step 6:** If `v2.type == "Bike"` or `v2.type == "Motorcycle"`:
  - Input `company`, `model`, `made_in`, `year`, and `price`
  - Else, display message: "PLEASE ENTER THE DETAILS OF BIKE/MOTORCYCLE ONLY"

- **Step 7:** End

3) Student info Algorithm
   
- **Step 1:** Start

- **Step 2:** Define a class `Student` with the following public data members:
  - `name` (string)
  - `branch` (string)
  - `subject` (string)
  - `year` (string)
  - `result` (float)

- **Step 3:** In `main()`:
  - Create object `s1` of class `Student`
  - Assign values to `s1.name`, `s1.branch`, `s1.subject`, and `s1.result`
  - Display `s1` details using `cout`

- **Step 4:** Create object `s2` of class `Student`
  - Assign values to `s2.name`, `s2.branch`, `s2.subject`, and `s2.result`
  - Display `s2` details using `cout`

- **Step 5:** End

4) Rectangle Area Algorithm.
   
- **Step 1:** Start

- **Step 2:** Define a class `Rectangle` with:
  - `length` (float)
  - `width` (float)
  - Member function `area()` that returns `length * width`

- **Step 3:** In `main()`:
  - Create object `r` of class `Rectangle`
  - Prompt and input `r.length`
  - Prompt and input `r.width`
  - Call `r.area()` and display the result

- **Step 4:** End

**Conclusion:** 
Classes and objects in C++ enable modular, reusable, and organized code by encapsulating data and behavior. A class defines the structure, while objects are instances that operate on that structure. This approach supports abstraction, encapsulation, and scalability, forming the foundation of object-oriented programming in C++ for real-world applications.
