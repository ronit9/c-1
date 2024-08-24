#include <stdio.h>

int main()
{
    char a[20];
    int len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i<len; i++)
    {

        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }

    char rev[20];
    int n = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = a[i];
    }

    int com = 0;

    for (int i = 0; i < len; i++)
    {
        if (a[i] == rev[i])
        {
            com = 1;
        }
        else
        {
            com = 0;
            break;
        }
    }

    if (com)
    {
        printf("%s is Palindrom",a);
    }
    else
    {
        printf("%s is not Palindrom",a);
    }

    // for (int start = 0, end = length - 1; start < end; start++, end--) {
    //     if (str[start] != str[end]) {
    //         Palindrome = 0;

    //     }
    // }

    // if (Palindrome=1) {
    //     printf("The string is a palindrome.\n");
    // } else {
    //     printf("The string is not a palindrome.\n");
    // }

    return 0;
}

// Q.1 Pelindrome Checker
// Develop a program that checks whether a given string is a palindrome or not without using string
// functions.

// Example:
// Input: Enter any string: nayan
// Output: The given string is a Palindrome.
