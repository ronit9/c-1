#include <stdio.h>

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = i; k > 1; k--){
            printf(" ");
        }
        for (int j = i; j <= 5; j++){
            printf("%d",j);
        }
         for (int j = 4; j >= i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}


//         5
//       4 5    4
//     3 4 5    4 3
//   2 3 4 5    4 3 2
// 1 2 3 4 5    4 3 2 1