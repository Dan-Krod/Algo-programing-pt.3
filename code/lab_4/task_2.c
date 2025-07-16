#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int n = 16; 
    int a[n], i, evenCount = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < n; i++) {
        a[i] = rand() % 41 - 20; 
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) { 
            evenCount++;
        }
    }

    printf("\nTotal even numbers in the array: %d\n", evenCount);

    system("pause"); 
    return 0;
}

