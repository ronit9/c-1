#include<stdio.h>

main(){
	int num  , count = 0;
	
	printf("enter your_num:");
	scanf("%d",&num);
	
	
	while(num != 0){
		num /= 10;
		count++;
	}
	printf("%d",count);
}