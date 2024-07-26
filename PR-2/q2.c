#include<stdio.h>

main(){
	
	char GRADE , score;

	GRADE = (score >=91 && score <=100) 
		?  'A' 
		: (score >=81 && score <=90) 
			?  'B'
			:	(score >=71 && score <=80) 
				?  'C'
				:	(score >=61 && score <=70) 
					?  'D'
					:	(score >=51 && score <=60) 
						?	 'E'
						:	'f';
					
					(GRADE=='f')
					? printf("You are Fail....")
					: printf("You are Pass\nGRADE = %c",GRADE);
	

	int grade;
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

	int score;
	char grade;
	printf("enter the value for score:");
	scanf("%d",&score);
	
	grade = (score >=91 && score <=100) 
		?  'A' 
		: (score >=81 && score <=90) 
			?  'B'
			:	(score >=71 && score <=80) 
				?  'C'
				:	(score >=61 && score <=70) 
					?  'D'
					:	(score >=51 && score <=60) 
						?	 'E'
						:	'f';
					
					(grade=='f')
					? printf("You are Fail....")
					: printf("You are Pass\nGRADE = %c",grade);
		
	}
