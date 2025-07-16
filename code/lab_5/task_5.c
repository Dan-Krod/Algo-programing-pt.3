#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, k, N;

    printf("Input the size of the square matrix: ");
    scanf("%d", &N);

    int **matr = (int **)malloc(N * sizeof(int *));
    if (matr == NULL) {
        puts("Error! Memory allocation failed.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        matr[i] = (int *)malloc(N * sizeof(int));
        if (matr[i] == NULL) {
            puts("Error! Memory allocation failed.");
            return -1;
        }
    }

    puts("\nInput the elements of the matrix matr:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matr[i][j]);
        }
    }

    int **mas = (int **)malloc(N * sizeof(int *));
    if (mas == NULL) {
        puts("Error! Memory allocation failed.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        mas[i] = (int *)malloc(N * sizeof(int));
        if (mas[i] == NULL) {
            puts("Error! Memory allocation failed.");
            return -1;
        }
    }

    srand((unsigned)time(NULL));

    puts("\n\tMatrix mas: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mas[i][j] = rand() % 101 - 50; 
            printf("%8d", mas[i][j]);
        }
        printf("\n");
    }

    int **result = (int **)malloc(N * sizeof(int *));
    if (result == NULL) {
        puts("Error! Memory allocation failed.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        result[i] = (int *)malloc(N * sizeof(int));
        if (result[i] == NULL) {
            puts("Error! Memory allocation failed.");
            return -1;
        }
    }

    puts("\nCalculating the product of matrices:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            result[i][j] = 0; 
            for (k = 0; k < N; k++) {
                result[i][j] += matr[i][k] * mas[k][j]; 
            }
        }
    }

    puts("\nResulting matrix (product of matr and mas):");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%8d", result[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        free(matr[i]); 
        free(mas[i]);   
        free(result[i]); 
    }
    free(matr); 
    free(mas);  
    free(result); 

    return 0;
}
