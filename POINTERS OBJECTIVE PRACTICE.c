// #include<stdio.h>
// int main()
// {
//     int a=300;
//     char*b=(char*)&a;
//     *++b=2;
//     printf("%d",a);
//     return 0;
// }
// Memory Representation
// int a = 300;
// In little-endian systems (common in most CPUs), the integer 300 (0x012C in hexadecimal) is stored in memory as:
// makefile
// Copy code
// Address:  [b]  [b+1] [b+2] [b+3]
// Value:    2C    01    00    00
// b points to the least significant byte (0x2C = 44 in decimal).
// Operation *++b = 2;
// ++b moves b to point to the next byte (b+1), which currently holds 0x01.
// *b = 2 replaces 0x01 with 0x02.
// Now, the memory looks like:

// makefile
// Copy code
// Address:  [b-1] [b]  [b+1] [b+2]
// Value:     2C    02    00    00
// Interpreting the Modified a
// In little-endian, the integer is formed as:

// css
// Copy code
// a = 0x0000022C
// Hexadecimal 0x022C = Decimal 556

// Final Output
// Copy code
// 556
// Key Concepts Involved:
// Pointer Arithmetic: ++b moves to the next byte.
// Type Casting: (char*)&a allows byte-level access to the integer.
// Endianness: This behavior depends on little-endian memory storage.
// If run on a big-endian system, the result would be different.

///////////////////////////////////////////////////////////////////////////////////
//#include<stdio.h>
// void fun(int **p)
// {
//     int q=40;
//     *p=&q;
// }

// int main()
// {
//     int data=27;
//     int*ptr=&data;
//     fun(&ptr);
//     printf("%d",*ptr);
//     return 0;
// }
// In main:

// data = 27
// ptr points to data (ptr → data (27))
// Calling fun(&ptr):

// p now points to ptr (p → ptr → data)
// Inside fun, int q = 40 creates a local variable q with value 40.
// *p = &q; makes ptr point to q (ptr → q (40)).
// Exiting fun:

// The variable q is local to fun, so its memory is deallocated after fun returns.
// Now, ptr points to a dangling pointer (invalid memory).
// In printf("%d", *ptr);:

// Dereferencing ptr is undefined behavior because ptr points to a destroyed variable (q).
// This may print 40, a random value, or cause a crash depending on the system/compiler.
// Expected Output:
// Undefined behavior
// Possible outcomes:
// Prints 40 (if q's memory wasn't overwritten yet)
// Prints garbage value
// Program crash
// Corrected Version:
// If the goal is to assign 40 to ptr safely, allocate memory dynamically:

// c
// Copy code
// void fun(int **p) {
//     *p = (int*)malloc(sizeof(int));  // Allocate memory
//     **p = 40;                        // Assign value
// }

// int main() {
//     int *ptr;
//     fun(&ptr);
//     printf("%d", *ptr);  // Prints 40
//     free(ptr);           // Free allocated memory
//     return 0;
// }
// Output: 40 (without undefined behavior)

/////////////////////////////////////////////////////////////////////////////////////////


// #include<stdio.h>
// typedef void (*fptr)(int);
// void display(int a)
// {
//     printf("%d\n",a);
// }
// int main()
// {
//     fptr fptr1=NULL,fptr2=NULL;
//     fptr1=&display;
//     fptr2=display;
//     (*fptr)(10);
//     fptr2(10);
//     return 0;

// }
// typedef void (*fptr)(int);   // 'fptr' is a type for a pointer to a function taking an int and returning void.

// void display(int a) {
//     printf("%d\n", a);       // Prints the integer 'a'.
// }

// int main() {
//     fptr fptr1 = NULL, fptr2 = NULL;  // Two function pointers initialized to NULL.
    
//     fptr1 = &display;  // fptr1 now points to the 'display' function (explicit address).
//     fptr2 = display;   // fptr2 also points to 'display' (implicit, '&' is optional for functions).
    
//     (*fptr)(10);       // ❌ Error: 'fptr' is a type, not a variable.
//     fptr2(10);         // ✅ Correct: Calls 'display(10)', prints 10.

//     return 0;
// }
// Error Analysis
// Line: (*fptr)(10);
// Error: fptr is a type, not a variable.
// Fix: Use fptr1 or fptr2 to call the function.
// Corrected Line:
// c
// Copy code
// (*fptr1)(10);  // OR simply: fptr1(10);
// Corrected Program
// c
// Copy code
// typedef void (*fptr)(int);

// void display(int a) {
//     printf("%d\n", a);
// }

// int main() {
//     fptr fptr1 = NULL, fptr2 = NULL;

//     fptr1 = &display;
//     fptr2 = display;

//     (*fptr1)(10);  // Corrected function call
//     fptr2(10);     // Also correct

//     return 0;
// }
// Expected Output
// Copy code
// 10
// 10
// Both fptr1 and fptr2 correctly call the display function with the argument 10.

////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int f(int x,int *py,int **ppz)
// {
//     int y,z;
//     **ppz+=1;
//     z=**ppz;
//     *py +=2;
//     y=*py;
//     x+=3;
//      return x+y+z;
// }
// int main()
// {
//     int c,*b,**a;
//     c=4;
//     b=&c;
//     a=&b;
//     printf("%d",f(c,b,a));
//     return 0;
// }

// // ans :Let us understand this line by line
//   /* below line changes value of c to 5. Note that x remains unaffected by 
//     this change as x is a copy of c and address of x is different from c*/
//   **ppz += 1  
  
//   /* z is changed to 5*/
//   z  = **ppz; 
  
//   /* changes c to 7, x is not changed */
//   *py += 2; 
  
//    /* y is changed to 7*/
//   y = *py;    
  
//   /* x is incremented by 3 */
//    x += 3;    
  
//   /* return 7 + 7 + 5*/
//   return x + y + z;
//   ans;19
// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     int*i=&arr[2],*j=&arr[5];
//     int diff=j-i;
//     printf("%d",diff);
// }

// ans:When subtracting pointers you get the number of elements between those addresses, not the number of bytes.
// there for no:of elements betwwn them is 3

/////////////////////////////////////////////////////////////////////////
// #include <stdio.h>

// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;

