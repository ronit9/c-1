#include <stdio.h>

int main() {
	int c;
	float f;
	
	printf("Enter the value in Celsius: ");
	scanf("%d", &c);
	
	f = (c * 9/5) + 32;
	
	printf("Value in Fahrenheit: %f", f);
	
	return 0;
}