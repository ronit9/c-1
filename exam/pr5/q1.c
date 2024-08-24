#include<stdio.h>

main()
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
    for (int i = 0; i < size; i++){
        if (a[i]<=0)
        {
            printf("Negative elements from an Array: %d\n", a[i]);
        }
        
        
    }
    



    return 0;
}





// Input:
// Enter the array's size: 5
// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5
// Output:
// Negative elements from an Array: -4, -3, -5