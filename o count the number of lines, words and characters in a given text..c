#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int count1=0,count2=0,count3=0,i=0;
    char str[100];
    printf("Enter a string/text :\n");
    gets(str);
    puts(str);
    while(str[i]!='\0'){
        if(str[i]=='\n'){
            count1++;
        }
        else if(str[i]==' '){
            count2++;
        }
        else if(str[i]!='\n' || str[i]!=' '){
            count3++;
        }
        i++;
    }
    if(count3>0){
        count1++;
        count2++;
    }
    printf("\nNumber of lines is %d",count1);
    printf("\nNumber of words is %d",count2);
    printf("\nNumber of characters is %d",count3);
    getch();

}
