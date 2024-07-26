#include <stdio.h>

main()
{
    int i, j, n = 2;
    char alp = 'a';

    for (i = 1; i < 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                n++;
                printf("%d", n);
                
            }
            else
            {
                
                printf("%c", alp);
                alp++;
                
            }
        }
        printf("\n");
    }

    return 0;
}

// a a a a a
// 2 2 2 2
// b b b
// 4 4 
// e
