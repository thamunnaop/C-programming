#include <stdio.h>

#define N 3 // size of square matrix

void rotate90Clockwise(int mat[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int row = 0; row < N; row++) {
        int left = 0, right = N - 1;
        while (left < right) {
            int temp = mat[row][left];
            mat[row][left] = mat[row][right];
            mat[row][right] = temp;
            left++;
            right--;
        }
    }
}

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original matrix:\n");
    printMatrix(mat);

    rotate90Clockwise(mat);

    printf("\nMatrix after 90-degree clockwise rotation:\n");
    printMatrix(mat);

    return 0;
}