#include<stdio.h>
#include "function.c"

main()
{
    int row , col;

    printf("Enter the size for 2d array: ");
    scanf("%d %d", &row , &col); 

   int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]=",i , j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
        
    }

    printf("array element\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    } 

    printf("print of cube\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arraycube(&a[i][j]));
        }
        printf("\n");
        
    }
}




// Q.2 Cubes Generator
// Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
// Example:

// Input:
// Enter array's size: 2
// Enter array elements:
// a[0][0] = 3
// a[0][1] = 2
// a[1][0] = 5
// a[1][1] = 4
// Output:
// Cubes of all elements:
// 9 4
// 25 64
// Logic: 3 Marks
// Output: 2 Marks