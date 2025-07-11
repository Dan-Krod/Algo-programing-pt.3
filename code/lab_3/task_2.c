#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;          
    float number = 0;       
    float sum = 0;        
    int kol;                
    const int MAX_ITER = 100; 

    printf("Input number of numbers (up to %d): ", MAX_ITER);
    if (scanf("%d", &kol) != 1 || kol <= 0 || kol > MAX_ITER) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    for (int i = 0; i < kol; i++) {
        printf("Input a number #%d: ", i+1);

        if (scanf("%f", &number) != 1) {
            printf("Invalid input. Exiting the loop.\n");
            break;
        }

        if (number > 100) {
            printf("Number is greater than 100. Exiting the loop.\n");
            break;
        }

        if (number > 5) {
            sum += number;
            count++;
        }
    }

    printf("Count of numbers greater than 5: %d\n", count);
    printf("Sum of numbers greater than 5: %.2f\n", sum);

    system("pause");
    return 0;
}

