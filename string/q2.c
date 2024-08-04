#include<stdio.h>

main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%[^\n]", &name);

    printf("Your name is %s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i]>='A' && name[i]<='Z'){
            name[i]+=32;
        }
         
    }

    printf("\nYour name is %s", name);
    
    return 0;
}
