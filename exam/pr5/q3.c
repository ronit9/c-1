#include<stdio.h>

main(){
    int row , col , k;

    printf("Enter the array's row & column size: ");
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

    printf("\n");

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

             printf("%d ",a[j][i]);
        }
        printf("\n");
    }



   

    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++){

    //     }
    // }
    
}





// Input:
// Enter the array's row & column size: 3
// Enter array's elements:

// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// Output:
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6