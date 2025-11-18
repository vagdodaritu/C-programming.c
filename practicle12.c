#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    for(int i=1;i<=50;i++)
    {
        if(i%5==0)
        {
            printf("BOOK ID: %d(special addition)\n",i);
        }
        else
        {
            printf("BOOK ID:%d\n",i);
        }
    }
    return 0;
}
