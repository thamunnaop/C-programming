#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

//funtn to find count of string
int str_len(char *p1)
{
    int count=0;
  while(*p1!='\0')
  {
    count++;
    p1++;
  }
  return count;
}


int main()
{
    //enter how many string want to enter
    int num;
    
    printf("enter the number of strings: ");
    scanf("%d",&num);
    __fpurge(stdin);
    //allocate dynamic memory for the array of pointers to store all the strings
    char **arr=(char**)malloc(num*sizeof(char*));
    //allocate memory for an count array to store len of each string
    int*count=(int*)malloc(num*sizeof(int));
    
    //enter the strings
    for(int i=0;i<num;i++)
    {
        //allocate memory for each strings
       arr[i]=(char*)malloc(101*sizeof(char));//always rembmber the string is inside the pointer array so for
                                              //each index of pointer array we need to allocate memory which can hold requires string
        printf("enter the %d- string: ",i+1);
        scanf("%[^\n]",arr[i]);
        __fpurge(stdin);
        //to find the count of each string
        count[i]=str_len(arr[i]);
    }
    
    
   
    //to find the maximum length string find the max of count array;
    
    int max=count[0],temp=0;
    for(int i=1;i<num;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
             temp=i;
        }
    
    }     
    
        printf("the largest string is %s\n",arr[temp]);
         // Free memory
         for(int i=0; i<num; i++)
        free(arr[i]);
        free(arr);
        free(count);

        return 0;
    
}