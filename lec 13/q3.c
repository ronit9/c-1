#include<stdio.h>

main(){
	int i , j;
	
	for(i=5 ; i>=1 ; i--){ //i=2
		for(j=i ; j<=5 ; j++){ //j=2  
			printf("%d ",i);
		}
		printf("\n");
	}
	
	
}

//5
//4 4
//3 3 3
//2 2 2 2
//1 1 1 1 1