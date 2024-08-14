#include<stdio.h>

void print(name){
    printf("enter your name here :=\n");
    scanf("%s", &name);
}

int cube(int a){
      
    printf("cube of %d:\t%d",a ,a*a*a)
}


main(){

    print();
      int a;
      printf("enter the value of a :=\n");
    scanf("%d", &a);
    cube(a);
    return 0;
}