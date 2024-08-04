#include <stdio.h>

main()
{
    int size;

    printf("enter array size:-");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter array a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < i; j++)
        {
            if (a[i]==a[j])
            {
                printf("same elements are=%d\n", a[i]);
            }
            
        }
        
        
    }

    return 0;
}
