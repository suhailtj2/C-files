#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int* spiralOrder(int** matrix, int numRows, int numCols, int* returnSize) {
    *returnSize = numRows * numCols;
    int* result = (int*)malloc(*returnSize * sizeof(int));
    int top = 0, bottom = numRows - 1, left = 0, right = numCols - 1;
    int k = 0;
    while (k < *returnSize) {
        for (int col = left; col <= right && k < *returnSize; col++) {
            result[k++] = matrix[top][col];
        }
        top++;
        for (int row = top; row <= bottom && k < *returnSize; row++) {
            result[k++] = matrix[row][right];
        }
        right--;
        for (int col = right; col >= left && k < *returnSize; col--) {
            result[k++] = matrix[bottom][col];
        }
        bottom--;
        for (int row = bottom; row >= top && k < *returnSize; row--) {
            result[k++] = matrix[row][left];
        }
        left++;
    }
    return result;
}
int main() {
    int numRows = 3;
    int numCols = 3;
    int returnSize;
    int** matrix = (int*)malloc(numRows * sizeof(int));
    for (int i = 0; i < numRows; i++) {
        matrix[i] = (int*)malloc(numCols * sizeof(int));
    }
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
    matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
    int* result = spiralOrder(matrix, numRows, numCols, &returnSize);
    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
    for (int i = 0; i < numRows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(result);
    return 0;
}
