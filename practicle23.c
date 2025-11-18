#include<stdio.h>
int main()
{
 printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
 int i,j,n,profit;
 printf("Enter number of days:");
 scanf("%d",&n);
 int p[n];
 printf("Enter daily prices of fruit for %d days\n",n);
 for(i=0;i<n;i++)
 {
 printf("enter %d day price:",i+1);
 scanf("%d",&p[i]);
 }
 int max=0;
 int min=p[0];
 for(i=1;i<n;i++)
 {
 int profit=p[i]-min;
 if(profit>max)

 max=profit;
 if(p[i]<min)
 {
 min=p[i];
 }
 }
 printf("\n Max profit:%d",max);

 }

