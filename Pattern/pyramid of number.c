
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,a;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
        a=1;
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    getch();
}
