#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[10],arr2[10],i,n;
    int *ptr=&arr1;
    //clrscr();
    printf("Enter array size :\n");
    scanf("%d",&n);
    printf("Enter array element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }printf("\nPrinting array element:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=*ptr;
        ptr++;
    }
    printf("\nPrinting copying array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    getch();
}
