#include <stdio.h>

int main() {
    char str[20]; 
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", &str);
    
    
    while (str[length] != '\0') {
        length++;
    }

    int Palindrome = 1; 
    
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        if (str[start] != str[end]) {
            Palindrome = 0; 
            
        }
    }

    if (Palindrome=1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


// Q.1 Pelindrome Checker
// Develop a program that checks whether a given string is a palindrome or not without using string
// functions.

// Example:
// Input: Enter any string: nayan
// Output: The given string is a Palindrome.
