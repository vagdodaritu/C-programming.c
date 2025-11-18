#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int i,num,even_count=0,odd_count=0,negative_count=0,positive_count=0;
    printf("Enter 25 integer: ");
    for(i=1;i<25;i++)
    {
        printf("Enter integer %d:",i);
        scanf("%d",&num);
        if(num>0)
        {
            positive_count++;
        }
        else if(num<0)
        {
            negative_count++;
        }
        if(num%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("The total number of positive:%d\n",positive_count);
    printf("The total number of negative:%d\n",negative_count);
    printf("The total number of even:%d\n",even_count);
    printf("The total number of odd:%d\n",odd_count);
}

