#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    //extract msb and lsb
    unsigned char msb=num>>(7)&1;
    unsigned char lsb=num&1;

    //clear msb and lsb
    num=num&~(1<<7);
    num=num & ~1;

    //set msb and lsb
    num=num|(msb);
    num=num|(lsb<<7);
    printf("Number after swapping MSB and LSB: %u\n", num);
}