//     printf("%f ", *ptr2);
//     printf("%d", ptr2 - ptr1);

//    return 0;
// }
// ans 90.500000 3

// Array Initialization:
// arr is an array of floats:

// makefile
// Copy code
// Index:  0     1     2     3     4  
// Value: 12.5  10.0  13.5  90.5  0.5  
// Pointer Assignments:

// ptr1 = &arr[0]; → Points to 12.5 (index 0)
// ptr2 = ptr1 + 3; → Moves 3 positions ahead → Points to arr[3] → 90.5
// First printf:

// c
// Copy code
// printf("%f ", *ptr2);
// Dereferences ptr2 → prints 90.5
// Output: 90.500000 (default precision for %f)
// Second printf:

// c
// Copy code
// printf("%d", ptr2 - ptr1);
// Pointer subtraction gives the difference in elements, not bytes.
// ptr2 - ptr1 = 3 (since ptr2 points to index 3 and ptr1 to index 0)
// Output: 3
// Final Output
// Copy code
// 90.500000 3
// Additional Notes:
// Pointer Arithmetic:

// ptr1 + 3 moves 3 elements forward.
// Pointer arithmetic in C adjusts the address by the size of the data type (sizeof(float) here).
// Format Specifier for Pointer Difference:

// The difference between pointers is of type ptrdiff_t.
// Safer to use %td with ptrdiff_t:
// c
// Copy code
// printf("%td", ptr2 - ptr1);
// %d works here but isn't portable.
///////////////////////////////////////////////////////////
// #include<stdio.h>
// void foo(int **const p);
// int main()
// {
//     int i=10;
//     int *p=&i;
//     foo(&p);
//     printf("%d ",*p);
//     printf("%d ",*p);

// }
// void foo(int **const p)
// {
//   int j=11;
//   *p=&j;
//   printf("%d ",**p);
// }


// Variable Declarations in main:

// i = 10;
// p = &i; → p points to i.
// foo(&p); → The address of p is passed to foo.
// Inside foo:

// int j = 11; → A new local variable j is declared.
// *p = &j; → Now, p in main points to j (a local variable in foo).
// printf("%d ", **p); → Prints the value of j → 11.
// Back in main:

// After foo returns, the local variable j in foo no longer exists (it goes out of scope).
// p still holds the dangling pointer to the now-invalid memory location of j.
// printf("%d ", *p); → Dereferencing p results in undefined behavior.
// It may print garbage, crash, or coincidentally print 11, depending on the system.
// Expected Output (with Undefined Behavior)
// php
// Copy code
// 11 <garbage_value> <garbage_value>
// On some systems, it might print:

// Copy code
// 11 11 11
// Or unpredictable values due to accessing invalid memory.

// Problem in the Code
// Dangling Pointer:
// *p = &j; makes p in main point to a local variable j in foo.
// Once foo finishes, j is destroyed, leaving p pointing to invalid memory.
// Corrected Version
// If the intention was to make p point to a valid memory location, j must not be a local variable. Here are two ways to fix it:

// Fix 1: Use Static Variable in foo
// c
// Copy code
// void foo(int **const p) {
//     static int j = 11;  // Static variable persists after function returns
//     *p = &j;
//     printf("%d ", **p);
// }
// Output:

// Copy code
// 11 11 11
// Fix 2: Dynamic Memory Allocation
// c
// Copy code
// #include <stdlib.h>

// void foo(int **const p) {
//     *p = (int *)malloc(sizeof(int));  // Allocate memory on the heap
//     **p = 11;
//     printf("%d ", **p);
// }
// Note: You must free(p) in main to avoid memory leaks.

// Key Takeaways
// Local variables cannot be safely returned or assigned to pointers outside the function.
// Use static or malloc to extend the lifetime of a variable beyond a function.
// Dereferencing a dangling pointer leads to undefined behavior.
//////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int i=0,j=1;
//     int *p[]={&i,&j};
//     printf("%d",(*p)[1]);
//     return 0;
// }

// Variable Declarations:

// i = 0
// j = 1
// Array of Pointers:

// p is an array of integer pointers with two elements.
// p[0] = &i → Points to i (which is 0)
// p[1] = &j → Points to j (which is 1)
// Expression Analysis:

// c
// Copy code
// (*p)[1]
// *p dereferences p, giving p[0], which is &i.
// (*p)[1] is the same as (&i)[1].
// (&i)[1] means moving one integer ahead of i, i.e., accessing memory at &i + 1.
// Memory Access ((&i)[1]):

// This is equivalent to *(&i + 1).
// Since i and j are declared consecutively in memory, &i + 1 likely points to j.
// So, (&i)[1] accesses the value of j, which is 1.
// Expected Output
// Copy code
// 1
// Explanation of Behavior
// (*p) → p[0] → &i
// (*p)[1] → (&i)[1] → j → 1
// Important Notes
// Undefined Behavior Risk:

// In C, the order of variables in memory is not guaranteed by the standard.
// While most compilers store i and j consecutively, this isn't guaranteed, 
// so accessing (&i)[1] could lead to undefined behavior on some systems.
// Safer Alternative:
// If you intended to access j through the pointer array, write:

// c
// Copy code
// printf("%d", *p[1]);  // Prints 1 safely
// Conclusion
// The output will be 1, but this relies on how variables are stored in memory. 
// For safer and clearer code, avoid using expressions like (*p)[1] and instead use *p[1].
//////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int ary[2][3];
//     ary[][]={{1,2,3},{4,5,6}};
//     printf("%d",ary[1][0]);
// }
// #include<stdio.h>

// int main() {
//     int ary[2][3];
//     ary[][] = {{1,2,3}, {4,5,6}};  // ❌ Invalid syntax
//     printf("%d", ary[1][0]);
//     return 0;
// }
// Error Explanation
// The line ary[][] = {{1,2,3}, {4,5,6}}; is invalid.
// You cannot assign values to arrays like this after declaration.
// Arrays in C must be initialized at the time of declaration, not assigned later.
// Correct Version
// Fix 1: Initialize During Declaration
// c
// Copy code
// #include<stdio.h>

// int main() {
//     int ary[2][3] = {{1, 2, 3}, {4, 5, 6}};  // ✅ Correct initialization
//     printf("%d", ary[1][0]);  // Prints the first element of the second row
//     return 0;
// }
// Output:

