#include<stdio.h>

 main()
{   
    int row, col, sum=0;

    printf("enter row:");
    scanf("%d",&row);

    printf("enter col:");
    scanf("%d",&col);

    int  a[row][col];

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
                sum +=a[i][j];
            }
           
        }
        printf("sum of all array is:%d",sum);

       float avg=(float)sum/(row*col);
       printf("\navg is %f",avg);
   
}
