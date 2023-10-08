#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double a,b,c,discriminant,root1,root2,real,img;
    //clrscr();
    //ax^2 + bx + c = 0
    printf("Enter a value:\n");
    scanf("%lf",&a);
    printf("\nEnter b value:\n");
    scanf("%lf",&b);
    printf("\nEnter c value:\n");
    scanf("%lf",&c);
    discriminant=b*b-4*a*c;
    if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("\nRoots of an equation is %0.3lf",root1);
    }
    else if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant)/(2*a));
        root2=(-b-sqrt(discriminant)/(2*a));
        printf("\nRoots of an equation is %0.3lf and %0.3lf",root1,root2);
    }
    else if(discriminant<0)
    {
        real=-b/(2*a);
        img=sqrt(-(discriminant))/(2*a);
        printf("\nRoots of an equation is %0.3lf + i%0.3lf and %0.3lf - i%0.3lf",real,img,real,img);
    }
    else
        printf("\nEnter valid number");
    getch();

}
