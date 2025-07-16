#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    puts("Input an integer:");
    scanf("%d", &n);

    if (n > 50) {
        if (n % 4 == 0) {
            printf("Number %d is greater than 50 and divisible by 4\n", n);
        } else {
            printf("Number %d is greater than 50 but not divisible by 4\n", n);
        }
    } else {
        if (n % 3 == 0) {
            printf("Number %d is less than or equal to 50 and divisible by 3\n", n);
        } else {
            printf("Number %d is less than or equal to 50 and not divisible by 3\n", n);
        }
    }

    system("pause");
    return 0;
}