// Copy code
// 4
// Fix 2: Assign Elements Individually
// If you need to assign values after declaration:

// c
// Copy code
// #include<stdio.h>

// int main() {
//     int ary[2][3];
    
//     ary[0][0] = 1;
//     ary[0][1] = 2;
//     ary[0][2] = 3;
    
//     ary[1][0] = 4;
//     ary[1][1] = 5;
//     ary[1][2] = 6;

//     printf("%d", ary[1][0]);  // Prints 4
//     return 0;
// }
// Output:

// Copy code
// 4
// Key Takeaways
// Arrays in C must be initialized at the time of declaration or assigned values element by element.
// The expression ary[][] = {{1,2,3},{4,5,6}}; is invalid.
// Correct initialization is:
// c
// Copy code
// int ary[2][3] = {{1,2,3},{4,5,6}};
// ary[1][0] accesses the first element of the second row, which is 4.

//////////////////////////////////////////////////////////////////////////////
//#include<stdio.h>
// int main()
// {
//     int a[4]={1,2,3,4};
//     int b[4]={1,2,3,4};
//     int n=&b[3]-&a[2];
//     printf("%d",n);
//     return 0;
// }
// Array Declarations:

// a[4] = {1, 2, 3, 4}
// b[4] = {1, 2, 3, 4}
// These arrays are stored in different memory locations.
// Pointer Subtraction:

// c
// Copy code
// int n = &b[3] - &a[2];
// &b[3] → Address of the last element of array b.
// &a[2] → Address of the third element of array a.
// Pointer subtraction (ptr1 - ptr2) is only valid when both pointers refer to elements of the same array.
// Undefined Behavior:

// Subtracting pointers from different arrays (&b[3] - &a[2]) leads to undefined behavior.
// The result depends on how the arrays a and b are stored in memory.
// The program may print any value, crash, or behave unpredictably.
// Possible Outputs
// Depending on how the arrays are placed in memory, the output could be any integer (positive, negative, or zero).
// Examples:

// 2
// -5
// Some large number
// Program crash
// Why This Happens
// Pointer arithmetic computes the distance between two memory addresses, 
// but only when both pointers are within the same array.
// The C standard defines subtraction between pointers of different objects as undefined behavior.
// Correct Usage
// If you need to calculate the difference between pointers within the same array, it is valid. For example:

// c
// Copy code
// int n = &a[3] - &a[2];  // Valid: both pointers are from array 'a'
// printf("%d", n);        // Output: 1
// Conclusion
// The line &b[3] - &a[2] results in undefined behavior.
// Pointer subtraction is only valid for pointers to the same array.
// The output is unpredictable and depends on the memory layout.

///////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
//     void foo(int*);
//     int main()
//     {
//         int i = 10;
//         foo((&i)++);
//     }
//     void foo(int *p)
//     {
//         printf("%d\n", *p);
//     }
//     Why This Code Causes a Compilation Error
// The error is due to the invalid use of the post-increment operator (++) on an address expression.

// Problem Line:
// c
// Copy code
// foo((&i)++);
// Detailed Explanation
// &i → This expression gives the address of the variable i.

// &i is of type int * (pointer to an integer).
// Post-Increment on a Pointer ((&i)++) → This tries to increment the address of i.

// The ++ operator requires a modifiable l-value, but &i is not modifiable.
// You cannot change the address of a variable.
// Compiler Error:

// swift
// Copy code
// error: lvalue required as increment operand
// This means (&i) is not an l-value that can be incremented.
// How to Fix the Code
// Option 1: Pass the Address Directly (Correct Way)
// c
// Copy code
// foo(&i);
// Output:

// Copy code
// 10
// Option 2: Use a Pointer (If Incrementing is Needed)
// If you wanted to increment a pointer, use a pointer variable:

// c
// Copy code
// int *p = &i;
// foo(p++);
// This passes p to foo() and then increments p (which is allowed).
// Key Takeaways
// The address-of operator (&) returns a value that cannot be modified.
// The increment operator (++) can only be used on modifiable l-values.
// To pass a pointer, just use &i.
/////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
//     void foo(int*);
//     int main()
//     {
//         int i = 10, *p = &i;
//         foo(p++);
//     }
//     void foo(int *p)
//     {
//         printf("%d\n", *p);
//     }
//     Variable Initialization:

// c
// Copy code
// int i = 10, *p = &i;
// i is initialized to 10.
// p points to the memory address of i.
// Function Call with Post-Increment:

// c
// Copy code
// foo(p++);
// Post-increment (p++) passes the current value of p to foo().
// After passing, p is incremented, but this has no effect in the function call because the increment happens after the value is passed.
// Therefore, foo() receives the original pointer to i.
// Function Execution:

// c
// Copy code
// void foo(int *p) {
//     printf("%d\n", *p);
// }
// p points to i, so *p is 10.
// The program prints 10.
// Final Output
// Copy code
// 10
//////////////////////////////////////////////////////////////////////////////////////////////
//***************************IMPORTANT NOTE ON POINTER ARITHEMATIC*************************//
//////////////////////////////////////////////////////////////////////////////////////////////

// 1. How Pointer Subtraction Works
// For typed pointers (like int* or double*), subtraction works like this:

// ptr2- ptr1 = (Address of ptr2 − Address of ptr)/ Size of the data type

 
// Example with int*:
// int arr[5] = {1, 2, 3, 4, 5};
// int *p1 = &arr[1];  // Address: 1004 (assuming int is 4 bytes)
// int *p2 = &arr[4];  // Address: 1016

// int diff = p2 - p1;  // (1016 - 1004) / sizeof(int) = 12 / 4 = 3
// printf("%d\n", diff);  // Output: 3
// 👉 Pointer subtraction divides the byte difference by the size of the data type (int here).

// 2. Why void* Cannot Be Subtracted
// The problem with void* is that the size of void is undefined in C.

// For pointer subtraction, the compiler must divide the byte difference by the size of the type.
// Since void has no size, the compiler cannot perform the division.
// 3. Why Not Just Treat void* Like char*?
// In some cases, compilers like GCC treat void* like char* for pointer arithmetic (because char is always 1 byte).
// But this is not standard behavior in C.

