#include <stdio.h>

#define N 3 // size of square matrix

void rotate90AntiClockwise(int mat[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Step 2: Reverse each column
    for (int col = 0; col < N; col++) {
        int top = 0, bottom = N - 1;
        while (top < bottom) {
            int temp = mat[top][col];
            mat[top][col] = mat[bottom][col];
            mat[bottom][col] = temp;
            top++;
            bottom--;
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

    rotate90AntiClockwise(mat);

    printf("\nMatrix after 90-degree anti-clockwise rotation:\n");
    printMatrix(mat);

    return 0;
}