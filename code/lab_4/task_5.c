#include <stdio.h>
#include <string.h>  
#include <stdlib.h>
#define K 100  

int main() {
    char movie[K], director[K], message[] = " is now available for sale.";  
    char fullMessage[2 * K]; 
    int movieLength, directorLength, totalLength;

    printf("Enter the movie title: ");
    fgets(movie, K, stdin); 
    movie[strcspn(movie, "\n")] = 0;  

    printf("Enter the director's surname: ");
    fgets(director, K, stdin);  
    director[strcspn(director, "\n")] = 0;  

    movieLength = strlen(movie);
    directorLength = strlen(director);
    
    printf("\nMovie title: %s (%d characters)\n", movie, movieLength);
    printf("Director's surname: %s (%d characters)\n", director, directorLength);

    strcpy(fullMessage, movie);  
    strcat(fullMessage, " by ");  
    strcat(fullMessage, director);  
    strcat(fullMessage, message); 

    totalLength = strlen(fullMessage);
    printf("\nFull message: %s\n", fullMessage);
    printf("Total length of the message: %d characters\n", totalLength);

    system("pause");
    return 0;
}



