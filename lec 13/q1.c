#include<stdio.h>

main(){
	int i , j;
	
	for(i=1 ; i<=5 ; i++){ //i=2
		for(j=i ; j>=1 ; j--){ //j=2  
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
}
//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1