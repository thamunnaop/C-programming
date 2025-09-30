// #include<stdio.h>
// #define man(x, y) ((x)>(y)) ? (x):(y)

// int main()
// {
//     int i=10, j=5, k=0;
//     k = man(++i, j++);
//     printf("%d, %d, %d\n", i, j, k);
//     return 0;
// }
//ans 12, 6, 12
/////////////////////////////////////////////////
// #include<stdio.h>
// #define JOIN(s1, s2) printf("%s=%s %s=%s \n", #s1, s1, #s2, s2);
// int main()
// {
//     char *str1="India";
//     char *str2="BIX";
//     JOIN(str1, str2);
//     return 0;
// }
// Explanation of the Code:
// Macro Definition:

// c
// Copy
// Edit
// #define JOIN(s1, s2) printf("%s=%s %s=%s \n", #s1, s1, #s2, s2);
// The JOIN macro uses the stringizing operator (#) to convert the arguments s1 and s2 into string literals.
// #s1 converts the variable name s1 into a string (e.g., "str1").
// Similarly, #s2 converts the variable name s2 into a string (e.g., "str2").
// After preprocessing, the macro call:

// c
// Copy
// Edit
// JOIN(str1, str2);
// Expands to:

// c
// Copy
// Edit
// printf("%s=%s %s=%s \n", "str1", str1, "str2", str2);
// Main Function:

// c
// Copy
// Edit
// char *str1="India";
// char *str2="BIX";
// str1 and str2 are pointers to string literals "India" and "BIX", respectively.
// When JOIN(str1, str2) is executed:

// "str1" and "str2" (the stringized variable names) are printed.
// The values of str1 ("India") and str2 ("BIX") are also printed.
// Output: The printf statement produces:

// makefile
// Copy
// Edit
// str1=India str2=BIX
// Why Does This Work?
// Stringizing Operator (#): The # operator in the macro converts the argument into a string literal, making "str1" and "str2" part of the output.
// Pointer to String Literals: The variables str1 and str2 point to the strings "India" and "BIX". These values are correctly dereferenced and displayed.
// Key Points to Note:
// Stringizing in Macros: The # operator is useful when you want to include the variable name (not its value) in the output or for debugging purposes.
// Readability of Output: The macro efficiently combines variable names and their values in a single printf statement.
///////////////////////////////////////////////////
// #include <stdio.h>
// #define i 5
// int main()
// {
//   #define i 10
//   printf("%d",i);
//   return 0;
// }
// Ans : 10
// Explanation: The preprocessor directives can be redefined anywhere in the program.
//  So the most recently assigned value (#define i 10) will be taken.
/////////////////////////////////////////////////////////////////////
// #include <stdio.h> 
// #include  <stdlib.h>
// #define square(x) x*x
// int main()
// {
//   int i;
//   i = 27/square(3);
//   printf("%d",i);
//   return 0;
// }
// Explanation: Operators enjoys priority / is given more priority over *. 
// In this program the execution takes place in this format. 27 / square(3) 27 / 3*3 27 / 3*3 9 * 3 27
///////////////////////////////
		   
// #include <stdio.h>
// // #define clrscr() 17
// int main()
// {
//   clrscr() ;
//   printf("%d",clrscr() );
//   return 0;
// }
// output 17
///////////////////////////////////
// #include <stdio.h>
// #define X 3
// #if !X
//     printf("Geeks");
// #else
//     printf("Quiz");
 
// #endif
// int main()
// {
//         return 0;
// }
// A program is converted to executable using following steps 1) Preprocessing 2) C code to object code conversion 3) Linking The first step processes macros. So the code is converted to following after the preprocessing step.
// printf("Quiz");
// int main()
// {
//         return 0;
// }

// The above code produces error because printf() is called outside main. The following program works fine and prints "Quiz"
// #include 
// #define X 3

// int main()
// {
// #if !X
//     printf("Geeks");
// #else
//     printf("Quiz");

// #endif
//     return 0;
// }
//////////////////////////////////////////////////////////////
// #include <stdio.h>
// #define ISEQUAL(X, Y) X == Y
// int main()
// {
//     #if ISEQUAL(X, 0)
//         printf("Geeks");
//     #else
//         printf("Quiz");
//     #endif
//     return 0;
// }
// xplanation

// The conditional macro #if ISEQUAL(X, 0) is expanded to #if X == 0. After the pre-processing is over, 
// all the undefined macros are initialized with default value 0.
//  Since macro X has not been defined, it is initialized with 0. So, Geeks is printed.
////////////////////////////////////////////////////////////////////////////
// Suppose someone writes increment macro (i.e. which increments the value by one) in following ways:

// #define INC1(a) ((a)+1)

// #define INC2 (a) ((a)+1)

// #define INC3( a ) (( a ) + 1)

