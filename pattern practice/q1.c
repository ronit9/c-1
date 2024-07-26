#include<stdio.h>

main()
{
    int i , j,n=11;

    for (i = 1; i <= 5; i++){ // 1<=5
        for (j = 1; j <= i; j++) // 1<=1
        {
            printf("%d ",n);
            n+=11;
        }
        printf("\n");
    }
    return 0;
}

// 11
// 22 33
// 44 55 66
// 77 88 99 110
// 121 132 143 154 165
