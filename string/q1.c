#include<stdio.h>

main()
{
    char name[20];

    printf("enter your name:=\t");
    scanf("%[^\n]", name);

    printf("\nname=%s\t", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i]>='a' && name[i]<='z')
        {
            name[i]-=32;
        }

        
        
    }
    printf("\ncapital=%s\t", name);
    return 0;
}
