#include<stdio.h>

main()
{
    int i , j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++)
        {
            j++;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
