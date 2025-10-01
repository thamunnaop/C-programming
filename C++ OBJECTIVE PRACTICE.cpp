// #include <iostream>
// using namespace std;
// class course
// {  
//   int member;
//   public : int* lfc()
//   { 
//     return & member; 
//   }
// };
// main()
// {
// course s;
// int *ptr=s.lfc();
// return 0;
// }  

// our code has a critical issue: returning the address of a private member of a class, which can lead to undefined behavior.

// Issue 1: Returning Address of a Private Member
// cpp
// Copy
// Edit
// int* lfc() { 
//     return &member;  // Returning address of a private member
// }
// member is a private member of course, and returning its address from lfc() allows main() to access it indirectly.
// This is not recommended because it violates encapsulation.
////////////////////////////////////////////////////////////////////////////////////////
         
// Note:Includes all required header files
// using namespace std;
 
// class Test
// {
//     static int x;
//     int *ptr;
//     int y;
// };
 
// int main()
// {
//     Test t;
//     cout << sizeof(t) << " ";
//     cout << sizeof(Test *);
// }
// Step 1: Understanding Class Members
// cpp
// Copy
// Edit
// class Test
// {
//     static int x;  // Static member (not part of object memory)
//     int *ptr;      // Pointer (occupies memory)
//     int y;         // Integer variable (occupies memory)
// };
// static int x:

// Static members are shared across all objects and stored in global/static memory (not inside an object).
// Does not contribute to the object's size.
// int *ptr:

// A pointer occupies 8 bytes on a 64-bit system or 4 bytes on a 32-bit system.
// int y:

// An integer occupies 4 bytes.
// Step 2: Size Calculation
// On a 64-bit system:

// Member	Size
// int *ptr (pointer)	8 bytes
// int y (integer)	4 bytes
// Padding (to maintain alignment)	4 bytes
// Total	16 bytes
// On a 32-bit system:

// Member	Size
// int *ptr (pointer)	4 bytes
// int y (integer)	4 bytes
// Total	8 bytes
// Step 3: Size of Test *
// cpp


// cout << sizeof(Test *);
// A pointer to any class always has a fixed size.
// On a 64-bit system → 8 bytes
// On a 32-bit system → 4 bytes
// Expected Output
// On a 64-bit system:


// 16 8
// On a 32-bit system:


// 8 4
///////////////////////////////////////
// #include <iostream>
// using namespace std;
// class LFC 
// { 
// public: 
//     int i; 
//     void get(); 
// }; 
// void LFC::get() 
// { 
//     std::cout << "Enter the value of i: "; 
//     std::cin >> i; 
// } 
// LFC t;  
// int main() 
// { 
//     LFC t;  
//     t.get(); 
//     std::cout << "value of i in local t: "<<t.i<<'\n'; 
//     ::t.get();  
//     std::cout << "value of i in global t: "<<::t.i<<'\n'; 
//     return 0; 
// }

// A. Compiles and runs fine
// B. Compiler Error in Line "::t.get();"
// C. Compiler Error: Cannot have two objects with same class name
// D. Runtime error

// ans 

// Some older or more restrictive compilers might give an error if they don’t support ::t for a global object, but most modern compilers (like GCC, Clang, MSVC) handle it correctly.

// So, you are correct, and my first answer was too strict.


// // Answer:
// ✅ B. Compiler Error in Line "::t.get();”

// Explanation:
// The error occurs because of the line:

// cpp

// ::t.get();
// Why?

// ::t refers to a global variable named t, which is declared before main().
// However, t is declared after the class LFC, meaning it is a global object.
// The issue is with the scope resolution operator (::t).
// The scope resolution operator (::) is only valid for static members or global functions, not for global objects.
// How to Fix?
// Instead of using ::t.get();, simply use:

// cpp

// t.get();
// std::cout << "value of i in global t: " << t.i << '\n';
// Or, if you want to explicitly refer to the global t inside main(), you should do:

// cpp

// ::t.get();  // Access global t without error
// 💡 But this is compiler-dependent and may not always work.

// Fixed Code
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// class LFC 
// { 
// public: 
//     int i; 
//     void get(); 
// }; 

// void LFC::get() 
// { 
//     cout << "Enter the value of i: "; 
//     cin >> i; 
// } 

// LFC t;  // Global object

// int main() 
// { 
//     LFC t;  // Local object

