#include <stdio.h>

#define N 4   // Matrix size 4x4

int main() {
    int mat[N][N];
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Fill top row
        for (int i = left; i <= right; i++) {
            mat[top][i] = num++;
        }
        top++;

        // Fill right column
        for (int i = top; i <= bottom; i++) {
            mat[i][right] = num++;
        }
        right--;

        // Fill bottom row
        for (int i = right; i >= left; i--) {
            mat[bottom][i] = num++;
        }
        bottom--;

        // Fill left column
        for (int i = bottom; i >= top; i--) {
            mat[i][left] = num++;
        }
        left++;
    }

    // Print the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%-4d", mat[i][j]); // aligned spacing
        }
        printf("\n");
    }

    return 0;
}