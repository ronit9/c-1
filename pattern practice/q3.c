#include <stdio.h>

main()
{
    int i, j;
    

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                
                printf("%d", i);
                
                
            }
            else
            {
                
                printf("%c", i+96);
                
                
                
            }
        }
        printf("\n");
    }

    return 0;
}

// a a a a a
// 2 2 2 2
// c c c
// 4 4 
// e
