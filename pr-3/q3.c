
#include<stdio.h>

	main(){
		int num , first_digit , last_digit , sum ;
		
		printf("enter the number:");
		scanf("%d",&num);
		
		last_digit = num % 10;
		
		for( first_digit = num ; first_digit >= 10 ; first_digit /= 10){
			
		}
		
		sum = first_digit + last_digit;
		
		printf("%d",sum);
	}