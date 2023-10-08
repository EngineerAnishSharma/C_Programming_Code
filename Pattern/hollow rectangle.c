#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r,c;
    //clrscr();
    printf("Enter row and column:\n");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

