#include<stdio.h>
int main()
{
    printf("Name: Ritu Vagdoda\nID Number:25CE128\n");
    int matchsticks=21,user_pick,computer_pick;
    printf("Welcome to the Matchsticks Game\n");
    printf("Rule :1. There are 21 matchsticks\n 2. you can pick 1 to 4 matchsticks\n3. The one who pick the last matchstick lose\n");
    while(matchsticks>1)
    {
       printf("Matchsticks left:%d\n",matchsticks);
       printf("pic1,2,3or 4 matchsticks:");
       if(user_pick<1 || user_pick>4)
       {
           printf("invalid choice");
           continue;
       }
       matchsticks-=user_pick;
       if(matchsticks==1)
       {
           printf("you picked the second last matchsticks\n computer win\n");
           break;
       }
       computer_pick=5-user_pick;
       if(matchsticks==1)
       {
           printf("computer pick %d matchstick");
           break;
       }
    }
    return 1;
}
