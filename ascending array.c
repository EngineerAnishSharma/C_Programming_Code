#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,arr[90],n,temp=0;
    //clrscr();
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSmallest element from list is :%d",arr[0]);
    printf("\nLargest element from list is %d",arr[n-1]);
    getch();
}
