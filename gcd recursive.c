#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else{
        if(a<b)
            return gcd(b,a);
        else
            return gcd(b,a%b);
    }

}
void main()
{
    int n1,n2,GCD;
    //clrscr();
    printf("Enter your two number :\n");
    scanf("%d %d",&n1,&n2);
    GCD=gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1,n2,GCD);
    getch();
}
