#include<stdio.h>

main()

{
    int choice , num1 , num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice:=");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nyou have selected Addition\n");
      
        printf("Result: %d + %d = %d",num1 , num2 , num1+num2);
        break;

    case 2:
        printf("\nyou have selected Subtraction\n");
        printf("Result: %d - %d = %d",num1 , num2 , num1-num2);
        break;
    case 3:
        printf("\nyou have selected Multiplication\n");
        printf("Result: %d * %d = %d",num1 , num2 , num1*num2);
        break;

    case 4:
        printf("\nyou have selected Division\n");
        printf("Result: %d / %d = %d",num1 , num2 , num1/num2);
        break;
    
    default:
        break;
    }
    
    return 0;
}
