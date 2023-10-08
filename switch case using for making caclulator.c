#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2;
    char choice;
    //clrscr();
    printf("Menu of Simple calculator\n");
    printf("+. Addition\n-. Subtraction\n*. Multiplication\n/. Division");
    printf("\nEnter your choice according to the Menu:\n");
    scanf("%c",&choice);
    printf("\nEnter two number:\n");
    scanf("%d %d",&n1,&n2);
    switch(choice)
    {
    case '+':
        printf("\nAddition of two number is %d",n1+n2);
        break;
    case '-':
        printf("\nSubtraction pof two number is %d",n1-n2);
        break;
    case '*':
        printf("\nMultiplication of two number is%d",n1*n2);
        break;
    case '/':
        printf("\nDivision of two number is %d",n1/n2);
        break;
    default:
        printf("\nEnter valid number");
    }
    getch();
}
