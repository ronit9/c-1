#include<stdio.h>

main(){
	int a , b =0 , c = 1 , next;
	
	next = b + c;
	
	printf("enter the value of a: ");
	scanf("%d ",&a);
	
	printf("%d %d", b , c);
	
	for(int i = 1 ; i < a ; i++){
		printf("%d ",next);
		b = c;
		c = next;
		next = b + c;
	}  
	
}