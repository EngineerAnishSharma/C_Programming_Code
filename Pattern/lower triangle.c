#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r;
    //clrscr();
    printf("Enter row:\n");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
