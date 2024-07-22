#include<stdio.h>

main()
{
    int size;

    printf("enter siz eof array:");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter element a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("length of array is %d",size);
    
}
