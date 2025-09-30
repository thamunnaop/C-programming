// #include<stdio.h>
// int even_array_elements(int *arr,int size)
// {
//     int i,count=0;
//     for(i=0;i<size;i++)
//     {
//     if(arr[i]%2==0)
//     {
//             count++;
//     }
   
//     }
//      return count;
// }
// int main()
// {
//     //declare array
//     int arr[10],res;
//     printf("enter the array elements: ");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//  res=even_array_elements(arr,10);
//  printf("no of even elements in array is %d\n",res);
//  return 0;
// }


//ARMSTRNG NUMBER
// #include<stdio.h>
// int main()
// {
//     int num,original,sum=0,rem;
    
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     original=num;
//     while(original!=0)
//     {
//         rem=original%10;
//         sum=sum+rem*rem*rem;
//         original=original/10;
//     }
//     if(sum==num)
//     {
//         printf("%d is an armstrong number\n",num);
//     }
//     else
//     {
//         printf("%d is not an armstrong number\n",num);
//     }
//     return 0;
// }

//WRITE A PROGRAM TO MERGE TWO ARRAY AND FIND UNIQUE ELEMENT
// #include<stdio.h>
// int main()
// {
//     int arr1[10],arr2[10],arr3[20],i,j,k=0;
//     printf("enter the first array elements: ");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     printf("enter the second array elements: ");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     //merge two arrays
//     for(i=0;i<10;i++)
//     {
//         arr3[k]=arr1[i];
//         k++;
//     }
//     for(i=0;i<10;i++)
//     {
//         arr3[k]=arr2[i];
//         k++;
//     }
//     //find unique elements
//     for(i=0;i<20;i++)
//     {
//         for(j=i+1;j<20;j++)
//         {
//             if(arr3[i]==arr3[j])
//             {
//                 break;
//             }
//         }
//         if(j==20)
//         {
//             printf("%d ",arr3[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }


//PROGRAM TO CONVERT BINARY TO DECIMAL
//write a program to convert binary to decimal
// #include<stdio.h>
// int main()
// {
//     int num,rem,dec=0,base=1;
//     printf("enter the binary number: ");
//     scanf("%d",&num);
//     while(num>0)
//     {
//         rem=num%10;
//         dec=dec+rem*base;        
//         num=num/10;
//         base=base*2;
//     }

//     printf("decimal number is %d\n",dec);
//     return 0;
// }

//PROGRAM TO FIND FACTORIAL OF NUMBER

// #include <stdio.h>

// // Function to calculate factorial
// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++) {
//         fact *= i; // fact = fact * i
//     }
//     return fact;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Check if number is non-negative
//     if (num < 0)
//         printf("Factorial is not defined for negative numbers.\n");
//     else
//         printf("Factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }

//WAP to check if the given number is a POWER OF TWO or not.
// #include <stdio.h>

// int isPowerOfTwo(int n) {
//     if (n <= 0)
//         return 0; // negative numbers or 0 can't be power of 2

//     while (n % 2 == 0) {
//         n = n / 2;
//     }

//     return (n == 1); // If we finally reach 1, it was power of 2
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPowerOfTwo(num))
//         printf("%d is a power of 2.\n", num);
//     else
//         printf("%d is NOT a power of 2.\n", num);

//     return 0;
// }

//FIND THE 2ND LARGEST ELEMENT IN AN ARRAY

// #include <stdio.h>

// int sec_largest(int *arr, int size)
// {
//     //find the largest and smallest elements in array
//     //declare variables
//     int largest,smallest;
//     //initialise largest and smallest
//     largest=arr[0];
//     smallest=arr[0];
//     //logic to find largest and smallest
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//          else if(arr[i]<smallest)
//          {
//              smallest=arr[i];
//          }
//     }
//     //declare variable
//     int second_largest=smallest;
//     //logic to get second largest arr element
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>second_largest && arr[i]<largest)
//         {
//             second_largest=arr[i];
//         }
//     }
//     return second_largest;
// }

// int main()
// {
//     //declare variables
//     int size, ret;
    
//     //Read size from the user
//     //printf("Enter the size of the array :");
//     scanf("%d", &size);
    
//     int arr[size];
//     //printf("Enter the elements into the array: ");
    
//     //Read elements into the array
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     //funtion call
//     ret = sec_largest(arr, size);
    
//     printf("Second largest element of the array is %d\n", ret);
//     return 0;
// }

//WRITE SIMPLE CODE OF DANGLING POINTER
// #include <stdio.h>
//
// void dangling_pointer() {
//     int *ptr;
//     {
//         int local_var = 42;
//         ptr = &local_var; // ptr points to local_var
//     } // local_var goes out of scope here

//     // Now ptr is a dangling pointer
//     printf("Dangling pointer value: %d\n", *ptr); // Undefined behavior
// }

//simple code of function pointer
//#include <stdio.h>

// Normal function to add two numbers
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     // Declare a function pointer
//     int (*funcPtr)(int, int);

//     // Point it to the add function
//     funcPtr = add;

//     // Use the function pointer to call the function
//     int result = funcPtr(5, 3);

//     printf("Sum = %d\n", result);

//     return 0;
// }

