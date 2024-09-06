#include<stdio.h>



int main()
{
    int n , id;
    char name[20] , role[20];
    FILE *fp;

    fp = fopen("data.txt", "w");

    printf("enter number of emp :=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (fp != '\0')
        {
            printf("\nenter your id :=");
            scanf("%d", &id);

            printf("enter your name :=");
            scanf("%s", &name);

            printf("enter your role :=");
            scanf("%s", &role);
        }
        else{
            printf("file not found");
        }
        
    }
    
    

    return 0;
}
