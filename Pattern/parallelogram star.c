#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,n;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            printf("*");
        }
        for(l=1;l<i;l++)
        {
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
