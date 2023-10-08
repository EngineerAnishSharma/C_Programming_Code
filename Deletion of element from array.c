#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=0,n,pos,arr[100];
    //clrscr();
    printf("Enter your array size:\n");
    scanf("%d",&n);
    printf("\nEnter your element is array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter your position to want to delete that element from array:\n");
    scanf("%d",&pos);
    if(pos>=n)
        printf("Out of range !\nEnter valid position of element");
    else
    {
        printf("\nYour element is deleted :%d",arr[pos]);
        for(i=0;i<n;i++)
        {
            if(arr[pos]!=arr[i])
            {
                arr[j]=arr[i];
                j++;
            }
        }
        printf("\nPrinting Array after deletion process:\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    getch();
}
