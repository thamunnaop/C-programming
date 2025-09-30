//write a program to print first 50 natural numbers using recursion
// #include<stdio.h>
// void fun(int num)
// {
// if(num>50)
// {
//     return;
// }

// printf("%d ",num);
//     num=num+1;
//     fun(num);
// }
// int main()
// {
//     int num=1;
//     fun(num);
//     return 0;
// }
//write a program in c to print sum of numbers from 1 to n using recursion
// #include<stdio.h>

// int  fun(int n1)
// {
// int res;
// if(n1==1)
// {
//     return 1;
// }
// else{
// res=n1+fun(n1-1);
// }
// return res;
// }


// int main()
// {
//     int n1,sum;
//     printf("enter the limit: ");
//     scanf("%d",&n1);
//    sum= fun(n1);
//     printf("the sum of numbers from  1 to %d is %d\n",n1,sum);
//     return 0;
// }
//write a program to count number of digit in given number using recursion
// #include<stdio.h>
// int fun(int num)
// {
//    static int count =0;
//  if(num!=0)
//  {
// count++;
// fun(num/10);
//  }
//  return count;

// }
// int main()
// {
//     int num,res;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     res=fun(num);
//     printf("number of digits in the given number is %d\n",res);
// }
//write a program in c to find sum of digits in a number using recurssion
// #include<stdio.h>
// int fun(int num)
// {
//     if(num==0)
//     return 0;

//     return (num%10)+fun(num/10);

// }
// int main()
// {
//     int num,res;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     res=fun(num);
//     printf("sum of digits in number is %d\n",res);
//     return 0;
// }

// program to reverse array using pointers
// #include<stdio.h>
// void reverse_arr(int *arr,int size)
// {
//     int i;
//     for(i=0;i<size/2;i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[size-1-i];
//         arr[size-1-i]=temp;
//     }
// }
// int main()
// {
//     int size,i;
//     printf("Enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of array: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("array elements befor reverse: ");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     reverse_arr(arr,size);
//     printf("array elements after reverse: ");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
//write a program to print the sum of all elements in an array using pointers
// #include <stdio.h>
// int sum_of_elements(int *arr,int size,int sum)
// {
//     for(int i=0;i<size;i++)
//     {
//     sum=sum+arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int size,i,sum=0,res;
//     printf("Enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of array: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("array elements befor reverse: ");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     res=sum_of_elements(arr,size,sum);
//     printf("the sum of elements in array is %d\n",res);
//     return 0;
// }
//Write a C program to demonstrate how a function returns a pointer.
#include<stdio.h>
int largest(int *num1,int *num2)
{
    if(*num1>*num2)
    {
        return *num1;
    }
    else{
        return *num2;
    }
}
int main()
{
    int num1=1,num2=5,res;
    res=largest(&num1,&num2);
    printf("the largest among num1 and num2 is %d\n",res);
    return 0;
}