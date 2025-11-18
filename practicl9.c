#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int amount=0;
    printf("Enter a total amount:");
    scanf("%d",&amount);
    if(amount<1000)
    {
        printf("No discount applied");
    }
    else if(amount>=1000 && amount<5000)
    {

        printf("Customer get a 10 percent discount\n ");
        amount=amount-(amount*0.10);
        printf("Your final amount id: %d",amount);
    }
    else if(amount=5000)
    {

        printf("Customer get a 20 percent discount\n ");
        amount=amount-(amount*0.20);
        printf("Your final amount id: %d",amount);
    }
    else
    {
        printf("Invalid amount");
    }
    return 0;
}

