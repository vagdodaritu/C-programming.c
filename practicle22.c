#include<stdio.h>
int main()
{
 printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
 int a[5][10],i,j,n,r,c;
 printf("Enter number of seats to be reserved:");
 scanf("%d",&n);
 for(i=0;i<5;i++)
 {
 for(j=0;j<10;j++)
 {
 a[i][j]=0;
 }
 }
 for(i=1;i<=n;i++)
 {
     printf("Enter row and seat number for reserved seat %d:",i);
 scanf("%d %d",&r,&c);
 r=r-1;
 c=c-1;
 a[r][c]='X';
 }
 for(i=0;i<5;i++)
 {
 printf("Row %d:",i+1);
 for(j=0;j<10;j++)
 {
 if(a[i][j]=='X')
 printf("\t%c",a[i][j]);
 else{
 printf("\t%d",a[i][j]);
 }
 }
 printf("\n");
 }
 }

