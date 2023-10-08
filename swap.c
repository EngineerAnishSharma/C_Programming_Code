#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp=0;
    //clrscr();
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, a and b is %d and %d respectively",a,b);
    getch();
}
