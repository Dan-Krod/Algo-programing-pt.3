#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    double *ptr;

    srand((unsigned)time(NULL));

    printf("Input size of array: ");
    scanf("%d", &n);

    ptr = (double*)malloc(n * sizeof(double));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nArray elements:\n");
    for (int i = 0; i < n; i++) {
        ptr[i] = (double)rand() / RAND_MAX * 32.0; 
        printf("%.2f ", ptr[i]);
    }

    free(ptr);

    return 0;
}

