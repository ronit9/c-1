#include <stdio.h>

main()
{
    int size1, size2, size;

    printf("enter size of 1st array:");
    scanf("%d", &size1);

    int a[size1], b[size1];

    for (int i = 0; i < size1; i++)
    {
        printf("enter element a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < size1; i++)
    {
        printf("enter element b[%d]=", i);
        scanf("%d", &b[i]);
    }

    int  sum[size1];

    for (int i=0; i<size1;i++)
    {

        sum[i] = a[i] + b[i];
       
    }

    printf("\n");

    for (int i = 0; i < size1; i++)
    {
        printf("%d ", sum[i]);
    }

    

    return 0;
}
