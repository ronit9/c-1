#include<stdio.h>

main()
{
    int size;
    int multiply=1;

    printf("enter size of array=\n\n");
    scanf("%d",&size);

    printf("size of array is %d\n\n",size);

    int arr[size]; // 2

    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1); 
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
         multiply=multiply*arr[i];
    }
    

    printf("multiply of array is %d\n\n",multiply);
    
}
