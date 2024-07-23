#include<stdio.h>

main(){
	
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
					
					(grade=='H')
					? printf("You are Fail....")
					: printf("You are Pass\nGRADE = %c",grade);
	
}