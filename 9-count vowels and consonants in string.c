#include<stdio.h>
int main()
{
    char str[100];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' &&str[i]<='z')
        {
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
           {
            printf("vowel-%c,",str[i]);
           }
           else 
          {
            printf("consonant-%c,",str[i]);
          }
        }
    }
    return 0;
}