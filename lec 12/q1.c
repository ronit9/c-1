#include<stdio.h>

main(){
	
	int last_number , total = 0 , number = 1;
	

	
	printf("ente the last_number:");
	scanf("%d", &last_number); //3
	
	for(int number = 1 ; number <= last_number ; number++){ //4
		total+=number; // 3+1=3
		}
		printf("%d ",total);
}
		
		