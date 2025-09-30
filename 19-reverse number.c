#include<stdio.h>
int flag=0,digit=0,rev=0;
int rev_num(int num)
{
if(num<0)
{
    num=-num;
    flag=1;
}
while(num)
{
digit=num%10;
rev=rev*10+digit;
num=num/10;
}
if(flag==1)
{
    rev=rev*-1;
    return rev;
}
else{
    return rev;
}

}
int main()
{
    int num,res;
    printf("enter number: ");
    scanf("%d",&num);
    res=rev_num(num);
    printf("reversed number is %d\n",res);
    return 0;
}