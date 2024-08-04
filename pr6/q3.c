#include <stdio.h>

int main() {
    char s[20];
    char temp;
    int start = 0;
    int end = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", &s);

    
    while (s[end] != '\0') {
        end++;
    }
    end--; 

    
    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    printf("Reversed String: %s\n", s);
    return 0;
}