// If the compiler allowed subtraction like this:


// void *p1 = &arr[1];
// void *p2 = &arr[4];
// int diff = p2 - p1;  // ❌ Undefined behavior
// The compiler wouldn't know what size to divide by. Should it divide by 1 byte, 2 bytes, 4 bytes?
// This is why standard C disallows subtraction on void*.

// 4. Correct Way: Typecast void* Before Subtracting
// If you want to subtract void* pointers safely, cast them to a typed pointer first.


// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     void *p1 = &arr[1];
//     void *p2 = &arr[4];

//     // Cast to int* for valid subtraction
//     int diff = (int*)((int*)p2 - (int*)p1);
//     printf("%d\n", diff);  // Output: 3

//     return 0;
// }
// ✅ Now the compiler knows it’s dealing with int*, so it divides the byte difference by sizeof(int).

// 5. Key Takeaways
// Pointer subtraction works only when the compiler knows the data type size.
// void* has no size, so subtraction is undefined.
// Typecast to a valid pointer type (int*, char*, etc.) before subtraction
///////////////////////////////////////////////////////////////////////////
// What is the output of this C code?
// #include <stdio.h>
//     void f(int a[][3])
//     {
//         a[0][1] = 3;
//         int i = 0, j = 0;
//         for (i = 0; i < 2; i++)
//         for (j = 0; j < 3; j++)
//         printf("%d", a[i][j]);
//     }
//     void main()
//     {
//         int a[2][3] = {0};
//         f(a);
//     }
//     #include <stdio.h>

// void f(int a[][3]) {
//     a[0][1] = 3;  // Set the element at row 0, column 1 to 3

//     int i = 0, j = 0;
//     for (i = 0; i < 2; i++)          // Loop over 2 rows
//         for (j = 0; j < 3; j++)      // Loop over 3 columns
//             printf("%d", a[i][j]);   // Print each element
// }

// void main() {
//     int a[2][3] = {0};  // Initialize all elements to 0
//     f(a);               // Call function f with the array
// }
// Step-by-Step Execution
// Array Initialization
// int a[2][3] = {0}; creates a 2x3 matrix with all elements initialized to 0.

// css
// Copy code
// a = {
//       {0, 0, 0},
//       {0, 0, 0}
//     }
// Function Call f(a)

// a[0][1] = 3; → This sets the element in the first row, second column to 3.
// The updated array:

// css
// Copy code
// a = {
//       {0, 3, 0},
//       {0, 0, 0}
//     }
// Nested Loops (Printing Elements)

// The for loops iterate over all elements in the matrix row by row.
// Order of access:

// a[0][0] → 0
// a[0][1] → 3
// a[0][2] → 0
// a[1][0] → 0
// a[1][1] → 0
// a[1][2] → 0
// Printing the Elements
// The program prints each value consecutively without spaces or newlines.

// Final Output:

// Copy code
// 030000
// Final Answer
// Copy code
// 030000
//////////////////////////////////////////////////////////////////////////////
// What is the output of this C code?
// #include <stdio.h>
//     void f(int a[2][])
//     {
//         a[0][1] = 3;
//         int i = 0, j = 0;
//         for (i = 0;i < 2; i++)
//         for (j = 0;j < 3; j++)
//         printf("%d", a[i][j]);
//     }
//     void main()
//     {
//         int a[2][3] = {0};
//         f(a);
//     }
//     The provided code will not compile due to an incomplete array declaration in the function parameter.

// Issue in the Code
// c
// Copy code
// void f(int a[2][])  // ❌ Invalid declaration
// In C, when passing a 2D array to a function, all dimensions except the first must be specified.
// The compiler needs to know the size of the second dimension to calculate memory offsets for pointer arithmetic.
// Correct Declaration:
// c
// Copy code
// void f(int a[2][3])  // ✅ Correct
// or equivalently:

// c
// Copy code
// void f(int a[][3])   // ✅ Also correct
// If Corrected, Output Analysis
// After fixing the declaration, let's analyze the program step-by-step.

// c
// Copy code
// #include <stdio.h>

// void f(int a[2][3])  // Corrected function parameter
// {
//     a[0][1] = 3;  // Set element at [0][1] to 3

//     int i = 0, j = 0;
//     for (i = 0; i < 2; i++)    // Loop through rows
//         for (j = 0; j < 3; j++)  // Loop through columns
//             printf("%d", a[i][j]);  // Print each element
// }

// void main()
// {
//     int a[2][3] = {0};  // Initialize all elements to 0
//     f(a);
// }
// Step-by-Step Execution:
// Array Initialization:
// int a[2][3] = {0}; initializes the array to:

// css
// Copy code
// a = {
//       {0, 0, 0},
//       {0, 0, 0}
//     }
// Modification in f(a):
// a[0][1] = 3; updates the array:

// css
// Copy code
// a = {
//       {0, 3, 0},
//       {0, 0, 0}
//     }
// Nested Loop Printing:
// The for loops print the elements row by row.

// Access Order:

// a[0][0] → 0
// a[0][1] → 3
// a[0][2] → 0
// a[1][0] → 0
// a[1][1] → 0
// a[1][2] → 0
// Final Output:

// Copy code
// 030000
// Final Answer
// Original Code: ❌ Compilation Error due to incomplete array size in the function parameter.
// Corrected Code Output: ✅ 030000
////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
//     int main()
//     {
//         int ary[2][3];
//         foo(ary);
//     }
//     void foo(int (*ary)[3])
//     {
//         int i = 10, j = 2, k;
//         ary[0] = &i;
//         ary[1] = &j;
//         for (k = 0;k < 2; k++)
//         printf("%d\n", *ary[k]);
//     }
//     //compilation error will be shown, if any case it work it will be undefined behaviour
//     The provided code contains undefined behavior due to incorrect manipulation of a 2D array. Let's analyze it step by step.

// Code Analysis
// c
// Copy code
// #include <stdio.h>

// int main() {
//     int ary[2][3];   // Declaration of a 2D array (2 rows, 3 columns)
//     foo(ary);        // Passing the array to the function
// }

// void foo(int (*ary)[3]) {   // Function takes a pointer to an array of 3 integers
//     int i = 10, j = 2, k;
    
