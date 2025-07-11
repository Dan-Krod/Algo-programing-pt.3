#include <stdio.h>
#include <limits.h> 

int main(){
    short x1 = 30;
    unsigned short y1 = 35000;
    char z1 = -25;
    unsigned char v1 = 20;

    short x2 = SHRT_MAX; 
    unsigned short y2 = USHRT_MAX; 
    char z2 = CHAR_MAX;
    unsigned char v2 = UCHAR_MAX;

    short x3 = x2 + 1;  
    unsigned short y3 = y2 + 1;  
    char z3 = z2 + 1;  
    unsigned char v3 = v2 + 1;  

    printf("Task 3\n");
    printf("short x: %d %d %d\n", x1, x2, x3);
    printf("unsigned short y: %u %u %u\n", y1, y2, y3);
    printf("char z: %d %d %d\n", z1, z2, z3);
    printf("unsigned char v: %u %u %u\n\n", v1, v2, v3);
    
    return 0;

}