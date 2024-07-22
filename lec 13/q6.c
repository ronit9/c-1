#include<stdio.h>

main(){
	int i , j;
	
	for(i=5 ; i>=1 ; i--){ //i=1
		for(j=1 ; j<=i ; j++){ //j=0 
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	
	
}

//1 0 1 0 1
//1 0 1 0
//1 0 1
//1 0
//1