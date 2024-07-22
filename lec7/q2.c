#include<stdio.h>

main(){
	
	int a;
	
	printf("enter the value for a:");
	scanf("%d", &a);
	
	if(0>a){
		printf("This number is Negative:");
	}
	
	else if(0==a){
		printf("This number is Neutral:");
		
	}
	
	else{
		printf("This number is Positive:");
	}
}