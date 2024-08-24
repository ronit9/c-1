#include <stdio.h>
#include <string.h>

int main() {
    char str[20]; 
    // int length = 0, count[128] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", &str);

    // while (str[length] != '\0') {
    //     length++;
    // }

    // for (int i=0; i<length; i++) {
    //     if (str[i] >= 0 && str[i] < 128) {
    //         count[str[i]]++;
    //     }
    // }

    // for (int i=0; i<128; i++) {
    //     if (count[i] != 0) {
    //         printf("\n%c:=%d", (char)i, count[i]);
    //     }
    // }

    // printf("\n");

    for (int i=0; i<strlen(str); i++) {

         int f=1;

        for (int j = i+1; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                f++;
                str[j]='\0';
            }
            
        }

        if (str[i]!= '\0')
        {
            printf("%c:=%d\n", str[i], f);
        }
        
        
    }

    return 0;
}