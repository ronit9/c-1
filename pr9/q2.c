#include<stdio.h>
#include<string.h>

    struct student{
        int roll_no;
        char name[20];
        int chem_marks;
        int math_marks;
        int phy_marks;
    };

int main(int argc, char const *argv[])
{

    struct student s[2];
    float per;
    int sum=0;

    for (int i = 0; i < 2; i++)
    {
        printf("\nenter roll no:");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
        printf("enter name:");
        gets(s[i].name);
        printf("enter chem_marks:");
        scanf("%d",&s[i].chem_marks);
        printf("enter math_marks:");
        scanf("%d",&s[i].math_marks);
        printf("enenter phy_marks:");
        scanf("%d",&s[i].phy_marks);

    }

    for (int i = 0; i < 2; i++)
    {
         sum = s[i].chem_marks+s[i].math_marks+s[i].phy_marks;
         printf("%d",sum);

        per = ((float)sum/300)*100;
        
        printf("%d\t%s\t%d\t%d\t%d\t%.2f\n",s[i].roll_no,s[i].name,s[i].chem_marks,s[i].math_marks,s[i].phy_marks,per);
    }
    return 0;
}






// Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
// Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
// roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
// student.