#include<stdio.h>
#include<conio.h>
void input_print_matrix(int matrix[10][10],int row,int col)
{
    int i,j;
    printf("\nEnter matrix element :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Printing matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}

void main()
{
    int i,j,k,row1,col1,row2,col2,sum,m1[10][10],m2[10][10],m3[10][10];
    //clrscr();
    printf("\nEnter row and column of matrix 1:\n");
    scanf("%d %d",&row1,&col1);
    printf("\nEnter row and column of matrix 2:\n");
    scanf("%d %d",&row2,&col2);
    if(col1==row2)
    {
        input_print_matrix(m1,row1,col1);
        //print_matrix(m1,row1,col1);
        input_print_matrix(m2,row2,col2);
        //print_matrix(m2,row2,col2);
        printf("\nMultiplication of two matrix is:\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                sum=0;
                for(k=0;k<col1;k++)
                {
                    sum=sum+m1[i][k]+m2[k][j];
                }
                m3[i][j]=sum;
            }
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nMultiplication not possible ...");
    getch();
}
