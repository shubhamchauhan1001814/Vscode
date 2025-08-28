// Type Casting in C++

// Type casting, also known as type conversion, is the process of converting a variable from one datatype to another. In C++, type casting can be done in several ways:

// Implicit Type Conversion: This type of conversion is done by the compiler automatically when it detects a data type mismatch. For example, converting an int to a float in an arithmetic operation.
// Explicit Type Conversion: This process is also called casting and it is user-defined. Here, the user can typecast the result to make it of a particular data type. Sometimes, you may need to explicitly convert a variable from one type to another. In C++, it can be done by two ways:
// By using explicit cast operator (C-style), i.e., putting the name of one data type before another during assignment.
// By using cast operators like static_cast<>, dynamic_cast<>, const_cast<>, reinterpret_cast<>.
// Syntax:

// (type) expression

// where type indicates the data type to which the final result is converted.

// Conversion using Cast Operator: A Cast operator is an unary operator which forces one data type to be converted into another data type. C++ supports four types of casting:

// static_cast<>
// dynamic_cast<>
// const_cast<>
// reinterpret_cast<>
// Example Program
// Here’s a simple C++ program demonstrating both implicit and explicit type casting:

// #include <iostream>
// using namespace std;

// int main() {
//     // Implicit Type Conversion
//     int a = 10;
//     double b = a; // int to double
//     cout << "Implicit Type Conversion: " << b << endl;

//     // Explicit Type Conversion
//     double c = 9.7;
//     int d = static_cast<int>(c); // double to int
//     cout << "Explicit Type Conversion using static_cast: " << d << endl;

//     return 0;
// }

// This program shows how an int can be implicitly converted to a double, and how a double can be explicitly converted to an int using static_cast<>.

// Type Casting in C++

// C++ supports four types of casting:

// Static Cast
// Dynamic Cast
// Const Cast
// Reinterpret Cast
// In the context of typecasting in programming, a “corner case” or “edge case” refers to a scenario that is atypically different from the general cases and can cause the program to behave unexpectedly or erroneously. For typecasting, corner cases can include situations where the value being cast is at its limits or boundaries for the target data type. For example, when casting a large positive integer to a smaller data type like char, some part of its information (floating-point values) would be truncated during conversion. Therefore, when typecasting is not strictly necessary or might lead to unexpected behavior, these edge cases are important to consider when designing robust software systems.

// Example Program
// Here’s a simple C++ program demonstrating the use of different cast operators:

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "Base class" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() override {
//         cout << "Derived class" << endl;
//     }
// };

// int main() {
//     // Static Cast
//     int a = 10;
//     double b = static_cast<double>(a);
//     cout << "Static Cast: " << b << endl;

//     // Dynamic Cast
//     Base* basePtr = new Derived();
//     Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
//     if (derivedPtr != nullptr) {
//         derivedPtr->show();
//     }

//     // Const Cast
//     const int x = 100;
//     int& y = const_cast<int&>(x);
//     y = 200;
//     cout << "Const Cast: " << y << endl;

//     // Reinterpret Cast
//     int* p = new int(65);
//     char* ch = reinterpret_cast<char*>(p);
//     cout << "Reinterpret Cast: " << *ch << endl;

//     delete basePtr;
//     delete p;

//     return 0;
// }

// This program demonstrates:

// Static Cast: Converting an int to a double.
// Dynamic Cast: Safely casting a base class pointer to a derived class pointer.
// Const Cast: Removing the const attribute from a variable.
// Reinterpret Cast: Interpreting the bits of an int pointer as a char pointer.