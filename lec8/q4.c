#include<stdio.h>

main(){
	
	int a , b , c , d;
	
	printf("enter value for a:");
	scanf("%d",&a);
	
		printf("enter value for b:");
	scanf("%d",&b);
	
		printf("enter value for c:");
	scanf("%d",&c);
	
		printf("enter value for d:");
	scanf("%d",&d);
	
	if(a > b){
		if(a > c){
			if(a > d){
				printf("max num is:%d");
			}
			else{
				printf("max num is:%d");
			}
		}
		else{
			if(c > d){
					printf("max num is:%d");
			}
			else{
					printf("max num is:%d");
			}
			
		}
	}
	else{
		if(b > c){
			if(b > d){
					printf("max num is:%d");
			}
			else{
					printf("max num is:%d");
			}
		}
		else{
			if(c>d){
					printf("max num is:%d");
			}
			else{
					printf("max num is:%d");
			}
		}
	}
}