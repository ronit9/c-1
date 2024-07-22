#include<stdio.h>

main(){
	int n, a;
	
	printf("enter the value for n:");
	scanf("%d", &n);
	
	printf("enter the value for a:");
	scanf("%d", &a);
	
	do{
		if(a%2==0){
			printf("%d ",a);
		}
		a++;
		
	}
	while(a<=n);
	
	
}