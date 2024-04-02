// String question - Remove all characters from string except alphabets

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabetic(char *str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeNonAlphabetic(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}