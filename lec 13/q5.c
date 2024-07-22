#include<stdio.h>

main(){
	int i , j;
	
	for(i=1 ; i<=5 ; i++){ //i=1
		for(j=i ; j<=5 ; j++){ //j=1 
			printf("%d ",i);
		}
		printf("\n");
	}
	
	
}

//1 1 1 1 1
//2 2 2 2
//3 3 3
//4 4
//5