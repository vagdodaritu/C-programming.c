#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int minute=0;
    float distance=0.0;
    while(1)
    {
        minute++;
        distance+=0.5;
        printf("minute %d:distance covered=%f km\n",minute,distance);
        if(distance>=10)
        {
            printf("marathod completed");
            break;
        }
    }
}


