#include <stdio.h>

int main()
{
    int i,j,n,k,a,m;
    int nsp,nst=1,ml=1;
    printf("Enter n:");
    scanf("%d",&n);
    int odd=n*2-1;
    for(i=1;i<=odd;i++)
    {
        if(i<=odd/2+1)
            printf("%d",i);
        else
            printf("%d",odd-i+1);
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {
        a=1;
        for(j=i;j<=n-1;j++)
        {
            printf("%d",a++);
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf(" ");
        }
        for(m=i;m<=n-1;m++)
        {
            printf("%d",n-m);
        }
        printf("\n");
    }
    return 0;
}

