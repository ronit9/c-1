#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]", &name);

    int len=0;
    char *ptr = name;

  while (*ptr != '\0') {
        len++;
        ptr++;
    }
  
   
    printf("%d",len);
    
    return 0;
}


// Q.1 Length Finder
// Develop a program that finds the length of a string using a pointer.

// Example:
// Input: Enter any string: hello world
// Output: The length of a string is: 11
