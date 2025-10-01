//my own method
#include<stdio.h>
int main()
{
    //declare variables
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    //declare array
    int arr [size];
    int count[2];
    //enter array elements
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //declafe variables
    int target,flag;
    printf("enter the target: ");
    scanf("%d",&target);
    //main logic-check which two elements sum to give target element
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                //storing the elements in an other array
              count[0]=i;
              count[1]=j;
              flag=1;
              break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    printf("output[%d %d]\n",count[0],count[1]);
    return 0;
}

//or

//by dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int size, int target) {
    int *result = (int*)malloc(2 * sizeof(int)); // dynamically allocate space for 2 indices
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // start from i+1 to avoid repeating pairs
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // return immediately when solution is found
            }
        }
    }
    return NULL; // in case no solution is found (though problem says exactly one exists)
}

int main() {
    int size, target;
    printf("Enter the size: ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int)); // dynamically allocate array
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    int *indices = twoSum(arr, size, target);

    if (indices != NULL) {
        printf("Output: [%d, %d]\n", indices[0], indices[1]);
        free(indices); // free allocated memory for result
    } else {
        printf("No solution found.\n");
    }

    free(arr); // free allocated memory for array
    return 0;
}