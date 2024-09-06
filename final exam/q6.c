#include<stdio.h>



int main()
{
    int n , id;
    char name[20] , role[20];
    FILE *fp;

    

    printf("enter number of emp :=");
    scanf("%d", &n);

    fp = fopen("data.txt", "w");

    for (int i = 0; i < n; i++)
    {
        if (fp != '\0')
        {
            printf("\n\n");
            printf("\nenter your id :=");
            scanf("%d", &id);
            fprintf(fp, "ID: %d\n", id);

            fflush(stdin);
            printf("enter your name :=");
            scanf(" %[^\n]", name);
            fprintf(fp, "Name: %s\n", name);

            printf("enter your role :=");
            scanf(" %[^\n]", role); 
            fprintf(fp, "role: %s\n", role);
        }
        else{
            printf("file not found");
        }
        
    }
    
    

    return 0;
}
