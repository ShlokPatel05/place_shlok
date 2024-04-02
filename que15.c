//Program to find string is anagram or not.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int areAnagrams(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

   
    if (len1 != len2)
        return 0;

    
    int count1[256] = {0}, count2[256] = {0};

    
    for (int i = 0; i < len1; i++) {
        count1[str1[i]]++;
    }

    for (int i = 0; i < len2; i++) {
        count2[str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];

    // Input strings from the user
    printf("Enter the first string: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("Enter the second string: ");
    fgets(str2, MAX_SIZE, stdin);

    // Remove newline characters from the strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if strings are anagrams and print result
    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}