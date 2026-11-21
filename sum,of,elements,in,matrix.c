#include <stdio.h>
int main(void) {
    int rows, cols;
    long long sum = 0;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 0;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
            sum += matrix[i][j];
        }
    }

    printf("%lld\n", sum);
    return 0;
}