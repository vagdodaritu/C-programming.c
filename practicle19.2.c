#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int i;
    int n=9;
    int mid=(n+1)/2;
    int space;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
        printf("\n");
        for(i=2;i<=mid;i++)
        {
            for(space=1;space<i;space++)
            printf(" ");
            printf("%d",i);
            int innerspace=n-(2*i);
            for(space=0;space<innerspace;space++);
            {
                printf(" ");
            }
            if(i!=mid)
            {
                printf("%d",n-i+1);
            }
            printf("\n");
        }
    }


