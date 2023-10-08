#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,k,n;
    //clrscr();
    printf("Enter your Rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%c",65-1+k);
        }
        printf("\n");
    }
    getch();
}
