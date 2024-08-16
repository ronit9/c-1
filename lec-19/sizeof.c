#include <stdio.h>

main()
{
    int i;
    printf("size of int is %zu\n",sizeof(int));
    printf("size of char is %zu\n",sizeof(char));
    printf("size of float is %zu\n",sizeof(float));
    printf("size of string is %zu\n",sizeof(double));
    printf("size of  is %zu\n",sizeof(long int));
    printf("size of int is %zu\n",sizeof(long long int));

    int a[10];

    printf("size of array is %zu\n",sizeof(a));

    char b[20];
    printf("size of string is %zu\n",sizeof(b));
    return 0;
}
