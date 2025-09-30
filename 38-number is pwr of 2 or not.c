#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num>0 && (num & (num-1))==0)
    {
        printf("number is pwr of 2\n");
    }
    else
    {
        printf("number is not pwr of 2\n");
    }
    return 0;
    
}