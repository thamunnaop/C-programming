#include<stdio.h>
int is_palindrome(char *str,int start,int end)
{
    while(start<end)
    {
        if(str[start]==str[end])
        {
          start++;
          end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    int max=0,max_start=0,max_end=0;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    int start,end;
   for(int i=0;str[i]!='\0';i++)
   {
        if(str[i]!=' '&& (i==0||str[i-1]==' '))
        {
          start=i;
        }
         if(str[i]!=' ' &&(str[i+1]=='\0'||str[i+1]==' '))
        {
          end=i;
        if(is_palindrome(str,start,i)==1)
        {
            int len=end-start+1;
            if(len>max)
            {
                max=len;
                max_start=start;
                max_end=end;
            }
        }
        }
       
    }

   if(max>0)
   {
    printf("largest palindrome word: ");
    for(int i=max_start;i<=max_end;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
   }
  else
  {
    printf("no palindrome\n");
  }
    
}