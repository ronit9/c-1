#include<stdio.h>

int main(int argc, char const *argv[])
{

    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Before swapping:\n");
    printf("x: %d\n", *ptr1);
    printf("y: %d\n", *ptr2);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr2 - *ptr1;

    printf("After swapping:\n");
    printf("x: %d\n", *ptr1);
    printf("y: %d\n", *ptr2);
    return 0;
}



// Write a Program to swap two variables using Pointers.
// For example,
// Input:
// Enter the value of x: 5
// Enter the value of y: 3
// Output:
// Before swapping:
// x: 5
// y: 3
// After swapping:
// x: 3
// y: 5