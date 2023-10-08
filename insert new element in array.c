#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50];
    int n,i,j,pos,num,temp=0;
    printf("Enter your array size:\n");
    scanf("%d",&n);
    printf("\nEnter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nEnter your number and position where you want to insert in array:\n");
    scanf("%d %d",&num,&pos);
    if(pos>=n)
    {
        printf("\nInsertion is not possible");
    }
    else
    {
        for(i=pos;i<n;i++)
        {
            temp=arr[i];
            arr[pos]=num;
            arr[i]=arr[pos];
            arr[++i]=arr[i];
            goto anish;
            break;

        }
        anish:
            for(i=n;i>pos;i--){
                arr[n]=arr[n-1];

            }
        for(i=0;i<n+1;i++)
        {
           printf("%d",arr[i]);
        }
    }
    getch();

}
