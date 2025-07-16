#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

#define N 10  

int main() {
    float dig[N];
    int i, j, mm;
    float min, tmp;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        dig[i] = ((float)rand() / RAND_MAX) * 101.0 - 50.5;  
    }

    printf("Old array:\n");
    for (i = 0; i < N; i++) {
        printf("%7.2f ", dig[i]);
    }
    printf("\n");

    for (i = N - 1; i >= 1; i--) {
        min = dig[0];
        mm = 0;
        for (j = 1; j <= i; j++) {
            if (dig[j] < min) {  
                min = dig[j];
                mm = j;
            }
        }

        tmp = dig[i];
        dig[i] = min;
        dig[mm] = tmp;
    }

    printf("\nNew array (sorted in descending order):\n");
    for (i = 0; i < N; i++) {
        printf("%7.2f ", dig[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
