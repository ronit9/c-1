#include<stdio.h>

struct book
{
    char title[20];
    char author[20];
    int price;
};


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

   struct book b[n];

   for (int i = 0; i < n ; i++)
   {
        printf("\nenter title:=");
        scanf("%s", b[i].title);

        printf("enter author name:=");
        scanf("%s", b[i].author);

        printf("enter price:=");
        scanf("%d", &b[i].price);
   }
   
    return 0;
}
