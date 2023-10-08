#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,equal = 0;
    char string1[50],string2[50];
    char *ptr1=string1;
    char *ptr2=string2;
    //clrscr();
    printf("Enter The First String: ");
    scanf("%s",string1);
    printf("Enter The Second String: ");
    scanf("%s",string2);
    ptr1 = string1;
    ptr2 = string2;
    while(*ptr1 == *ptr2)
    {
    if ( *ptr1 == '\0' || *ptr2 == '\0' )
    break;
    ptr1++;
    ptr2++;
    }
    if( *ptr1 == '\0' && *ptr2 == '\0' )
    printf("\n\nBoth Strings Are Equal.");
    else
    printf("\n\nBoth Strings Are Not Equal.");
    getch();
}
