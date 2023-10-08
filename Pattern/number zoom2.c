#include<stdio.h>
void main()
{
    int i,j,a,b,n,min=0;
    printf("Enter n;");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
            {
                a=i;
                if(a>n) a=2*n-i;
                b=j;
                if(b>n) b=2*n-j;
                if(a<b) min=a;
                else min=b;
                printf("%d",min);
            }
            printf("\n");
    }
    getch();
}

