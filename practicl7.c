#include<stdio.h>
int main()
{
    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int age;
    printf("enter a visitor age: ");
    scanf("%d",age);

    if(age>0 && age<=12)
    {
        printf("Visitor is child. For chiid free entery");
    }
    else
    {
        printf("Visitor must pay for ticket");
    }
    return 0;
}

