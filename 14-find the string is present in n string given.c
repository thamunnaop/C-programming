#include<stdio.h>
int strcmp(char *s1,char*s2)
{
    while(*s1!='\0' && *s2!='\0')
    {
        if(*s1==*s2)
        {
        s1++;
        s2++;
        }
    
    else
    {
        break;
    }
    }
    return *s1-*s2;
}
int main(int argc,char **argv)
{
    char str[15];
    int flag;
    printf("enter the substring: ");
    scanf("%[^\n]",str);
    for(int i=1;i<argc;i++)
    {
      if(strcmp(str,argv[i])==0)
      {
        flag=1;
        break;
      }
      else
      {
        flag=0;
      }
    }
    if(flag==1)
    {
        printf("substring found\n");

    }
    else
    {
     printf("substring not found\n");
    }
    return 0;
}