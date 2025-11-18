#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int seconds;
    printf("Enter the number of seconds for countdown:");
    scanf("%d",&seconds);
    if(seconds<0)
    {
        printf("Invalid input");
    }
    while(seconds>=0)
    {
        printf("%d\n",seconds);
        seconds--;
    }
    printf("countdown complete!\n");
    return 0;
}

