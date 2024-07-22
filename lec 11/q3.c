#include<stdio.h>

main(){
	int f, l;
	
	printf("enter the value of f:");
	scanf("%d",&f);
	
	printf("enter the value of l");
	scanf("%d",&l);
	
	while(f<=l){
	if(f % 4 == 0){
		printf("%d ",f);
	}
	f++;
	}
}