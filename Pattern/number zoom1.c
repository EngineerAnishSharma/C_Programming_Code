#include<stdio.h>
void main()
{
    int i,j,a,b,n,min=0;
    printf("Enter n;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i>j) min=j;
                else min=i;
                printf("%d",min);
            }
            printf("\n");
    }
    getch();
}
