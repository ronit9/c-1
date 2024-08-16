                // TNRN/TNRS USING UDF

#include <stdio.h>

void hello();

int cube();

void cheakdevide();




int main()
{

    hello();


    printf("CUBE USING UDF\n\n");
    int a , b;

    cube(a);

    printf("cheake divisible number USING UDF\n\n");
    cheakdevide(b);
    
    return 0;
}




void hello()
{
    printf("hello programmers..!!\n\n");
}

int cube(int a){

     printf("enter your nunber to get cube:=");
    scanf("%d", &a);

    int cube=a*a*a;

    printf("cube of %d is %d\n\n", a,  cube);

    return a*a*a;
}

void cheakdevide(b){

    printf("enter your nunber to divisible:=");
    scanf("%d", &b);
    if (b%3==0 && b%5==0)
    {
        printf("The given number is divisible by both 3 & 5.\n\n");
    }
    else if (b%3==0)
    {
        printf("The given number is divisible by 3.\n\n");
    }
     else if (b%5==0)
    {
        printf("The given number is divisible by 5.\n\n");
    }
    
    else
    {
        printf("The given number is not divisible by both 3 & 5.\n\n");
    }
    
}