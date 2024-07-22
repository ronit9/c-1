#include <stdio.h>

main()
{
    int size;

    printf("enter array size:-");
    scanf("%d", &size);

    int a[size], same;

    for (int i = 0; i < size; i++)
    {
        printf("enter array a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {

        if (a[i] == a[i + 1])
        {
            same = a[i];
            printf("same elements are=%d\n", same);
        }
        
    }

    return 0;
}
