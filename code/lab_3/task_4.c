#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, sum = 0, count = 0;
    
    puts("Input up to 15 integer values (enter 0 to stop):");

    for (int i = 0; i < 15; i++) {
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        if (a >= 48 && a <= 122) {
            count++;
            sum += a; 
            printf("Character for %d is: %c\n", a, (char)a); 
        }
    }

    printf("Total numbers within range 48 to 122: %d\n", count);
    printf("Sum of numbers within range: %d\n", sum);

    system("pause");
    return 0;
}
