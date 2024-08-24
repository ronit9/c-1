#include <stdio.h>
#include "function.c"

main()
{
    int choice, a, b;

   do
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %% ");
        printf("\nPress 0 for the exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
           a= inputint_a();
            b=inputint_b();
            int c= sum(a , b);
            printf("result:\t %d + %d = %d",a , b , c);
            break;
        case 2:
            a= inputint_a();
            b=inputint_b();
           int c =  subtraction(a, b);
            printf("result:\t %d - %d = %d",a , b , c);
            break;
        case 3:
            a= inputint_a();
            b=inputint_b();
            int c = multiplication(a, b);
            printf("result:\t %d * %d = %d",a , b , c);
            break;
        case 4:
            a= inputint_a();
            b=inputint_b();
           float c = division(a, b);
            printf("result:\t %d / %d = %d",a , b , c);
            break;
        case 5:
            a= inputint_a();
            b=inputint_b();
            float c =  modulus(a, b);
            printf("result:\t %d %% %d = %d",a , b , c);
            break;
        default:
            printf("enter valid choice");
        }
    }
    while (choice != 0);
    return 0;
}

// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
// using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
// is pressed.
// Example:
// Input/Output:
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit

// Enter your choice: 1
// Enter the first number: 5
// Enter the second number: 3
// Addition of 5 and 3 is 8
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit
// Enter your choice: 4
// Enter the first number: 10
// Enter the second number: 5
// Division of 10 and 5 is 2
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit
// Enter your choice: 0