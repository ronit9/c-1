#include<stdio.h>

main(){
	int last_number , fectorial = 1;
	
	printf("enter thr last_number:" );
	scanf("%d",&last_number);
	
	for(int i = 1; i <= last_number ; i++){
		fectorial = fectorial * i;
	}
	printf("%d",fectorial);
}