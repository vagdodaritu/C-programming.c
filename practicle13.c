#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    float balance=5000,amount;
    int choice;
    while(1)
    {
        printf("Current Balance : rs.%2f\n",balance);
        printf("Enter amount to withdraw(or 0 to exit):");
        scanf("%f",amount);
        if(amount ==0)
        {
            printf("Thank you for using the ATM\n");
            break;
        }
        else if(amount<0)
        {
            printf("Invalid amount.");
        }
        else if(amount>balance)
        {
            printf("Insufficiant balance\n");
        }
        else
        {
            balance-=amount;
            printf("withdraw successful.Remaining balance :rs.%2f\n",balance);
        }

    }
    return 0;
}

