#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    //clrsacr();
    printf("Enter your year:\n");
    scanf("%d",&year);
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
        printf("\n%d is LEAP YEAR",year);
    else
        printf("\n%d is NOT LEAP YEAR",year);
    getch();
}
