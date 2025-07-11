#include <iostream>
#include <cctype> 

int num_upper(const char* s);

int main() {
    char str[100]; 

    std::cout << "Enter the string: ";
    std::cin.getline(str, 100); 

    int upper_count = num_upper(str);

    std::cout << "Number of uppercase letters: " << upper_count << std::endl;

    return 0;
}

int num_upper(const char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isupper(s[i])) {
            ++count;
        }
    }
    return count;
}
