#include <stdio.h>
int main(void) {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d", matrix[i][j]);
            if (i < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}