#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    //clrscr();
    printf("Enter your number:\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n%d is EVEN NUMBER",num);
    else
        printf("\n%d is ODD NUMBER",num);
    getch();
}
