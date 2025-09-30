
//program to find maximum difference b/w a sorted array
#include<stdio.h>
void sort_arr(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array eleemnts: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_arr(arr,size);
    printf("the sorted array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int count[size];
    int max=0;
    for(int i=0;i<size;i++)
    {
     count[i]=arr[i+1]-arr[i];
    }
    max=count[0];
    for(int i=0;i<size;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
        }
    }
    printf("the maximum difference between the array elelment is %d\n",max);
    return 0;

}