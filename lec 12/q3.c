#include<stdio.h>

main(){
	
	int table_number;
	
	printf("ente the table_number:");
	scanf("%d",&table_number);
	
	for(int i = 1; i <= 10 ; i++){
		printf("%d * %d = %d\n", table_number , i , table_number * i);
	}
	
}