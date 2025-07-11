#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(void) {
    double k, g, res3;
    printf("\nTask 3:\nEnter k and g: ");
    scanf("%lf %lf", &k, &g);
    res3 = k * k + (g - k) / 2.3;      
    printf("Result 3: %8.3lf\n", res3);
    
    getchar();
    return 0;
}

