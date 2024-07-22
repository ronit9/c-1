#include<stdio.h>

main(){
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);

	while(n >= 1){
		if(n % 2 == 1){
			printf("%d ",n);
		}
		n--;
	}
}