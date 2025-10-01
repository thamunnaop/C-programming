#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5,6,7,8,9,10}; // Missing 3
    int n = 10;
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }
    for (int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
    }

    printf("Missing number: %d\n", xor1 ^ xor2);
    return 0;
}