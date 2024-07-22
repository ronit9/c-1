#include<stdio.h>

main(){
	
	int a;
	
	printf("enter the value for a:");
	scanf("%d",&a);
	

	
	if(a%4==0){
		printf(" is a leap year");		
	}
	else{
		printf("not a leap year");	
	}
}