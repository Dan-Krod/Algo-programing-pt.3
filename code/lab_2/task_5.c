#include <stdio.h> 
#include <stdlib.h> 

int main() {
    int a, b, c, min;

    puts("Input value a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
        min = a;
    else if (b < c)
        min = b;
    else
        min = c;

    printf("min = %d\n", min);

    if (min % 2 == 0)
        printf("The number %d is even.\n", min);
    else
        printf("The number %d is odd.\n", min);

    system("pause");
    return 0;
}

