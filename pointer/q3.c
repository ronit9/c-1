#include<stdio.h>

int main(int argc, char const *argv[])
{

    
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    int *ptr = a;

    printf(" array elements using pointer:\n");

    for (int i = 0; i < size; i++)
    {
        printf("ptr[%d]:",i);
        scanf("%d", &ptr[i]);
    }

    int *ptr2 = ptr;

    printf("\nsquare of elmenet\n");
    for (int i = *ptr2 ; i >= *ptr; i--)
    {
        int square = ptr[i] * ptr[i];

        printf("square[%d]=%d ", i, square);
        printf("\n");
    }

    
    return 0;
}





// Write a Program to find the square of each elements of a 1D array and print in reverse
// order using a Chain of Pointers.
// For example,
// Input:
// Enter the array's size: 5
// Enter array elements:
// a[0] = 5
// a[1] = 9
// a[2] = 4
// a[3] = 7
// a[4] = 3
// Output:
// Reversed array elements:
// 9, 49, 16, 81, 25