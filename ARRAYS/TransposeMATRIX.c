// Wap to print 3*3 matrix and print its transpose
#include<stdio.h>
int main()
{
    int a[2][2],i,j;

    printf("Enter Elements of matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
 scanf("%d\t",&a[i][j]);
        }printf("\n");
    }
    printf(" The transpose matrix:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
 printf("%d",a[j][i]);
        }

    }

    return 0;
}
