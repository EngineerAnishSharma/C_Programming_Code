#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r,c;
    //clrscr();
    printf("Enter row:\n");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%c ",65-1+j);
        }
        printf("\n");
    }
}


