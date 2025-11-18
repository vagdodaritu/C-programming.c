#include<stdio.h>
int main()
{
    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int length,breadth,area,perimeter;
    printf("Enter value of length:");
    scanf("%d",&length);
    printf("Enter value of breadth:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Enter value of area is:%d\n",area);
    perimeter=2*(length+breadth);
    printf("Enter value of perimeter is %d\n",perimeter);
    return 0;
}
