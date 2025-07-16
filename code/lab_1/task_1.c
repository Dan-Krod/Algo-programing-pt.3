#include<stdio.h>
#include<conio.h> 
#include <stdlib.h> 
int main(){ 
    // Виведення повідомлення
    puts("My first program");

    //Name and Surname
    printf("Hada Daniel\n"); 

    char s ='D'; //визначення символу
    printf("Symbol %c =(%d)10S =(%#o) 8S ",s,s,s); 
    printf("=(%#x)16S size char=%d bait\n",s,sizeof(s)); 

    int a = 78; //визначення цілої змінної
    printf("a=%d size int=%d bait\n",a,sizeof(a)); 

    float b = 56.23; //визначення дійсної змінної
    printf("b=%f=%e size float=%d bait\n",b,b,sizeof(b));
    
    //short, long, double
    short c = 17000; 
    long d = 123581320;
    double e = 123.456;

    //New variables
    printf("c = %d size short = %d bait\n", c, sizeof(c));
    printf("d = %ld size long = %d bait\n", d, sizeof(d));
    printf("e = %lf size double = %d bait\n", e, sizeof(e));

    puts("\nPress any key and Enter...\n");
    getchar(); 
    return 0;
}

