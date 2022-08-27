
#include<stdio.h>
int main()
{
    int row,col,i,j;

    printf("Enter rows:");
    scanf("%d",&row);

 printf("Enter colum:");
    scanf("%d",&col);

    int a[row][col],b[row][col],c[row][col];
    printf("Enter First matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
               
        }
    }
    printf("Enter second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
           
        }
    }
 
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("The sum of two matrix is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
      
        }
        printf("\n");
    }
 

    return 0;
}


