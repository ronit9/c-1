#include<stdio.h>

main()
{
    int row , col;

    printf("enter row & col :");
    scanf("%d %d", &row, &col);

    int a[row][col];

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            printf("a[%d][%d]=",i , j);
            scanf("%d",&a[i][j]);
        }
         printf("\n");
    }

    

    printf("\n");
    printf("elements of array\n\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
         printf("%d",a[i][j]);
        }
         printf("\n");
        
    }

    printf("\n");
    printf("printing  diagonal element\n\n");
     for (int i = 0; i < row; i++){
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

    printf("\n");
    printf("printing cross diagonal element\n\n");
      for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
         if (i==j || i+j==row-1)
         {
            printf("%d ",a[i][j]);
         }
         else{
            printf("  ");
         }
         
        }
         printf("\n");
        
    }

    printf("\n");
    printf("printing sum of boundry element element\n\n");

    int rowsum=0;

        for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){

            if (i == 0 ||  i == row - 1)
            {
              rowsum += a[i][j];
            }
        }
    }

    printf("sum of row boudry elements=%d\n\n",rowsum);

    int colsum=0;

        for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){

            if (j == 0 ||  j == col - 1)
            {
              colsum += a[i][j];
            }
        }
    }

    printf("sum of col boundry elemenets=%d",colsum);
    
    int totalSum = rowsum + colsum;
    printf("Sum of the boundary elements  is: %d\n", totalSum);

    printf("\n");
    printf("printing sum of anti diagonal element element\n\n");

    int antisum=0;

        for (int  i = 0; i < row; i++){
            for (int j = 0; j < col; j++){

                if (i+j==row-1){
                    antisum += a[i][j];
                }
            }
        }

    printf("sum of anti diagonal elements=%d",antisum);




        
    

    return 0;
}
