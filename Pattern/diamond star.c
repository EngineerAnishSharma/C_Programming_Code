#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n,k;
    int nsp,nst=1,ml;
    printf("Enter n:");
    scanf("%d",&n);
    ml=n/2+1;
    nsp=n/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}

