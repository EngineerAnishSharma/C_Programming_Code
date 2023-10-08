#include<stdio.h>
#include<conio.h>
#include<conio.h>
void main()
{
    char str[100];
    char *ptr=&str,i=0,len=0;
    //clrscr();
    printf("Enter your string :\n");
    gets(str);
    puts(str);
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    printf("Length of string using pointer is %d",len);
    getch();
}
