#include <stdio.h>

main() {
    int a, b, c, d;


    printf("Enter the value for a: ");
    scanf("%d", &a);
    
    printf("Enter the value for b: ");
    scanf("%d", &b);
    
    printf("Enter the value for c: ");
    scanf("%d", &c);
    
    printf("Enter the value for d: ");
    scanf("%d", &d);

    
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("Max value is: %d\n");
            } else {
                printf("Max value is: %d\n");
            }
        } 
		else {
            if (c > d) {
                printf("Max value is: %d\n");
            } else {
                printf("Max value is: %d\n");
            }
        }
    } 
	
	else {
        if (b > c) {
            if (b > d) {
                printf("Max value is: %d\n");
            } else {
                printf("Max value is: %d\n");
            }
        }
		
		 else {
            if (c > d) {
                printf("Max value is: %d\n");
            } else {
                printf("Max value is: %d\n");
            }
        }
    
    }

 
}