// #define INC4 ( a ) (( a ) + 1)
// In C, for macros with arguments, there can’t be any space between macro name and open parenthesis.
//  That’s why only INC1 and INC3 are correct. Basically,
//  “#define INC2 (a) ((a)+1)” results in “INC2” expansion to “(a) ((a)+1)” which is not the desired expansion.
///////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #define a 10
// void main()
// {
//     printf("%d..",a);
//     foo();
//     printf("%d",a);
// }
// void foo()
// {
//     #undef a
//     #define a 50
      
// }
// #define and #undef Preprocessor Directives:

// #define a 10 defines a as a macro with a value of 10.
// #undef a removes the definition of a, so it can be redefined later.
// Preprocessing Happens Before Compilation:

// The preprocessor processes all #define and #undef directives before the actual compilation.
// When the preprocessor substitutes macros, it does so for the entire file.
// foo() Function Call:

// Preprocessor directives like #undef and #define are not executed at runtime but are handled during preprocessing.
// Therefore, the foo() function's directives have no impact on the already compiled code.
// What Happens in This Code:
// During preprocessing:

// a is defined as 10.
// In the function foo, the macro a is undefined and redefined as 50.
// During compilation:

// The preprocessor substitutes a with its value (10) throughout the file before compilation.
// The #undef and #define in foo do not affect the main function's a because they occur after preprocessing.
// During execution:

// printf("%d..", a); in main prints 10.. because a was substituted with 10.
// foo() does not affect the output because it only redefines a for preprocessing purposes (already complete by now).
// printf("%d", a); in main again prints 10 because the redefinition in foo is irrelevant.
// Output:
// Copy
// Edit
// 10..10
//////////////////////////////////////////////////////
// #include<stdio.h>
// #define hello( n ) a##n 
// int a3;
// int main()
// {
//     int x;
//     x=hello(3);
//     if(x!=0)
//     printf("hi");
//     else
//     printf("good");
// }
// Macro Expansion:

// The macro hello(n) uses the ## operator, which concatenates a and the value of n.
// hello(3) expands to a3 because ## joins a and 3 into the identifier a3.
// Variable Declaration:

// int a3; declares a global integer variable a3. By default, global variables are initialized to 0 in C.
// Logic in main():

// x = hello(3); expands to x = a3;.
// Since a3 is a global variable initialized to 0, x will also be assigned 0.
// Conditional Check:

// if (x != 0) evaluates to false because x = 0.
// The else block executes, printing "good".
// Execution Flow:
// Macro hello(3) expands to a3.
// x = a3 assigns the value of a3 (which is 0) to x.
// The condition if (x != 0) evaluates to false.
// The else block executes, printing "good".
// Output:
// Copy
// Edit
// good
// Key Takeaways:
// The ## operator concatenates tokens in macros to create identifiers dynamically.
// Global variables in C are initialized to 0 by default.
// Understanding macro expansion is crucial to analyzing such programs.
/////////////////////////////////////////////////////////////////////////////////
//#include<stdio.h>
// #define max 100
  
// int main()
// {
//     #ifdef max
//     printf("hello");
// }
// ans;this code produces a compilation error as #ifdef is not closed with #endif,hence this code produces compilation __error 
// if the code is as mentione d below 

// #include<stdio.h>
// #define max 100
  
// int main()
// {
//     #ifdef max
//     printf("hello");
//     #endif

// }
// the output will be 
// hello
////////////////////////////////////////////////////////////////////
//  #include<stdio.h>
//   #define sf 99
//  void f()
//  {
//        #undef sf
//     #define sf 100
//      printf("%d",sf);
//  }
//  int main()
//  {
  
//     f();
//     printf("%d",sf);
// }
// void f()
//  {
//        #undef sf
//     #define sf 100
//      printf("%d",sf);
//  }

// Preprocessing Happens First:
// The preprocessor processes all the #define statements before function calls are even considered.
// It doesn’t matter where f() is called or where main() is executed in terms of macro replacement—the replacement is already done by the preprocessor.
// Function Execution Happens at Runtime:
// After the preprocessing step, the compiler and runtime system deal with function calls (f() or main()).
// Why Does sf Become 100 Everywhere?
// At the start of the program, sf is defined as 99.
// Inside f(), sf is redefined as 100.
// Since macros are global and not scoped to functions, this redefinition affects all subsequent lines of code.
// Even when the program goes back to main(), the new definition of sf (100) is still in effect.
// Final Simplified Explanation:
// Macros are replaced before the program even runs.
// First, sf is replaced with 99 everywhere.
// Then, inside f(), sf is redefined to 100, and this affects the rest of the program.
// Function calls happen after the preprocessing step, during runtime.
// By the time main() or f() runs, the macro replacement has already been applied, so sf is 100 in both f() and main().
// Key Takeaway:
// Macro replacement happens globally and before runtime.
// Function calls (f() or main()) don’t interfere with this process; they execute the already preprocessed code.
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#pragma (1)
struct test
{
    int i;
    char j;
};
main()
{
    printf("%d",sizeof(struct test));
}
////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   printf("%d",30);
//   return 0;
// }