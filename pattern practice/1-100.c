

#include <stdio.h>

int main()
{

    int num = 1;

    for (int i = 0; i < 10; i++)
    { // 0<5

        for (int k = 0; k < i; k++)
        {
            printf("   ");
        }

        int current = num; // 1
        for (int j = i; j < 10; j++)
        {                            // 2<10
            printf("%2d ", current); // 4
            current += j + 1;      // 4+2+1=7
        }
        for (int j = i; j < 9; j++)
        {               //0<9
            printf("%2d ", current); // 1
            current += j + 2;      // 1+0+2=3
        }

        num += i + 2; // 1+0+2=3

        printf("\n");
    }

    
   

    return 0;
}
