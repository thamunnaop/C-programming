
#include<stdio.h>
int main()
{
    unsigned int num,temp,reversed=0,res=0;
    printf("enter the number: ");
    scanf("%x",&num);
    //array to store unique nibbles
    int seen[16]={0};
    temp=num;
    while(temp!=0)
    {
        //extract each nibble from right
        int nibble=temp&0xf;
        temp=temp>>4;
        if(seen[nibble]==0)
        {
            seen[nibble]=1;
            reversed=reversed<<4|nibble;

        }
    }
        //reverse the order
        while(reversed!=0)
        {
            int nibble=reversed&0xf;
            reversed=reversed>>4;
            res=res<<4|nibble;


        }
        printf("%X\n",res);
        return 0;
    }
    