#include<stdio.h>

main(){
	
	float ans,a=100, p ,r ,n;
	
	printf("enter the value of p:-");
	scanf("%f", &p);
	printf("enter the value of r:-");
	scanf("%f", &r);
	printf("enter the value of n:-");
	scanf("%f", &n);
	
	ans=(p * r * n) / 100;
	
	printf("%f", ans);
	
	
}