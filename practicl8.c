#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>0 && age<18)
    {
        printf("Not Eligible for opening saving account");
    }
    else if(age>=18 && age<=120)
    {

        printf("Eligible for opening saving account ");
    }
    else{
        printf("Invalid age");
    }
}
