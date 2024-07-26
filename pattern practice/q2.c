#include <stdio.h>

main(){

    int i , j , n=1;
    char alp='B';

    for(i=1 ; i<=5 ; i++){ // 1<=5

        for(j=i ; j<=5 ; j++){ // 2<=5
          if (j % 2 == 0)
          {
           
              printf("%c ",alp);
               alp++;
               alp++;
              
          }
          else{
              
              printf("%d ",n); // 1 A
                n++;
              n++; 
          }
          
            
        }
        printf("\n");
    }
}

// 1 B 3 D 5
// F 7 H 9
// J 11 L
// 13 N
// 15