#include<stdio.h>

int cubOfArray(int *ptr){
    return *ptr * *ptr; 
}
int main(int argc, char const *argv[])
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array's elements:\n");

    for (int i = 0; i < size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        
    }

    printf("\n\n");
    
    printf("Array's elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Cub of array is: %d\n", cubOfArray(&a[i]));
    }
    
    
    return 0;
}
