#include<stdio.h>

main(){
	
	int score;
	
	
	printf("enter your score:");
	scanf("%d",&score);
	
	if(score>90){
		printf("your grade is A");
	}
	
	else if(score > 80){
		printf("your grade is B");
	}
	
	else if(score > 70){
		printf("your grade is c");
	}
	
	else if(score > 60){
		printf("your grade is d");
	}
	
	else{
		printf("your score is f");
	}
}