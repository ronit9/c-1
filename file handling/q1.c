#include <stdio.h>

main()
{
    FILE *fp , *fp2 ;

    fp = fopen("even_file.txt","w");
    fp2 = fopen("odd_file.txt","w");

   if (fp !='\0')
   {
    for(int i = 50 ; i <= 70 ; i++){
        if (i % 2 == 0)
        {
            printf("even numbers are %d",i);
            fprintf(fp,"\n%d",i);
        }
        else{
            printf("odd numbers are %d",i);
            fprintf(fp2,"\n%d",i);
        }
        
    }
    
   }
   else{
    printf("file not created");
   }
   
    return 0;
}






// Q.1 File Handling
// Develop a program that writes even & odd numbers from 50 to 70 into two separate files.
// Example:
// Output:
// Even numbers from even_file.txt:
// 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
// Odd numbers from odd_file.txt:
// 51, 53, 55, 57, 59, 61, 63, 65, 67, 69