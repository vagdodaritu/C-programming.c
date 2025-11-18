#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int marks;
    printf("Enter the marks(0-100):");
    scanf("%d",&marks);
    marks>=90?printf("Grade A"):
    marks>=80 && marks<90?printf("Grade B"):
    marks>=70 && marks<80?printf("Grade C"):
    marks>=60 && marks<70?printf("Grade D"):
    marks>0 && marks<60?printf("Grade F"):printf("Invalid marks");
    return 0;
}