//     ary[0] = &i;  // ❌ Problem here
//     ary[1] = &j;  // ❌ Problem here

//     for (k = 0; k < 2; k++)
//         printf("%d\n", *ary[k]);  // Attempt to print values
// }
// Problems in the Code
// Invalid Assignment to Array Rows:

// ary[0] = &i; and ary[1] = &j; are invalid because:
// ary[0] is a fixed array of 3 integers (int[3]), not a pointer.
// Assigning a pointer (&i) to an array element like this is illegal in C.
// Arrays in C are non-modifiable l-values, meaning you cannot assign to them.
// Undefined Behavior:

// If the program compiles (which it shouldn't in strict C), it may cause a segmentation fault or unexpected output because of this illegal assignment.
// Function Declaration Placement:

// foo is called in main() before its definition.
// In standard C, this requires a function prototype or placing foo above main().
// Without it, some compilers may raise a warning or error.
// Corrected Version
// If the goal is to print values stored in the 2D array, a safer and correct way would be:

// c
// Copy code
// #include <stdio.h>

// void foo(int ary[2][3]) {  // Correct: passing a 2D array
//     int i = 10, j = 2, k;

//     ary[0][0] = i;  // Assign to specific elements
//     ary[1][0] = j;

//     for (k = 0; k < 2; k++)
//         printf("%d\n", ary[k][0]);  // Correctly access elements
// }

// int main() {
//     int ary[2][3] = {0};  // Initialize array
//     foo(ary);
//     return 0;
// }
// Output:

// Copy code
// 10  
// 2
// Conclusion
// The original code is incorrect because it tries to assign pointers to array rows.
// Arrays in C cannot be reassigned; you must access individual elements instead.
// Correct usage requires assigning values directly to array elements, not entire rows.
////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
//     int main()
//     {
//         foo(ary);
//     }
//     void foo(int **ary)
//     {
//         int i = 10, k = 10, j = 2;
//         int *ary[2];
//         ary[0] = &i;
//         ary[1] = &j;
//         printf("%d\n", ary[0][1]);
//     }
//     ans;compilation errror

//     #include <stdio.h>

// int main() {
//     foo(ary);  // ❌ Error: 'ary' is undeclared
// }

// void foo(int **ary) {
//     int i = 10, k = 10, j = 2;
//     int *ary[2];   // ❌ Local redeclaration of 'ary'
//     ary[0] = &i;
//     ary[1] = &j;
//     printf("%d\n", ary[0][1]);  // ❌ Undefined behavior
// }
// ⚠️ Compilation Errors
// Undeclared Variable ary:

// foo(ary); in main() causes a compilation error because ary is never declared.
// Error:
// javascript
// Copy code
// error: ‘ary’ undeclared (first use in this function)
// Redeclaration of ary:

// In foo, the parameter int **ary is shadowed by a local declaration int *ary[2];.
// This is legal but confusing, leading to logical errors.
// Missing Function Prototype:

// foo is called before its definition, causing a warning/error on some compilers:
// vbnet
// Copy code
// warning: implicit declaration of function ‘foo’
// ⚠️ Undefined Behavior
// If the code somehow compiles, the line:

// c
// Copy code
// printf("%d\n", ary[0][1]);
// causes undefined behavior because:

// ary[0] = &i; makes ary[0] point to a single integer (i).
// Accessing ary[0][1] tries to read memory beyond i, which is invalid.
// This can cause a segmentation fault or print garbage data.
// ✅ Correct Behavior
// To fix the code, you need to:

// Declare ary in main before using it.
// Avoid redeclaring ary inside foo.
// Corrected Code:

// c
// Copy code
// #include <stdio.h>

// void foo(int **ary);  // Function prototype

// int main() {
//     int i = 10, j = 2;
//     int *ary[2];
//     ary[0] = &i;
//     ary[1] = &j;
//     foo(ary);
//     return 0;
// }

// void foo(int **ary) {
//     printf("%d\n", *ary[1]);  // Correctly prints the value of j (2)
// }
// Output:

// Copy code
// 2
// Conclusion
// The original code will fail with a compilation error due to the undeclared ary.
// If corrected, improper pointer use could still lead to undefined behavior.

/////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
//     void main()
//     {
//         char *a[10] = {"hi", "hello", "how"};
//         int i = 0;
//         for (i = 0;i < 10; i++)
//         printf("%s", *(a[i]));
//     }
//     ssues in the Code
// Incorrect printf Usage:
//output i am getting is segmentation fault trying to access memory which is not ours
// printf("%s", *(a[i])); is incorrect.
// a[i] is a pointer to a string, so *(a[i]) dereferences the first character of that string (char).
// The format specifier %s expects a char*, not a char.
// This leads to undefined behavior.
// ✅ Fix: Use printf("%s", a[i]); to print the full string.

// Uninitialized Array Elements:

// a[10] is initialized with only 3 strings ("hi", "hello", "how").
// The remaining 7 elements (a[3] to a[9]) are uninitialized and contain garbage pointers.
// Accessing these uninitialized elements will result in undefined behavior, possibly a segmentation fault.
// ✅ Fix: Initialize all elements or limit the loop to i < 3.

// Usage of void main():

// void main() is non-standard in C.
// The standard signature for main should be int main(void) or int main().
// ✅ Fix: Change to int main(void) and return 0 at the end.

// 💻 Corrected Code
// c
// Copy code
// #include <stdio.h>

// int main() {
//     char *a[3] = {"hi", "hello", "how"};  // Limit to 3 elements
//     int i;
//     for (i = 0; i < 3; i++)  // Loop only through initialized elements
//         printf("%s\n", a[i]);  // Corrected format specifier
//     return 0;
// }
// ✅ Expected Output
// Copy code
// hi
// hello
// how
////////////////////////////////////////////////////////////
// #include <stdio.h>
//     int main()
//     {
//         int i = 0, j = 1;
//         int *a[] = {&i, &j};
//         printf("%d", (*a)[1]);
//         return 0;
//     }
//     #include <stdio.h>

// int main() {
//     int i = 0, j = 1;
//     int *a[] = {&i, &j};
//     printf("%d", (*a)[1]);
//     return 0;
// }
// ⚠️ Key Concepts and Issues
// Array of Pointers (int *a[])

