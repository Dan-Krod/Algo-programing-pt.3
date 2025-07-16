#include <stdio.h>
#include <string.h>

int main() {
    char* info[] = {
        "Lviv Polytechnic National University",
        "Faculty of Computer Technologies",
        "Internet of Things"
    };

    printf("University: %s\n", info[0]);
    printf("Faculty: %s\n", info[1]);
    printf("Specialty: %s\n", info[2]);

    printf("\nSize of the array of pointers = %zu bytes\n", sizeof(info));

    printf("Size of pointer to string 1 = %zu bytes\n", sizeof(info[0]));
    printf("Size of pointer to string 2 = %zu bytes\n", sizeof(info[1]));
    printf("Size of pointer to string 3 = %zu bytes\n", sizeof(info[2]));

    int count_e = 0;
    for (int i = 0; i < strlen(info[2]); i++) {
        if (info[2][i] == 'e') {
            count_e++;
        }
    }

    printf("\nNumber of 'e' characters in the specialty string = %d\n", count_e);

    return 0;
}
