#include<stdio.h>

main(){
	
	char grade;
	
	printf("enter your grade:");
	scanf("%c",&grade);
	
	switch(grade){
		case 'a':
			printf("Excellent work!");
			break;
			
	    case 'b':
			printf("Well done");
			break;
	
		case 'c':
			printf("Good job");
			break;	
	
		case 'd':
			printf("You passed, but you could do better");
			break;  
			
		case 'f':
			printf("Sorry, you faile");
			break;
			
	
			
			default:
			printf("enter the valid grade");
			break;
	}
		
	}