// a is an array of integer pointers with two elements:
// a[0] → address of i (&i) → points to 0
// a[1] → address of j (&j) → points to 1
// Expression: (*a)[1]

// *a is the dereference of a, i.e., *a → a[0] → &i.
// (*a)[1] means *a + 1 → points to the next integer in memory after i.
// This results in undefined behavior because i is a standalone variable, and accessing (*a)[1] reads a value from an unintended memory location.
// Expected vs. Actual Behavior

// Many might expect (*a)[1] to access a[1], but that's not how it works.
// Instead, (*a)[1] is equivalent to *(*(a) + 1), which accesses memory after i.
// Undefined Behavior

// Accessing memory beyond i can yield:
// A garbage value
// A crash (segmentation fault)
// ✅ Correct Version
// If the goal is to print the value of j, you should directly access a[1]:

// c
// Copy code
// #include <stdio.h>

// int main() {
//     int i = 0, j = 1;
//     int *a[] = {&i, &j};
//     printf("%d", *a[1]);  // Correct: dereference a[1] to get the value of j
//     return 0;
// }
// 🔎 Explanation:

// a[1] → &j
// *a[1] → dereferences to 1
// 🖨 Output:

// Copy code
// 1
// ⚡ Summary
// (*a)[1] leads to undefined behavior because it accesses memory beyond i.
// The correct way to access j is using *a[1].
// /////////////////////////////////////////////////////////////
// #include <stdio.h>
//     int main(int argc, char *argv[])
//     {
//         while (*argv  !=  NULL)
//         printf("%s\n", *(argv++));
//         return 0;
//     }
//     argv is a pointer to the array of command-line arguments.
// *argv++ != NULL:
// *argv points to the current argument.
// argv++ moves the pointer to the next argument after checking the current one.
// printf("%s\n", *argv); prints the argument argv now points to.
// Problem:
// Because of the post-increment (argv++), *argv advances before being printed.
// This causes the program to skip the first argument (argv[0]) and prints from argv[1].
// When argv reaches NULL, the loop still prints it, potentially leading to a segmentation fault or printing (null).
// Example Input:
// bash
// Copy code
// ./program cool brother in city
// Step-by-Step Execution:
// Initial argv: [./program, cool, brother, in, city, NULL]
// First loop:
// *argv → "./program" → advances to "cool".
// Prints "cool".
// Second loop:
// *argv → "cool" → advances to "brother".
// Prints "brother".
// Continues similarly, printing "in", "city", and then potentially (null).
// Output:
// java
// Copy code
// cool
// brother
// in
// city
// (null)   // or may cause a segmentation fault
// Fix:
// To prevent printing (null), adjust the loop:

// c
// Copy code
// while (*(argv + 1) != NULL)
//     printf("%s\n", *++argv);
// This way, it stops before reaching NULL.
//////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
//     int main(int argc, char *argv[])
//     {
//         while (*argv  !=  NULL)
//         printf("%s\n", *(argv++));
//         return 0;
//     }
//     as post increment is along with printf it is not considering so *argv gives the executable file itself
/////////////////////////////////////////////////////////////////
// #include<stdio.h>
// void foo(int (*ary)[3]);
// int main()
// {
//     int ary[2][3];
//     foo(ary);

// }
// void foo(int (*ary)[3])
// {
//     int i=10,j=2,k;
//     ary[0]=&i;
//     ary[1]=&j;
//     for(k=0;k<2;k++)
//     printf("%d\n",*ary[k]);
// }
// The provided C program has a type mismatch error that will cause a compilation error. Let's break it down step by step.

// Code Analysis
// c
// Copy
// #include<stdio.h>

// void foo(int (*ary)[3]);  // Function declaration: expects a pointer to an array of 3 integers

// int main() {
//     int ary[2][3];  // 2D array of size 2x3
//     foo(ary);       // Passing ary to foo
// }

// void foo(int (*ary)[3]) {
//     int i = 10, j = 2, k;
    
//     ary[0] = &i;  // ERROR: assigning int* to int[3]
//     ary[1] = &j;  // ERROR: assigning int* to int[3]

//     for (k = 0; k < 2; k++)
//         printf("%d\n", *ary[k]);  // Dereferencing and printing values
// }
// Problem Explanation
// Parameter Mismatch:

// foo expects a pointer to an array of 3 integers (int (*ary)[3]), which correctly matches ary[2][3].
// BUT: ary[0] = &i; is invalid because ary[0] is of type int[3] and cannot hold the address of a single int.
// Similarly, ary[1] = &j; has the same issue.
// Invalid Assignment:

// Arrays in C are not assignable. You cannot assign an address to an array.
// Dereferencing Issue:

// *ary[k] correctly dereferences to the first element of the subarray, but since the assignments are invalid, this won't work.
// Corrected Version
// If the goal is to store the addresses of i and j in an array and print their values, a pointer array should be used instead.

// c
// Copy
// #include <stdio.h>

// void foo(int *ary[]);  // Array of integer pointers

// int main() {
//     int *ary[2];  // Array of 2 integer pointers
//     foo(ary);
// }

// void foo(int *ary[]) {
//     int i = 10, j = 2, k;
    
//     ary[0] = &i;  // Now valid: assigning int* to int*
//     ary[1] = &j;

//     for (k = 0; k < 2; k++)
//         printf("%d\n", *ary[k]);  // Prints 10 and 2
// }
// Output:

// Copy
// 10  
// 2
// Key Takeaways
// Arrays like int ary[2][3] cannot be assigned with pointers.
// If you want to store addresses, use an array of pointers: int *ary[2].
// Be careful with type compatibility between arrays and pointers.

// ////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// void test(char**);

// int main()
// {
//     char *argv[] = {"a", "b", "c", "d"};
//     test(argv);
//     return 0;
// }
// void test(char **p)
// {
//     char *m;
//     m = (p+= sizeof(int))[-2];
//     printf("%s", m);
// }
// This creates an array of 4 string pointers:

// css
// Copy
// argv[0] → "a"  
// argv[1] → "b"  
// argv[2] → "c"  
// argv[3] → "d"  
// The type of argv is char*[], which decays to char** when passed to test().

