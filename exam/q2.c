#include <stdio.h>

main()
{
    int size;

    printf("enter array size:-");
    scanf("%d", &size);

    int a[size], sum=0, value;

    for (int i = 0; i < size; i++)
    {
        printf("enter array a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("enter value:-");
    scanf("%d", &value);

     for (int i = 0; i < size; i++){
      sum=a[i]+a[i+1];
      if (sum==value)
      {
        printf("two value is %d,%d",a[i],a[i+1]);
      }
      
    }

  

    return 0;
}

