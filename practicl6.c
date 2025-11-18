#include<stdio.h>
int main()
{
    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    float celsius,fahrenheit;
    printf("enter a temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the temperature in fehrenheit :%f\n",fahrenheit);
    return 0;
}
