#include <stdio.h>

int main() {
    int num = 11;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}



// 11
// 12 13
// 14 15 16
// 17 18 19 20