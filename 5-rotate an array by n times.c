#include <stdio.h>
//left rotate
// Function to rotate array to the left by n positions
void rotateLeft(int arr[], int size, int n) {
    n = n % size; // In case n > size

    // Temporary array to store first n elements
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = n; i < size; i++) {
        arr[i - n] = arr[i];
    }

    // Copy the temp elements to the end
    for (int i = 0; i < n; i++) {
        arr[size - n + i] = temp[i];
    }
}



int main() {
    int arr[100], size, n;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &n);

    rotateLeft(arr, size, n);

    printf("Array after rotating left by %d positions:\n", n);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }



    

    return 0;
}

