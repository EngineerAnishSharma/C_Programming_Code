
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,a,p;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        a=i-1;
        for(p=1;p<i;p++)
        {
            printf("%d",a--);
        }
        printf("\n");
    }
    getch();
}

