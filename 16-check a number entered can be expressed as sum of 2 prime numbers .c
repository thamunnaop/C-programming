//for example;
//if we enter  34->31+3,here both 3 and 31 are prime numbers and addinng both we get 34 
//implement the code for ths

#include<stdio.h>
//functn to check prime or not

int is_prime(int num)
{
    if(num<2)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num,flag=0;
    //prompt to enter number
    printf("enter the number: ");
    scanf("%d",&num);
    //we want to run the loop for num/2 times and check whether the i and num-i are prime numbers
    //then only we can do further operation
    for(int i=2;i<num/2;i++)
    {
        
        if(is_prime(i)&& is_prime(num-i))
        {
           printf("%d=%d+%d\n",num,i,num-i);
           flag=1;
        }
        
    }
    if(flag==0)
        {
        printf("the number cannot be expressed as sum of prime numbers\n");
        }
    
    return 0;

}