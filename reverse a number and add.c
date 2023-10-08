#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,reverse=0,sum=0;
    //clrscr();
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        reverse=reverse*10+rem;
        num/=10;
    }
    printf("\nAfter Reversing a number:\n%d",reverse);
    printf("\nSum of all digit of a number:\n%d",sum);
    getch();
}

