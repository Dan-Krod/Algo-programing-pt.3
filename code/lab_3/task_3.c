#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int F;

    for (a = 0; a <= 40; a += 4) {
        for (b = 6; b <= 20; b += 2) {
            F = (a * a) - (b * b);
            printf("a = %2d, b = %2d, F = %4d\n", a, b, F);
        }
        printf("\n"); 
    }

    system("pause");
    return 0;
}
