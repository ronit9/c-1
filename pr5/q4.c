#include<stdio.h>

main()
{
    int i , j , k;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i; k++){
            printf("  ");
        }
        for (int j = 5; j >= i; j--){
            if(j%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}




// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1