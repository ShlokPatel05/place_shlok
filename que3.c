// Check Whether or Not the Number is a Palindrome

#include <stdio.h>

int isPalindrome(int number) {
    int reversedNumber = 0, originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }

    if (originalNumber == reversedNumber)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
