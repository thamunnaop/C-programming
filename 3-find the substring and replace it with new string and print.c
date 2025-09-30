#include<stdio.h>
#include<stdio_ext.h>

int main()
{
    int i=0,j=0,k=0,pos;
    char haystack[100];
    printf("enter the string: ");
    scanf("%[^\n]",haystack);
    __fpurge(stdin);


    char needle[50];
    printf("enter the substring: ");
    scanf("%[^\n]",needle);
   __fpurge(stdin);

    char new[10];
    printf("enter the new string: ");
    scanf("%[^\n]",new);

    for( i=0;haystack[i]!='\0';i++)
    {
        for(j=0,k=i;haystack[k]!='\0' && needle[j]!='\0';j++,k++)
        {
            if(haystack[k]!=needle[j])
            {
                break;
            }
        }
    
    if(needle[j]=='\0')
     {
        //to print the needle
        for(j=0;needle[j]!='\0';j++)
        {
            printf("%c",needle[j]);
            
        }
       printf("\n");
       // to print the starting position of neeedle
        printf("%d\n",i);
        //store the starting position of needle in a variable
         pos=i;

        break;
      }
    }
   //for adding the new string content to the main string replacing needle by the new string
   //first take a result string store the haystack content till needle point start that is till pos
   //then add new string at pos and copy remaining main string content in result string

   int r=0;
   char res[100];
   for( i=0;i<pos;i++)
   {
    res[r++]=haystack[i];

   }
   //copy new string conent 
   for(int i=0;new[i]!='\0';i++)
   {
    res[r++]=new[i];
   }
   //copy the remaing contents
   for(int i=pos+j;haystack[i]!='\0';i++)
   {
    res[r++]=haystack[i];
   }
   res[r]='\0';
   printf("%s\n",res);

}