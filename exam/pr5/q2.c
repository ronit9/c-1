
#include<stdio.h>

main()
{
    int row , col;

    printf("Enter the array's row and col: ");
    scanf("%d %d",&row,&col);

    int a[row][col];

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            printf("a[%d][%d]=",i , j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];
    
    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            if (a[i][j]> max)
            {
                max = a[i][j];
                printf("%d",max);
            }
            
            
        }
        printf("\n");
    }
    

    
    return 0;
}




// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6
// Output:
// The largest element is: 9