#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num=11;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d " , num);
            num++;
            
        }
        printf("\n");
        
    }
    
    return 0;
}
