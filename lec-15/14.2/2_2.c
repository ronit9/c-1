#include <stdio.h>

main()
{
    int a[5] = {2, 3, 5, 1, 6};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j]){
                temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
                
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
