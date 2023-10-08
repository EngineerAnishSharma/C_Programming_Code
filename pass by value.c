#include<stdio.h>
#include<conio.h>

void swapping(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
void main()
{
    int n1,n2;
    printf("Call by value....\n");
    printf("Enter two number :\n");
    scanf("%d %d",&n1,&n2);
    swapping(n1,n2);
    printf("After swapping ,n1 and n2 be %d and %d respectively",n1,n2);
    getch();
}
