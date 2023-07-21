#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int largestRectangleArea(int heights[], int size) {
    int stack[size];
    int top = -1;
    int maxArea = 0;

    for (int i = 0; i <= size; i++) {
        int height = (i == size) ? 0 : heights[i];

        while (top != -1 && height < heights[stack[top]]) {
            int h = heights[stack[top--]];
            int w = (top == -1) ? i : (i - stack[top] - 1);
            maxArea = MAX(maxArea, h * w);
        }

        stack[++top] = i;
    }

    return maxArea;
}

int maximalRectangle(char matrix[4][5], int rows, int cols) {
    if (rows == 0 || cols == 0) {
        return 0;
    }

    int heights[cols];
    int maxArea = 0;

    for (int i = 0; i < cols; i++) {
        heights[i] = 0;
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (matrix[row][col] == '1') {
                heights[col]++;
            } else {
                heights[col] = 0;
            }
        }
        maxArea = MAX(maxArea, largestRectangleArea(heights, cols));
    }

    return maxArea;
}

int main() {
    char matrix[4][5] = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    int rows = 4;
    int cols = 5;

    printf("%d\n", maximalRectangle(matrix, rows, cols));

    return 0;
}
