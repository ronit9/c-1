#include <stdio.h>

int main() {
    char ch ;
    

    printf("enter your cahr to get ascii value:= ");
    scanf("%c", &ch);

    printf("The ASCII value is\t%d\n ",(int) ch);

    printf("\n");


    int a;

    printf("enter your ascii value to get  char:= ");
    scanf("%d", &a);

    if (a<=128)
    {
        printf("The char is \t%c\n ",(char) a);
    }
    else{
        printf("please enter valid value");
    } 

   


    return 0;
}

