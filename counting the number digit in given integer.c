#include<stdio.h>
#include<conio.h>
void main()
{
    int num,count=0,rem;
    //clrscr();
    printf("Enter your number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        count++;
        num=num/10;
    }
    printf("\n Total number of digits in given number: %d",count);
    getch();
}
