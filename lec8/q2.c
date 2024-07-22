#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    printf("Enter the value for c: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("Max value is: %d\n");
        } else {
            printf("Max value is: %d\n");
        }
    } else {
        if (b > c) {
            printf("Max value is: %d\n");
        } else {
            printf("Max value is: %d\n");
        }
    }

    return 0;
}

