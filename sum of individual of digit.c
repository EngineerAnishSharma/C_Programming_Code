#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,rem;
    //clrscr();
    printf("Enter your number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("\nSum of individual digit number is %d",sum);
    getch();
}
