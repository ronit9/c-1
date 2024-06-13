#include<stdio.h>

int main(){
	
	int a , b , c , sum ;
	float avg;
	
	
	printf("enter the value for a :");
	scanf("%d", &a );
	
	printf("enter the value for b :");
	scanf("%d", &b );
	
	printf("enter the value for c :");
	scanf("%d", &c );
	
	sum = a+b+c;
	avg = (float)sum/3;
	
	
	printf("Avg is:%f",avg);
	
}