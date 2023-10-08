#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    //clrscr();
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping\na and b is %d and %d respectively",a,b);
    getch();
}
