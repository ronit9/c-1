#include<stdio.h>

main(){
	int a , b , c , d , e;
	
	printf("enter the value for a:");
	scanf("%d", &a);
	
	printf("enter the value for b:");
	scanf("%d", &b);
	
	printf("enter the value for c:");
	scanf("%d", &c);
	
	printf("enter the value for d:");
	scanf("%d", &d);
	
	printf("enter the value for e:");
	scanf("%d", &e);
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
			else{
				if(d > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
			else{
				if(d > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
		}
		
	}
	else{
		if(b > c){
			if(b > d){
				if(b > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
			else{
				if(d > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
			else{
				if(d > e){
					printf("max value is:%d");
				}
				else{
					printf("max value is:%d");
				}
			}
		}
		
	}
}