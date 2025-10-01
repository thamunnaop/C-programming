/*arr[1,2,3,4,5,6]
target 10
arr[3]+arr[5]=10 ie, 4+6=10

wwrite the code to achieve this*/
#include<stdio.h>
int main()
{
    int num;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the target: ");
    scanf("%d",&num);

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)//taking j=i+1 avoid repeating samme pair checking again
        {
            if(arr[i]+arr[j]==num)
            {
                
                printf("%d+%d=%d\n",arr[i],arr[j],num);
            
                
            }

        }
    }
    
}

