
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c ",65-1+k);
        }
        printf("\n");
    }
    getch();
}
