#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,store,rev=0;
    //clrscr();
    printf("Enter your number :\n");
    scanf("%d",&n);
    store=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(store==rev)
        printf("\nThe given number is palindrome");
    else
        printf("\nThe given number is not palindrome");

}
