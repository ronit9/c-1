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

      for (int j = 0; j < i; j++)
      {
        if (a[i]+a[j]==value)
        {
          printf("two value is %d,%d",a[i],a[j]);
        }
      }
      
    }

  

    return 0;
}

