#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SIZE = 7;

    int arr[SIZE];

    arr[0] = -2000;

    printf("Enter 6 elements of the array:\n");
    for (int i = 1; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int* px = arr;

    int max_negative = -1; 
    int max_negative_index = -1;

    for (int i = 0; i < SIZE; i++) {
        if (*(px + i) < 0) {  
            if (max_negative == -1 || *(px + i) > max_negative) {
                max_negative = *(px + i);  
                max_negative_index = i;  
            }
        }
    }

    printf("Array elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    if (max_negative_index != -1) {
        printf("Index of the maximum negative element: %d\n", max_negative_index);
        printf("Maximum negative element: %d\n", max_negative);
    } else {
        printf("No negative elements found.\n");
    }

    system("pause");
    return 0;
}