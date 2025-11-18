#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=0;k<5-i;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
            printf("%d",j);
        for(j=2;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(k=0;k<5-i;k++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("%d",j);
        for(j=2;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}

