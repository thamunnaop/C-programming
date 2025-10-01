#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
int str_len(char *str)
{
    int count;
    while(*str!='\0')
    {
      count++;
      str++;
    }
    return count;
}
int main()
{
    int num;
    
    printf("enter number of string: ");
    scanf("%d",&num);
    __fpurge(stdin);
    char **arr=(char**)malloc(num*sizeof(char*));
    char *count=(char*)malloc(num*sizeof(char));
    for(int i=0;i<num;i++)
    {
        arr[i]=(char*)malloc(101*sizeof(char));
        printf("enter the %d string: ",i+1);
        scanf("%[^\n]",arr[i]);
        __fpurge(stdin);
          count[i]=str_len(arr[i]);

    }
        int max_len=count[0];
        int index=0;
        for(int i=0;i<num;i++)
        {
        if(count[i]>max_len)
        {
            max_len=count[i];
            index=i;
        }

        }


        //swap logic
        for(int i=0;i<num-1;i++)
        {
            for(int j=0;j<num-1-i;j++)
            {
                if(count[j]>count[j+1])
                {
                    char* temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        //print elements

        for(int i=0;i<num;i++)
        {
            printf("%s\n",arr[i]);
            free(arr[i]);
        }
      free(arr);
      return 0;
}