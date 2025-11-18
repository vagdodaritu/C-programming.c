#include<stdio.h>
int main()
{
    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    double population=1441981744;
    double womenper=48.4;
    double menlit=80.95;
    double womenlit=62.84;

    double women=(womenper/100)*population;
    double men=population-women;
    double illitmen=(1-(menlit/100))*men;
    double illitwomen=(1-(womenlit/100))*women;

    printf("total poputation:%f\n",population);
    printf("men :%f\n",men);
    printf("women: %f\n",women);
    printf("illiterate men:%f\n",illitmen);
    printf("illiterate women:%f",illitwomen);
    printf("total illitrate poputation :%f\n",illitmen+illitwomen);
    return 0;
}
