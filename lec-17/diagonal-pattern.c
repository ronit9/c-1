#include<stdio.h>

main()
{
    int row , col;

    printf("enter row & col :");
    scanf("%d %d", &row, &col);

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

     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }

    printf("\n\ndiagonal element :\n\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
      
    }
   
}
