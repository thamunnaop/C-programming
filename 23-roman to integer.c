#include<stdio.h>
int value(char s)
{
    switch(s)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return 0;
    }
}
int roman_to_int(char *s)
{
    int res=0;
    for(int i=0;s[i]!='\0';i++)
    {
     
  
//The `value` function maps Roman numerals to integers.
//The main logic checks if the current numeral is less than the next; if so, it subtracts, otherwise adds.
//Example: "IX" → 10 - 1 = 9.
//Enter a Roman numeral (e.g., `XIV`) and it will print `XIV - 14`.


        int s1=value(s[i]);
        int s2=value(s[i+1]);
        if(s1<s2)
    {
         res=res+(s2-s1);
         i++;//skip the nxt character
    }
    else
    {
        res=res+s1;
    }
    }
    return res;
}
int main()
{
    
   char str[50];
   int result;
   printf("enter the roman number: ");
   scanf("%[^\n]",str);
   result=roman_to_int(str);
   printf("%s-%d",str,result);
   return 0;
}