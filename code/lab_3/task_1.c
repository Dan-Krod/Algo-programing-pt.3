#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a = 0, sum = 0, n = 0; 
    while (a <= 36) { 
        n += 1; 
        a += 4; 
        sum += a; 
        printf("n = %d a = %d sum = %d\n", n, a, sum); 
    }

    printf("Last number - a = %d\n", a);
    printf("Amount of cycles - n = %d\n", n);
    printf("Row sum = %d\n", sum);

    system("pause");
    return 0;
}
