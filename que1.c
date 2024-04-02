//Write a code to reverse a number

#include <stdio.h>

int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }
    return reversedNumber;
}

int main() {
    int number, reversedNumber;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    reversedNumber = reverseNumber(number);
    
    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", reversedNumber);
    
    return 0;
}
