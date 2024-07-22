#include<stdio.h>

main(){
	int i , j;
	
	for(i=1 ; i<=5 ; i++){ //i=1
		for(j=i ; j<=5 ; j++){ //j=1 
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
}
//1 2 3 4 5
//2 3 4 5
//3 4 5
//4 5
//5