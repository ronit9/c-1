#include<stdio.h>


int arraySum(int a[] , int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
    }
    return sum;
    
}

int main(int argc, char const *argv[])
{
    int size;

    printf("enter array size:-");
    scanf("%d", &size);


    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter array a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("array a[%d]=%d\n", i, a[i]);
    }

    printf("sum of array is:=%d", arraySum( a , size ));
    
    
    
    return 0;
}
