#include<stdio.h>

int main(int argc, char const *argv[])
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

     int *ptr = a;

     for (int i = 0; i < size; i++)
    {
        printf("\nptr[%d]=",i);
        scanf("%d", &ptr[i]);
    }
   
   for (int i = 0; i < size; i++)
   {
        int cube=ptr[i] * ptr[i] * ptr[i] ;

        printf("%d ", cube);
   }
   
    return 0;
}






// Write a Program to find the square of each element of a given 1D array using a Pointer.
// For example,
// Input:
// Enter the array's size: 5
// Enter array's elements:
// a[0] = 2
// a[1] = 4
// a[2] = 1
// a[3] = 3
// a[4] = 7
// Output:
// Square of each element:
// 4, 16, 1, 9, 49