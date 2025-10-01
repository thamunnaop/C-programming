#include<stdio.h>
int main()
{
    unsigned int num;
    int count;
    printf("enter the number: ");
    scanf("%x",&num);
    int temp=num;
    for(count=0;num!=0;num=num>>1)
    {
        if(num&01)
        {
            count++;
        }
    }
    
    if(count%2==0)
    {
        temp=((temp&0xF0)>>4)|((temp&0x0f)<<4);
    }
    printf("%x\n",temp);
}