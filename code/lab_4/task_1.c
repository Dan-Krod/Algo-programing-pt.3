#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5], i, sum = 0, count = 0;
    float avg;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        avg = (float)sum / count;
        printf("\nAverage of positive elements: %.2f\n", avg);
    } else {
        printf("\nThere are no positive elements in the array.\n");
    }

    system("pause");
    return 0;
}

