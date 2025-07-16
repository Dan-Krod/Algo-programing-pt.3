#include <stdio.h>
#include <math.h>

int main(void) {
    // Завдання 3: L = 2πr
    float r, L;
    const float PI = 3.141592f;
    
    // Виведення запиту до користувача на введення радіуса
    printf("\nTask 3: Input the radius of the circle (r): ");
    scanf("%f", &r);  // Зчитуємо значення радіуса
    
    // Обчислюємо довжину кола
    L = 2 * PI * r;
    
    // Виведення результату
    printf("Circumference of the circle L = %f\n", L);
    
    return 0;
}
