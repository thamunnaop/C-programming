
#include<stdio.h>

int sum_of_diff_odd_indices(int *arr,int size)
{
    int sum = 0;
    for (int i = 1; i + 2 < size; i += 2) {
        sum += arr[i] - arr[i+2];
    }
    return sum;
}

int main()
{
    int size, res;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Array: ");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }

    res = sum_of_diff_odd_indices(arr,size);
    printf("\nSum of differences of odd indices = %d\n",res);

    return 0;
}