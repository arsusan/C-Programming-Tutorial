/*
//wap to print
****
****
****
****
*/
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter colum:");
    scanf("%d",&n);
    printf("Enter Row:");
    scanf("%d",&r);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=r;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