// Inside test:

// c
// Copy
// m = (p += sizeof(int))[-2];
// p is a char** pointing to the first element (argv[0]).

// Pointer Arithmetic Issue:
// p += sizeof(int) adds sizeof(int) to the pointer p.

// On most systems, sizeof(int) is 4 bytes.
// Since p is a char**, adding 4 to p moves it forward by 4 pointers, not bytes.
// So, p now points to argv[4] (which is out of bounds).
// Accessing [-2]:
// Now, p[-2] means accessing two elements before p.

// p points to argv[4], so p[-2] is argv[2], which is "c".
// Therefore, m = "c".
// Printing the Result:

// c
// Copy
// printf("%s", m);
// This prints c.

// Output
// r
// Copy
// c
// Potential Issues
// Incorrect Pointer Arithmetic:
// p += sizeof(int) is incorrect because pointer arithmetic should use element sizes, not bytes. The correct way to move p by 4 elements is p += 4;.

// Undefined Behavior:
// Accessing memory beyond the bounds of the array (argv[4]) can lead to undefined behavior.

// Corrected Code (Without Undefined Behavior)
// If the intention is to access "c", this can be done safely:

// c
// Copy
// #include <stdio.h>

// void test(char**);

// int main() {
//     char *argv[] = {"a", "b", "c", "d"};
//     test(argv);
//     return 0;
// }

// void test(char **p) {
//     char *m;
//     m = p[2];  // Directly access "c"
//     printf("%s", m);
// }
// Output:

// r
// Copy
// c
// Key Takeaways
// Pointer arithmetic should be done using element counts, not byte sizes.
// p += sizeof(int) is incorrect for pointer movement.
// Accessing beyond array bounds leads to undefined behavior.
//////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include  <stdlib.h>
// int main()
// {
//   int i, numbers[1];
//   numbers[0] = 15;
//   free(numbers);
//   printf("Stored integers are ");
//   printf("numbers[%d] = %d ", 0, numbers[0]);
//   return 0;
//  }
// The provided code contains a critical error due to the incorrect use of the free() function. Let's analyze the code step by step.

// Code Analysis
// c
// Copy
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i, numbers[1];    // Stack-allocated array of size 1
//     numbers[0] = 15;      // Assign 15 to the first element

//     free(numbers);        // ERROR: Attempt to free stack memory

//     printf("Stored integers are ");
//     printf("numbers[%d] = %d ", 0, numbers[0]);

//     return 0;
// }
// Issues in the Code
// Invalid free() Usage:

// numbers is a stack-allocated array, declared as int numbers[1];.
// The free() function is designed to release memory that was dynamically allocated with malloc(), calloc(), or realloc().
// Calling free(numbers); on a stack-allocated array leads to undefined behavior and may cause the program to crash.
// Accessing Freed Memory:

// Even if free(numbers) were valid (which it isn't), accessing numbers[0] afterward would still be undefined behavior because the memory would have been deallocated.
// Output Behavior:

// If the program doesn't crash, it might still print 15, but this is purely coincidental due to undefined behavior.
// Corrected Code
// Option 1: Remove free() (for stack memory)
// c
// Copy
// #include <stdio.h>

// int main() {
//     int i, numbers[1];   // Stack-allocated array
//     numbers[0] = 15;

//     printf("Stored integers are ");
//     printf("numbers[%d] = %d ", 0, numbers[0]);

//     return 0;
// }
// Output:

// css
// Copy
// Stored integers are numbers[0] = 15
// Option 2: Use Dynamic Memory Allocation
// c
// Copy
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i;
//     int *numbers = (int *)malloc(sizeof(int));  // Dynamic memory allocation

//     if (numbers == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     numbers[0] = 15;  // Store value

//     printf("Stored integers are ");
//     printf("numbers[%d] = %d ", 0, numbers[0]);

//     free(numbers);  // Properly free the allocated memory
//     return 0;
// }
// Output:

// css
// Copy
// Stored integers are numbers[0] = 15
// Key Takeaways
// Use free() only with memory allocated by malloc(), calloc(), or realloc().
// Never call free() on stack-allocated variables or arrays.
// Accessing memory after calling free() leads to undefined behavior.
////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include  <stdlib.h>
// int main()
// {
//   int i;
//   char *ptr;
//   char *fun();
//   ptr = fun();
//   printf(" %s", ptr);
//   return 0;
// }

// char *fun()
// {
//   char disk[30];
//   strcpy(disk, "letsfindcourse");
//   printf("%s ",disk);
//   return disk;
// }
// Local Array (disk) in fun()

// c
// Copy
// char disk[30];
// disk is a local array allocated on the stack.
// Its lifetime ends when the function fun() returns.
// Returning Address of Local Variable

// c
// Copy
// return disk;
// Returning the address of a stack-allocated variable is invalid.
// After fun() finishes, disk's memory is no longer valid.
// Undefined Behavior in main()

// c
// Copy
// printf(" %s", ptr);
// ptr holds an invalid memory address.
// Possible outcomes:
// It might print "letsfindcourse" by chance.
// It might print garbage data.
// It might cause a segmentation fault.
// Corrected Code
// To fix the issue, use dynamic memory allocation (malloc) or declare disk as static.

// Option 1: Using malloc (Recommended)
// c
// Copy
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *fun();

// int main() {
//     char *ptr = fun();
//     printf(" %s", ptr);
//     free(ptr);  // Free the dynamically allocated memory
//     return 0;
// }

// char *fun() {
//     char *disk = (char *)malloc(30 * sizeof(char));  // Dynamic memory allocation

//     if (disk == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }

//     strcpy(disk, "letsfindcourse");
//     printf("%s ", disk);
//     return disk;  // Safe to return
// }
// Output:

// Copy
// letsfindcourse letsfindcourse
// Why It's Correct:

// disk is allocated on the heap, so it persists after fun() returns.
// The memory is properly freed with free(ptr);.
// Option 2: Using static
// c
// Copy
// #include <stdio.h>
// #include <string.h>

// char *fun();

// int main() {
//     char *ptr = fun();
//     printf(" %s", ptr);
//     return 0;
// }

