#include<stdio.h>

 main()
{
    int row , col;

    printf("enter number of row and col:-");
    scanf("%d  %d",&row , &col);


    int a[row][col];

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            printf("a[%d][%d]=",i , j);
            scanf("%d",&a[i][j]);
        }
         printf("\n");

    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("sum of selected row");
    int rownum , rowsum=0;

    printf("enter row number:-");
    scanf("%d",&rownum);

    printf("\n");
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
           if (i==rownum){
             printf("a[%d][%d]=%d", i , j , a[i][j]);
        
            rowsum+=a[i][j];
            printf("\n");
           }
           
       }
    }
    
    printf("\n");

    printf("sum of your row is =%d",rowsum);

    printf("\n");

    printf("\nsum of selected col");

    int colsum=0 , colnum=0;

    printf("\nenter col number:-");
    scanf("%d",&colnum);

   


    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
           if (j==colnum){
             printf("a[%d][%d]=%d", i , j , a[i][j]);
        
            colsum+=a[i][j];
            printf("\n");
           }
       }
    }

    printf("sum of your col is =%d",colsum);
    
    return 0;
}








// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D
// array.
// Example:
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
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10
// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11