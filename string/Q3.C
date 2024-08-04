#include<stdio.h>
main()
{
    char name[20];

    printf("enter your name:=");
    scanf("%[^\n]",&name);

    for(int i=0 ; name[i] != '\0' ; i++){

        if(name[i]>='a' && name[i]<='z'){
            name[i]-=32;
        }
        else if(name[i]>='A' && name[i]<='Z'){
            name[i]+=32;
        }

    }
    printf("your name = %s",name);
    return 0;
}
