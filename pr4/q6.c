#include <stdio.h>

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = 5; k > i; k--)
        {
            printf("    ");
        }
        
        for (int j =i ; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
        
    }

    return 0;
}
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1