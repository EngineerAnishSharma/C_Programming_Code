#include <stdio.h>

int main()
{
    int i,j,n,k,a=1,m;
    int nsp,nst=1,ml;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n*2-1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf(" ");
        }
        for(m=i;m<=n-1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

