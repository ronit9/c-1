#include<stdio.h>


void arrRev(int a[] , int size){

    

    for (int i =size-1 ; i >= 0+2; i--)
    {
        printf("\n%d",i);
    }

   
    
}

main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size];

    
    for(int i=0;i<size;i++)
    {
        printf("a[%d]:=",i);
        scanf("%d",&a[i]);
    }

    printf("\n\n");
    printf("Array elements are:\n");

    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    arrRev(a,size);
    
    return 0;
}
