

#include<stdio.h>
int main()
{
    unsigned char arr[5]={2,5,3,64,125};
     int bit3_set,bit0_set;
    for(int i=0;i<5;i++)
    {
        //check the 3rd bit of higher nibble set or not
       
        bit3_set=(arr[i]>>6)&1;
        bit0_set=arr[i]&1;

         if( bit3_set && bit0_set)
        {
            printf("3rd bit of higher nibble and 1st bit of lower nibble is set\n");
        }
        else
        {
            printf("the condition fails\n");
        }
    }   
       
    

}