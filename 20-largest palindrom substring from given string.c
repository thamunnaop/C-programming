#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_strlen(char *str)
{
    int count;
    while(*str!='\0')
    {
         count++;
        str++;
    }
    return count;
}

int expand(char *str,int left,int right,int strlen)
{
    
        while(left>=0 &&right<strlen && str[left]==str[right])
        {
            left--;
            right++;
        }
    
    return right-left-1;
}


char*longest_palindrome(char *str,int strlen)
{
    int start=0,end=0;
    for(int i=0;i<strlen;i++)
    {
      int len1=expand(str,i,i,strlen);//odd len centre 
      int len2=expand(str,i,i+1,strlen);//even length centre
      int len=len1>len2?len1:len2;


      if(len>end-start+1)
      {
        start=i-(len-1)/2;
        end=i+len/2;
      }
    }
    int len=end-start+1;
    char *res=(char*)malloc(len+1);
    strncpy(res,str+start,len);
    res[len]='\0';
    return res;
}

int main()
{
    char str[100];
    int strlen;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    strlen=my_strlen(str);
    char *result=longest_palindrome(str,strlen);
    printf("longest palindrome %s\n",result);
    free(result);
    return 0;
}