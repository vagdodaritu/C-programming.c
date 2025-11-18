 #include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int n,i,a[5];
    printf("Enter the n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[1]!=i+1)
        {
            printf("ID no.%d is not present",i+1);
            break;
        }
    }
}

