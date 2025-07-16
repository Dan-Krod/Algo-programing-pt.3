#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 4;  
const int M = 5;  

int main() {
    float A[N][M];  
    float product = 1.0f;  
    int i, j;

    srand((unsigned)time(NULL));

    printf("Array A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            A[i][j] = (rand() % 10001 / 1000.0f) - 5.0f; 
            printf("%8.3f ", A[i][j]);  
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (A[i][j] != 0) {
                product *= *(*(A + i) + j);  
            }
        }
    }

    printf("\nProduct of non-zero elements = %.3f\n", product);

    return 0;
}
