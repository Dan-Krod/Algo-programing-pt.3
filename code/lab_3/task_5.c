#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14159265358979323846; 

int main() {
    double x;
    int kol = 0;
    int validCount = 0;

    for (int i = 0; i < 12; i++) {
        do {
            puts("Input value in the range [-3.0 * PI, 3.0 * PI]");
            scanf("%lf", &x);

            if (x == 0) {
                printf("Exiting early due to input of 0.\n");
                return 0;
            }

            kol++;
        } while (x < -3.0 * PI || x > 3.0 * PI); 

        printf("sinh(%.2f) = %8.5f\n", x, sinh(x));
        printf("cosh(%.2f) = %8.5f\n", x, cosh(x));

        validCount++; 

        if (validCount >= 5) {
            break;
        }
    }

    printf("Total input values: %d\n", kol);
    
    system("pause");
    return 0;
}
