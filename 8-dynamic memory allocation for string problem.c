#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
    int num;
    printf("enter the number of string: ");
    scanf("%d",&num);
      __fpurge(stdin);

//when we need to take many strinds as input and want to do operations throughout all strings better way to 
//do this is keep all of them in a pointer array 
   char**arr=(char**)malloc(num*sizeof(char));
   //now i want to store each string in this pointer array
   for(int i=0;i<num;i++)
   {
     arr[i]=(char*)malloc(101*sizeof(char));
     printf("enter the %dth string:",i+1 );
      scanf("%[^\n]",arr[i]);
      __fpurge(stdin);
   }
      //bubble sort
      for(int i=0;i<num-1;i++)
      {
        for(int j=0;j<num-1-i;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                char*temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }
    
     printf("\nSorted strings:\n");
    for(int i = 0; i < num; i++) 
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }
    free(arr);

    return 0;
    
      
  
}
