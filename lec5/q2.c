#include<stdio.h>

main(){
	
	int a, b , c;
	
	printf("enter value for a:");
	scanf("%d", &a);
	printf("enter value for b:");
	scanf("%d", &b);

	
	c=a; // c = 10
	a=b; // a = 20
	b=c; // b = 10
	
	printf("%d",a);
	printf("%d",b);
	
}