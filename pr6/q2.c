#include <stdio.h>
#include <string.h>

int main() {
    char str[20]; 
    // int length = 0, count[128] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", &str);


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