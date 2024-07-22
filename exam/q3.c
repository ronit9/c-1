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

    


    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
         printf("%d",a[i][j]);
        }
         printf("\n");
        
    }

    //  for (int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++)
    //     {
    //      if (i==j)
    //      {
    //         printf("%d ",a[i][j]);
    //      }
    //      else{
    //         printf("  ");
    //      }
         
    //     }
    //      printf("\n");
        
    // }

    printf("\n");

    //   for (int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++)
    //     {
    //      if (i==j || i+j==row-1)
    //      {
    //         printf("%d ",a[i][j]);
    //      }
    //      else{
    //         printf("  ");
    //      }
         
    //     }
    //      printf("\n");
        
    // }

    int rowSum = 0, colSum = 0;

    
    for (int i = 0; i < row; i++) { // i=0 
        rowSum += a[i][0] + a[i][col - 1];//sum= a[1][0] + a[0][2]= 3
        
    }
    printf("sum of row:=%d\n",rowSum);

    
    for (int j = 0; j < col; j++) {
        colSum += a[0][j] + a[row - 1][j];
        
    }
    printf("sum of col:=%d\n",colSum);

    int totalSum = rowSum + colSum;

    printf("Sum of the boundary elements  is: %d\n", totalSum);



    // int rowmult = 1, colmult = 1;

    
    // for (int i = 0; i < row; i++) { // i=0 
    //     rowSum *= a[i][1] * a[i][col - 1];//sum= a[1][0] + a[0][2]= 3
        
    // }
    // printf("sum of row:=%d\n",rowmult);

    
    // for (int j = 0; j < col; j++) {
    //     colSum *= a[1][j] * a[row - 1][j];
        
    // }
    // printf("sum of col:=%d\n",colmult);

    // int totalmult = rowmult * colmult; 

    // printf("Sum of the boundary elements  is: %d\n", totalmult);


        
    

    return 0;
}
