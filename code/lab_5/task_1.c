#include <stdio.h>

int main() {
    const int rows = 5;
    const int cols = 3;
    int arr[rows][cols];
    int i, j;

    printf("Enter the elements of the array %dx%d:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nNumber of odd elements in each column:\n");
    for (j = 0; j < cols; j++) {
        int oddCount = 0;
        for (i = 0; i < rows; i++) {
            if (arr[i][j] % 2 != 0) {
                oddCount++;
            }
        }
        printf("Column %d: %d odd elements\n", j + 1, oddCount);
    }

    return 0;
}
