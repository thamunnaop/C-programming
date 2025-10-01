#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum_even = 0, sum_odd = 0;
    int diff_even = 0, diff_odd = 0;
    int first_even = 1, first_odd = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {   // even index
            sum_even += arr[i];
            if (first_even) {
                diff_even = arr[i];
                first_even = 0;
            } else {
                diff_even -= arr[i];
            }
        } else {            // odd index
            sum_odd += arr[i];
            if (first_odd) {
                diff_odd = arr[i];
                first_odd = 0;
            } else {
                diff_odd -= arr[i];
            }
        }
    }

    printf("Sum of even indices = %d\n", sum_even);
    printf("Difference of even indices = %d\n", diff_even);
    printf("Sum of odd indices = %d\n", sum_odd);
    printf("Difference of odd indices = %d\n", diff_odd);

    return 0;
}