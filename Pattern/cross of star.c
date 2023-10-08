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
        for(j=1;j<=r;j++)
        {
            if(i==j || (i+j)==r+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


