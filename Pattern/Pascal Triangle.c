#include<stdio.h>
#include<conio.h>
int factorial(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++){
        f=f*i;
    }
    return f;
}
int combination(int n,int r)
{
    int ncr;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
void main()
{
    int n,r,comb,i,j,k;
    printf("Entrr n:\n");
    scanf("%d",&n);
    //comb=combination(n,r);
    //printf("%d",comb);
    for(i=0;i<=n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            comb=combination(i,j);
            printf("%d ",comb);
        }
        printf("\n");
    }
    getch();
}
