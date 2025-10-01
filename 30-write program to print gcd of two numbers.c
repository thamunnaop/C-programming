#include<stdio.h>
int gcd_fun(int num1,int num2)
{
    while(num2!=0)
    {
    int temp=num2;
    num2=num1%num2;
    num1=temp;
    }
    return num1;
}
int main()
{
    int num1,num2;
    printf("enter the two number num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    printf("the greatest common diversor of numbers is %d\n",gcd_fun(num1,num2));
    return 0;
}