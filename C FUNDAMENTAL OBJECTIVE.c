// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 2;
//     a += b -= a;
//     printf("%d  %d", a, b);
// }
// This combines two compound assignment operators: += (add and assign) and -= (subtract and assign).

// Initial Values:

// a = 1
// b = 2
// Evaluate b -= a:

// b -= a means b = b - a.
// Substitute the values:
// css
// Copy
// Edit
// b = 2 - 1
// b = 1
// Now, b = 1.
// Substitute b -= a into a += b:

// After b -= a is evaluated, the result of b -= a is the new value of b, which is 1.
// So the expression becomes:
// css
// Copy
// Edit
// a += 1
// This means:
// css
// Copy
// Edit
// a = a + 1
// a = 1 + 1
// a = 2
// Final Values:
// a = 2
// b = 1
// Output:
// The printf statement:

// c
// Copy
// Edit
// printf("%d  %d", a, b);
// Prints:

// Copy
// Edit
// 2  1
/////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     unsigned int a = 10;
//     a = ~a;
//     printf("%u", a);  // Use %u for unsigned integers
//     return 0;
// }
// unsigned int a = 10:
// a is declared as an unsigned integer and initialized to 10.
// In binary, 10 (decimal) is represented as:
// arduino
// Copy
// Edit
// 00000000 00000000 00000000 00001010  (32-bit representation)
// 2. a = ~a:
// The ~ operator is the bitwise NOT operator, which flips every bit in the number.
// Applying ~ to 10:
// vbnet
// Copy
// Edit
// Original:   00000000 00000000 00000000 00001010 (10 in binary)
// After ~:    11111111 11111111 11111111 11110101
// The result after ~a is:
// arduino
// Copy
// Edit
// 4294967285 (in decimal) for a 32-bit unsigned integer.
// 3. printf("%d", a):
// %d is used to print a signed integer, but a is an unsigned integer.
// When an unsigned integer is printed using %d, it is interpreted as signed, which can cause confusing output.
// The actual value stored in a is 4294967285.
// To correctly print the value of a, you should use the %u format specifier for unsigned integers:

// c
// Copy
// Edit
// printf("%u", a);
// Output:

// Copy
// Edit
// 4294967285
// Why Does %d Cause Confusion?
// If you use %d, the compiler interprets the number as signed, which could result in unexpected output because the bit pattern 11111111 11111111 11111111 11110101 might represent a negative number in signed 2's complement representation.

// Corrected Code:
// c
// Copy
// Edit
// #include<stdio.h>
// int main()
// {
//     unsigned int a = 10;
//     a = ~a;
//     printf("%u", a);  // Use %u for unsigned integers
//     return 0;
// }
// Final Output:
// Copy
// Edit
// 4294967285






// You said:
// which is that negative number
// ChatGPT said:
// ChatGPT
// To determine the negative number represented by the bit pattern 11111111 11111111 11111111 11110101 (from your code) when interpreted as a signed 32-bit integer, we use two's complement representation.

// Step-by-Step Process:
// Bit Pattern of ~10:

// Copy
// Edit
// 11111111 11111111 11111111 11110101
// This is the result of flipping all the bits of 10.

// Two's Complement Representation: In a signed integer, the most significant bit (MSB) is the sign bit:

// 0: Positive number.
// 1: Negative number.
// Here, the MSB is 1, so this represents a negative number.

// Find the Magnitude of the Negative Number: To find the magnitude of a two's complement negative number:

// Invert all bits (1's complement).
// Add 1 to the result.
// Step 1: Invert All Bits (1's complement):

// makefile
// Copy
// Edit
// Original:    11111111 11111111 11111111 11110101
// Inverted:    00000000 00000000 00000000 00001010
// Step 2: Add 1:

// Copy
// Edit
// 00000000 00000000 00000000 00001010
// 00000000 00000000 00000000 00000001
// 00000000 00000000 00000000 00001011

// sql
// Copy
// Edit

// The magnitude is `11` (in decimal).

// 4. **Final Signed Number:**
// Since the original bit pattern represents a negative number, the result is:
// -11

// yaml
// Copy
// Edit

// ---

// ### **Conclusion:**
// The bit pattern `11111111 11111111 11111111 11110101` represents the signed 32-bit integer:
// -11