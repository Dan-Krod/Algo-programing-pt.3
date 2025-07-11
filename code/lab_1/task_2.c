#include<stdio.h> 
#include <stdlib.h> 
int main(void){
    int a1 = 6, a2 = 20, b1, b2, b3;
    float f1 = 1.5, f2 = 3.5, r1, r2;

    a2 /= 5; 
    b1 = 5 * a1 + a2*a2; 
    b2 = a1 > a2; 
    b3 =-- b2; 
    r1 = f1 + 4 * f2; 
    r2 = (f1 >= f2) ? f1 - 2.5 : f2 + 5.2;
    printf("Task 3: a2 = %d, b1 = %d, b2 = %d, b3 = %d, r1 = %5.2f, r2 = %5.2f\n", a2, b1, b2, b3, r1, r2);
    return 0;
}