// char *fun() {
//     static char disk[30];  // Static storage (lives throughout the program)
//     strcpy(disk, "letsfindcourse");
//     printf("%s ", disk);
//     return disk;  // Safe to return
// }
// Output:

// Copy
// letsfindcourse letsfindcourse
// Why It's Correct:

// Declaring disk as static makes it persist beyond the function scope.
// No need to free() because it isn't dynamically allocated.
// Key Takeaways
// Never return the address of a local (stack) variable.
// Use dynamic memory (malloc) or static variables when returning data from a function.
// Always free dynamically allocated memory to avoid memory leaks.
///////////////////////////////////////////////////////////////////////////////
// # include<stdio.h>
// #include<stdlib.h>
// void fun(int *a)
// {
//     a = (int*)malloc(sizeof(int));
// }
// int main()
// {
//     int *p;
//     fun(p);
//     *p = 6;
//     printf("%dn",*p);
//     return(0);
// }
//OUTPUT UNDEFINED BEHAVIOUR
// REASON
// 1.trying to allocate memeory through pass by value once we step out of the function the memeory is no longer available ,
// *p trying to dereferencee intmay lead to giving some values,segmentation fault etc,hence it undefined behaviour
// 2.*p is uninitialised pointer -wild pointer truing to derefernce it causes undefined behaviour
/////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>

// void fun(void *p);
// int i;

// int main()
// {
//     void *vptr;
//     vptr = &i;
//     fun(vptr);
//     return 0;
// }
// void fun(void *p)
// {
//     int **q;
//     q = (int**)&p;
//     printf("%d\n", **q);
// }

// Global Variable:

// c
// Copy
// int i;
// i is a global integer variable, automatically initialized to 0.
// Void Pointer in main:

// c
// Copy
// void *vptr;
// vptr = &i;
// vptr is a void pointer, assigned the address of i.
// vptr now points to i.
// Calling fun:

// c
// Copy
// fun(vptr);
// The address of i is passed to the function fun.
// Inside fun:

// c
// Copy
// int **q;
// q = (int**)&p;
// p is a void* parameter, so its type is already a pointer.
// (int**)&p casts the address of p (i.e., void**) to an int**.
// Problem: This is a wrong cast because p is already a pointer. Casting its address to int** is incorrect.
// Dereferencing q:

// c
// Copy
// printf("%d\n", **q);
// **q attempts to dereference the double pointer.
// However, this dereference is invalid because q doesn't correctly point to i.
// This leads to undefined behavior.
// What Happens at Runtime?
// Expected Output:
// Since i is a global variable initialized to 0, if the program "accidentally" works, it might print 0.

// But:
// The cast (int**)&p is incorrect, and this can result in:

// Garbage values.
// Segmentation fault.
// Unpredictable output.
// Correct Version of the Program
// To correctly access i through the void* pointer:

// c
// Copy
// #include <stdio.h>

// void fun(void *p);
// int i;

// int main()
// {
//     void *vptr;
//     i = 10;  // Assign a value for clarity
//     vptr = &i;
//     fun(vptr);
//     return 0;
// }

// void fun(void *p)
// {
//     int *q;
//     q = (int *)p;  // Correct cast
//     printf("%d\n", *q);
// }
// Explanation of the Fix
// Correct Casting:

// c
// Copy
// q = (int *)p;
// p points to i, so it should be cast to int*, not int**.
// Correct Dereference:

// c
// Copy
// printf("%d\n", *q);
// This correctly prints the value of i (in this case, 10).
// Final Thoughts
// The original code causes undefined behavior due to incorrect pointer casting.
// Fix: Cast void* to int* instead of int**.
////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     unsigned char ch;
//      /* file 'abc.c' contains "This is IndiaBIX " */
//     fp=fopen("abc.c", "r");
//     if(fp == NULL)
//     {
//         printf("Unable to open file");
//         exit(1);
//     }
//     while((ch=getc(fp)) != EOF)
//         printf("%c", ch);

//     fclose(fp);
//     printf("\n", ch);
//     return 0;
// }
// The macro EOF means -1.

// while((ch=getc(fp)) != EOF) Here getc function read the character and convert it to an integer value and store it in the variable ch,
//  but it is declared as an unsigned char. So the while loop runs infinitely.
////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char **p=malloc(2*sizeof(char*));
//     for(int i=0;i<2;i++)
//     {
//         p[i]=malloc(6);

//     }
//     strcpy(p[0],"HELLO");
//     strcpy(p[1],"WORLD");
//     for(int i=0;i<2;i++)
//     {
// printf("%s ",p[i]);
//     }
//     return 0;

//  }
///////////////////////////////////////
// int main()
// {
//     char a[]={48,65,97,0};
//     void *p=&a;
//     printf("%s\n",(char*)p+1);
//     return 0;
// }
////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>
// #define MAXROW 3
// #define MAXCOL 4

// int main()
// {
//     int (*p)[MAXCOL];
//     p = (int (*) [MAXCOL])malloc(MAXROW *sizeof(*p));
//     printf("%d, %d\n", sizeof(p), sizeof(*p));
//     return 0;
// }
// 64-bit Architecture:

// On a 64-bit system, pointer sizes are typically 8 bytes.
// sizeof(p) → Size of the pointer p → 8 bytes.
// Size of int:

// On many modern systems, the size of int is typically 4 bytes, not 2 bytes.
// sizeof(*p) → int[MAXCOL] → Array of 4 integers.
// Calculation:
// 4
//  
// (
// integers
// )
// ×
// 4
//  
// (
// bytes each
// )
// =
// 16
//  
// bytes
// 4(integers)×4(bytes each)=16bytes
// Detailed Breakdown
// c
// Copy
// #define MAXROW 3
// #define MAXCOL 4

// int (*p)[MAXCOL];
// p is a pointer to an array of 4 integers.
// sizeof(p) → Size of the pointer → 8 bytes on a 64-bit system.
// sizeof(*p) → Size of an array of 4 integers → 16 bytes if int is 4 bytes.
////////////////////////////////////////
//WAP to accept stdents record .expect the below output
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void main()
{
    int j = 10, k = 20, l = 0;

    if (j && k && l)
    {
        printf("All are non zero");
    }

    if (j)
    {
        printf("1");

        if (!!k)
        {
            printf("2");
        }
    }
}