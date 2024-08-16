#include<stdio.h>

int arraysize();

int arrayvalue();
int SumOfArray();
main()
{
    int size;

    arraysize(size);

    int a[size];

    arrayvalue(size,a);
    
    return 0;
}

int arraysize(int size){
    printf("enter your size of array:=");
    scanf("%d",&size);
}

int arrayvalue(int a[] , int size){
    for (int i = 0; i < size; i++)
    {
        printf("enter element:=%d",i+1);
        scanf("%d",&a[i]);
    }
   
    
}

int SumOfArray(){

    int size,a;


}
