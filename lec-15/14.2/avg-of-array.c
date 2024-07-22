#include<stdio.h>

main()
{
    int size;

    printf("enter size of array:");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter element a[%d]=",i);
        scanf("%d",&a[i]);
    }

    int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
    }

    printf("sum of array is %d\n",sum);

    printf("average of array is %d",sum/size);
    
    
    return 0;
}
