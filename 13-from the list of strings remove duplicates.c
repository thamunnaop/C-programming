#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
    int num;
    int unique_count=0,flag;
    printf("enter number of string: ");
    scanf("%d",&num);
    __fpurge(stdin);
    char **arr1=(char**)malloc(num*sizeof(char*));
     char **arr2=(char**)malloc(num*sizeof(char*));
    for(int i=0;i<num;i++)
    {
        arr1[i]=(char*)malloc(101*sizeof(char));
        printf("enter the %d string: ",i+1);
        scanf("%[^\n]",arr1[i]);
        __fpurge(stdin);
          
    }
    arr2[0]=arr1[0];
     for(int i=1;i<num;i++)
       {
        flag=0;
        for(int j=0;j<unique_count;j++)
        {
            if(strcmp(arr1[i],arr2[j])==0)
            {
                flag=1;
                break;
            }
    
        }
       
       if(flag==0)
       {
        arr2[unique_count]=(char*)malloc(101*sizeof(char));
        strcpy(arr2[unique_count],arr1[i]);
        unique_count++;
       }

    }
    
    printf("Unique strings:\n");
   for(int i = 0; i < unique_count; i++)
    {
    printf("%s\n", arr2[i]);
    }
}