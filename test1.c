
#include <stdio.h>
//function converts integer to a string
void itoa(int num, char *str){
    int flag=0,i=0;
    if(num<0)
    {
        flag=1;
        num=-num;
    }
    //logic to convert integer to string
    do
    {
    str[i]=(num%10)+'0';
    num=num/10;
    i++;
    }while(num>0);
    if(flag==1)
    {
        str[i++]='-';
    }
    str[i]='\0';
    //revrse the string
    int first=0,last=i-1;
    char temp;
    //logic to reverse the string
    while(first<last)
    {
        temp=str[first];
        str[first]=str[last];
        str[last]=temp;
        first++;
        last--;
    }
    
}

int main()
{
    //declare variables
    int num;
    char str[100];
    //prompting msg
    //printf("Enter the number:");
    //read number from user
    scanf("%d", &num);
    //call function
    itoa(num, str);
    //output
    printf("Integer to string is %s", str);
    return 0;
}