//     t.get(); 
//     cout << "Value of i in local t: " << t.i << '\n'; 

//     ::t.get();  // Access global t correctly

//     cout << "Value of i in global t: " << ::t.i << '\n'; 

//     return 0; 
// }
// This will now compile and run correctly.

// Key Takeaways:
// Global variables can be accessed inside main() using ::global_var.
// Scope resolution (::) only applies to global functions, variables, and static members.
// If t was declared as static, then ::t would be incorrect.
// Avoid using global variables with the same name as local variables to prevent confusion.
//////////////////////////////////////////////////////////////////////////////////////////////
// What will be the order of execution of base class constructors in the following method of inheritance.
// class a: public b, public c {...};

// Order of Execution of Base Class Constructors
// When a class inherits from multiple base classes, the order of execution of constructors follows this rule:

// Base classes are initialized in the order they are declared in the inheritance list (from left to right).

// Given Inheritance Structure
// cpp
// Copy
// Edit
// class a: public b, public c {...};
// Here, a inherits from b first and then from c.
// The base class constructors are called before the derived class constructor.
// Thus, the order of execution is: 1️⃣ Constructor of b (leftmost base class)
// 2️⃣ Constructor of c (rightmost base class)
// 3️⃣ Constructor of a (derived class)

// Example Code to Verify
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// class b {
// public:
//     b() { cout << "Constructor of B\n"; }
// };

// class c {
// public:
//     c() { cout << "Constructor of C\n"; }
// };

// class a : public b, public c {
// public:
//     a() { cout << "Constructor of A\n"; }
// };

// int main() {
//     a obj;  // Object creation triggers constructor calls
//     return 0;
// }
// Expected Output
// css
// Copy
// Edit
// Constructor of B
// Constructor of C
// Constructor of A
// Key Takeaways
// ✔ Base class constructors execute first before derived class constructors.
// ✔ The order is determined by the inheritance list, not the order in which the base classes appear in the class definition.
// ✔ If constructors are explicitly called using an initializer list, their order remains the same
////////////////////////////////////////////////////////////////////////////////////////
// Note:Includes all required header files
//  using namespace std;
//   class Base
//     {
//         public:
//             Base(){}
//             ~Base(){}
//             protected:
//             private: 
//     };
//     class Derived:public Base
//     {
//         public:
//             Derived(){}
//             Derived(){}
//             private:
//             protected:
//     };
//   int main()
//   {
//      cout << "Executed" << endl;
//   } 

//   Error in the Code:
// The code contains a compilation error due to the presence of two constructors with the same signature in the Derived class.

// Issue:
// cpp
// Copy
// Edit
// class Derived: public Base
// {
//     public:
//         Derived(){}  // ✅ Constructor 1 (valid)
//         Derived(){}  // ❌ Constructor 2 (duplicate, invalid)
// };
// Constructor overloading is allowed, but both constructors have the same signature (Derived()).
// Since C++ does not allow multiple constructors with identical signatures, the compiler throws an error.
// Fix the Issue
// 1️⃣ Remove the duplicate constructor:

// cpp
// Copy
// Edit
// class Derived: public Base
// {
//     public:
//         Derived(){}  // ✅ Only one constructor
// };
// OR
// 2️⃣ Use different parameters to overload the constructor:

// cpp
// Copy
// Edit
// class Derived: public Base
// {
//     public:
//         Derived(){}      // ✅ Default constructor
//         Derived(int x){} // ✅ Overloaded constructor
// };
// Corrected Code
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// class Base
// {
//     public:
//         Base(){}
//         ~Base(){}
// };

// class Derived: public Base
// {
//     public:
//         Derived(){}  // ✅ Only one constructor now
// };

// int main()
// {
//     cout << "Executed" << endl;
//     return 0;
// }
// Expected Output
// nginx
// Copy
// Edit
// Executed
// Key Takeaways
// ✔ C++ does not allow two constructors with identical signatures.
// ✔ Constructor overloading requires different parameters.
// ✔ Fix: Either remove the duplicate constructor or provide different arguments.
///////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>      
// using namespace std;
// struct a
//  {
//     int p;
//  };
// struct b
//  {
//     int* x;
//  };
// struct c : public a, public b
//  {
//  };
// int main()
//  {
//     c* p = new c;// Allocates memory for c, calls constructor
//     p->x = 0;
//     cout << "Inherited";
//     return 0;
//  } 
//  ans inherited
//  will work without any error