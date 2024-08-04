#include <stdio.h>

int main() {
    char str[20]; 
    int length = 0, count[128] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", &str);

    while (str[length] != '\0') {
        length++;
    }

    for (int i=0; i<length; i++) {
        if (str[i] >= 0 && str[i] < 128) {
            count[str[i]]++;
        }
    }

    for (int i=0; i<128; i++) {
        if (count[i] != 0) {
            printf("\n%c:=%d", (char)i, count[i]);
        }
    }

    return 0;
}