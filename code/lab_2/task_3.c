#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char letter;

    puts("Input the first letter of a European capital:");
    scanf(" %c", &letter);

    letter = tolower(letter);

    switch (letter) {
        case 'l':
            printf("London\n");
            break;
        case 'b':
            printf("Berlin\n");
            break;
        case 'p':
            printf("Paris\n");
            break;
        case 'm':
            printf("Madrid\n");
            break;
        case 'r':
            printf("Rome\n");
            break;
        case 'v':
            printf("Vienna\n");
            break;
        case 'h':
            printf("Helsinki\n");
            break;
        default:
            printf("Error: No capital city starts with the letter '%c'\n", letter);
    }

    system("pause");
    return 0;
}
