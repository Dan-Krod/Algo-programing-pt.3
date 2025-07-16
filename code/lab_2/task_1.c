#include <stdio.h> 
#include <stdlib.h>

int main() {
    int n;

    // Введення числа
    puts("Input number:");
    scanf("%d", &n);

    // Перевірка на парність
    if (n % 2 == 0) 
        printf("Number %d is even\n", n);
    else 
        printf("Number %d is odd\n", n);

    // Перевірка: чи закінчується на 3
    if (n % 10 == 3) 
        printf("Number %d ends with 3\n", n);
    else 
        printf("Number %d does not end with 3\n", n);

    system("pause");
    return 0;
}