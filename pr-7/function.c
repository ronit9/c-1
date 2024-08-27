#include<stdio.h>


int sum(int a , int b){
    return a + b ; 
}
int subtraction (int a , int b){
    return a - b ; 
}
float division(int a , int b){
    return a / b ; 
}
int multiplication(int a , int b){
    return a * b ; 
}
int modulus(int a , int b){
    return a % b ; 
}

int inputint_a(){
    int a;
    printf("enter a:");
    scanf("%d",&a);

  return a;
}
int inputint_b(){
    int b;
    printf("enter b:");
    scanf("%d",&b);

  return b;
}
