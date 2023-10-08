#include<stdio.h>
#include<conio.h>
void max_min(int n1,int n2);
void main()
{
    int n1,n2;
    //clrscr();
    printf("Enter two number:\n");
    scanf("%d %d",&n1,&n2);
    max_min(n1,n2);
    getch();

}
void max_min(int n1,int n2)
{
    if(n1>n2)
        printf("\n%d is maximum",n1);
        printf("\n%d is minimum",n2);
}

